#pragma once

#include <math.h>
#include <stdio.h>

#define PI 3.14159265359
#define PI2 6.28318530718

const double mu= 398600.4415;//гравитационаа€ посто€нна€
const double Re = 6371.0;// радиус земли
const double tograd = 180/PI;//перевод в градусы
const double torad = PI/180;//первод в радианы
const double Wer=0.7292115e-4;//углова€ скорость вращени€ земли
struct Vector3x1
{
	double x;
	double y;
	double z;
};
struct Nip
{
	double lat;
	double lon;
	double h;
	struct Vector3x1 Grv;
	double gammamin;
	char name [20]; 
	double *gamma;
	double *time;
	
};
double norm(struct Vector3x1 vector ) {	//длинна вектора
	return( sqrt (vector.x * vector.x + vector.y * vector.y + vector.z * vector.z));
};
struct Vector3x1 getsquare(struct Vector3x1 vector, struct Vector3x1 v) { //нахождени€ вектора интеграла площадей
	struct Vector3x1 s;
	s.x = vector.y * v.z - vector.z * v.y;
	s.y = vector.z * v.x - vector.x * v.z;
	s.z = vector.x * v.y - vector.y * v.x;
	return(s);
};
struct Vector3x1 getlaplasa(struct Vector3x1 vector, struct Vector3x1 v, struct Vector3x1 s,double rvec) {	//нахождени вектора интеграла лапласа
	struct Vector3x1 f;
	f.x = v.y * s.z - s.y * v.z - mu * (vector.x / rvec);
	f.y = v.z * s.x - s.z * v.x - mu * (vector.y / rvec);
	f.z = v.x * s.y - s.x * v.y - mu * (vector.z / rvec);
	return(f);
};
double get_e(struct Vector3x1 f) { //нахождение эксцентриситета
	return(norm(f) / mu);
}
double get_param(struct Vector3x1 s) {	//фокальный параметр
	return((norm(s)*norm(s)) / mu);
}
struct Vector3x1 onevector(struct Vector3x1 f, double r) { // единичный вектор
	f.x = f.x / r;
	f.y = f.y / r;
	f.z = f.z / r;
	return(f);
};
double get_i(struct Vector3x1 s, double r) { //наклонение орбиты
	return(acos(s.z / r));
}
double get_Om(struct Vector3x1 s, struct Vector3x1 vector, double r, double i, double rvec) {	// долгота восход€щего узла
	double Om;
	double sni = sin(i);
	if (i==0)
	{
		if (vector.y >= 0) {
			Om = acos((vector.x) / rvec);
		}
		else {
			Om = PI2 - acos((vector.x) / rvec);
		}
	}
	else {
		if ((s.x * sni / r) >= 0) {
			Om = acos((-s.y) / (r*sni));
		}
		else
		{
			Om = PI2 - acos((-s.y) / (r*sni));
		}
	}
	return(Om);
}
double get_u(struct Vector3x1 vector,double rvec, double i,double Om) {	//аргумент широты
	double u;
	if (i == 0) {
		if (vector.y >= 0) {
			u = acos((vector.x) / rvec);
		}
		else {
			u = PI2 - acos((vector.x) / rvec);
		}

	}
	else
	{
		if (vector.z >= 0) {
			u = acos((vector.x * cos(Om) + vector.y * sin(Om)) / rvec);
		}
		else {
			u = PI2 - acos((vector.x * cos(Om) + vector.y * sin(Om)) / rvec);
		}
	}
	return(u);
}
double get_w(struct Vector3x1 fone, double e, double i, double Om,double u) {	//аргумент перицента (fone-единичный вектор интеграла лапласа)
	double w,sw,cw;
	if (e == 0) {
		w = u;
	}
	else {
		if (cos(i)==0)
		{
			sw = fone.z;
			cw = fone.y / sin(Om);
		}
		else
		{
			sw = (-fone.x*sin(Om) + fone.y*cos(Om)) / cos(i);
			cw = fone.x * cos(Om) + fone.y*sin(Om);
		}
		if (sw >= 0)
		{
			w = acos(cw);
		}
		else
		{
			w =PI2 - acos(cw);
		}
	}

	return(w);
}
double getMajorAxis(double param, double e) {	//больша€ полуось
	return(param / (1 - e * e));
}
double getteta(double u, double w) {	//истинна€ аномали€
	return(u-w);
}
double getrper(double a, double e) {	//радиус периге€
	return((1 - e) * a);
}
double getrap(double a, double e) {	//радиус апоге€
	return((1 + e) * a);
}
double gethper(double rper) { //высота периге€ при расчете с одинаковым радиусом земли
	return(rper-Re);
}
double gethap(double rap) {	//высота апоге€ при расчете с одинаковым радиусом земли
	return(rap - Re);
}
double getr(double p, double teta, double e) {	//длинна радиуса-вектора
	return(p/(1+e*cos(teta)));
}
struct Vector3x1 getXGrKP(double u, double Om, double i, double r) { //нахождение координат x,y,z в √р ѕ
	struct Vector3x1 X;
	double csu = cos(u);
	double snu = sin(u);
	double csOm = cos(Om);
	double snOm = sin(Om);
	double csi = cos(i);
	X.x = r * (csu*csOm - snu * snOm*csi);
	X.y = r * (csu*snOm + snu * csOm*csi);
	X.z = r * (snu * sin(i));
	return(X);
}
struct Vector3x1 getVGrKP(struct Vector3x1 vect, double Vr, double omega, double r, double Om, double u, double i) { //нахождение скорости V.x,V.y,V.z в √р ѕ
	struct Vector3x1 V;
	double csu = cos(u);
	double snu = sin(u);
	double csOm = cos(Om);
	double snOm = sin(Om);
	double csi = cos(i);
	V.x = (Vr / r) * vect.x - r * omega * (snu*csOm + csu * snOm*csi);
	V.y = (Vr / r) * vect.y - r * omega * (snu*snOm - csu * csOm*csi);
	V.z = (Vr / r) * vect.z - r * omega * (-csu * sin(i));
	return(V);
}
double getradialspeed(double p, double teta, double e) {	//радиальна€ скорость
	return(sqrt(mu / p)*e*sin(teta));
}
double getanglespeed(double p, double r) { //углова€ скорость
	return(sqrt(mu * p)/(r*r));
}
double getparam(double rper, double e) {	//фокальный параметр (rper-радиус периге€)
	return(rper*(1+e));
}
void getorbparam(struct Vector3x1 X, struct Vector3x1 V, double &ec, double &a, double &i, double &Om, double &u, double &w, double &teta) {	//нахождени  параметров орбиты
	struct Vector3x1 s;
	struct Vector3x1 f;
	s = getsquare(X, V);
	double R_ = norm(X);
	f = getlaplasa(X, V, s, R_);
	double p = get_param(s);
	ec = get_e(f);
	double rs = norm(s);
	struct Vector3x1 sone = onevector(s, rs);
	double rf = norm(f);
	struct Vector3x1 fone = onevector(f, rf);
	i = get_i(s, rs);
	Om = get_Om(s, X, rs, i, R_);
	u = get_u(X, R_, i, Om);
	w = get_w(fone, ec, i, Om, u);
	teta = getteta(u, w);
	a = getMajorAxis(p, ec);
}
void getGrKP(struct Vector3x1 &X, struct Vector3x1 &V, double ec, double a, double i, double Om, double u, double w, double teta ) {	//нахожение координат в √р ѕ (ec=e)
	double p = getparam(getrper(a, ec), ec);
	double r = getr(p, teta, ec);
	X = getXGrKP(u, Om, i, r);
	double omega = getanglespeed(p, r);
	double Vr = getradialspeed(p, teta, ec);
	V = getVGrKP(X, Vr, omega, r, Om, u, i);
}
double getperiod(double a) {	//период
	return(PI2*a*sqrt(a / mu));
}
double getdjul(int day, int mon, int year, int hour, int min, int sec)	//юлианска€ дата
{
long int i1=(mon-14)/12,
	i2=year+4800+i1,
	i3=day-32075+1461*i2/4,
	i4=i3+367*(mon-2-i1*12)/12-3*((i2+100)/100)/4;
	return  (i4-.5+hour/24.+min/1440.+sec/86400.);
}

double startime(int day, int mon, int year, int hour, int min, int sec) {	//звездное врем€
	double d = getdjul(day, mon, year, hour, min, sec) - 2451545.0;
	double M = (hour * 60 * 60 + min * 60 + sec)/86164.1;
	double tau = d / 36525;
	double s = 1.7533685592 + 0.0172027918051* d + 6.2831853072 * M + 6.7707139e-6 * tau * tau - 4.50876e-10 * tau * tau * tau;
	return(s);
}
void getlatilon(double &lat, double &lon,struct Vector3x1 X, double t) {	//нахождение широты и долготы
	lat=asin(X.z/norm(X)); // широта
	lon=atan2(X.y,X.x)-Wer*t;	//долгота
	while (lon < -PI) { lon = PI2 + lon;}
}
double getsnova_u(double teta, double w) {	//аргумент широты
	return(teta + w);
}
double getecanomal(double teta, double e) {	//эксцентрическа€ аномали€
	return(2 *atan( sqrt((1 - e) / (1 + e))*tan(teta / 2)));
}
void kepler(double a, double e, double &E, double t) {	//решение уравнени€  еплера (тут t-текущее врем€ минус момент прохождение периге€)
	double deltaE = 10000;
	double epsilon = 1e-8;
	double M = sqrt(mu / (a*a*a))*t;
	E = M;
	double fE, fEpr, deltaE1;
	while (abs(deltaE)>epsilon) {
		fE = E - e*sin(E) - M;
		fEpr = 1 - e*cos(E);
		deltaE1 = -(fE / fEpr);
		if (abs(deltaE1) - abs(deltaE)>0) {
			break;
		}
		else { deltaE = deltaE1; }
		E = E + deltaE;
		if (E >= PI2) {
			E = E - PI2;
		}
	}
}
double get__truean(double E, double e) {	//истинна€ аномали€
	double truean=2 * atan(sqrt((1 + e) / (1 - e))*tan(E / 2));
	return(truean);
}
double gettper(double t, double midan, double n) {	//момент прохождени€ периге€ (t-начальное врем€)
	return(t - midan / n);
}
double getn(double period) {	//средн€€ углова€ скорость
	return(PI2 / period);
}
double getmidan(double Ean,double e) {	//средн€€ аномали€
	return(Ean-e*sin(Ean));
}
void gertransfermatrix (double t, double A[3][3]){
	double csalph = cos(Wer*t);
	double snalph =	sin(Wer*t);
	A[0][0]	= csalph;
	A[0][1]	= snalph;
	A[0][2]	= 0;
	A[1][0]	= -snalph;
	A[1][1]	= csalph;
	A[1][2]	= 0;
	A[2][0]	= 0;
	A[2][1]	= 0;
	A[2][2]	= 1;
}
double getanglebetwvectors(struct Vector3x1 vec1,struct Vector3x1 vec2){
	return(acos((vec1.x*vec2.x+vec1.y*vec2.y+vec1.z*vec2.z)/(norm(vec1)*norm(vec2))));
}
struct Vector3x1 getGRvNip(double lat,double lon,double h){
	struct Vector3x1 v;
	double cslat = cos(lat);
	v.x	= cslat*cos(lon)*h;	
	v.y	= cslat*sin(lon)*h;
	v.z	= sin(lat)*h;
	return(v);
}
struct Vector3x1 getGRvSat(struct Vector3x1 Gro,double A[3][3]){
	struct Vector3x1 v;
	v.x	= A[0][0] * Gro.x + A[0][1] * Gro.y;	
	v.y	= A[1][0] * Gro.x + A[1][1] * Gro.y;
	v.z	= Gro.z;
	return(v);
}
double getangleplace(struct Vector3x1 vec1,struct Vector3x1 vec2){
	return( (PI/2) - acos((vec1.x*vec2.x+vec1.y*vec2.y+vec1.z*vec2.z)/(norm(vec1)*norm(vec2))));
}
bool isFisible (double gammamin, double gamma){
	if (gamma >= gammamin ){
		return(true);
	}else{return(false);}
}
struct Vector3x1 getDistSatNip(struct Vector3x1 Grv,struct Vector3x1 GrNip){
	struct Vector3x1 v;
	v.x	= Grv.x - GrNip.x;	
	v.y	= Grv.y - GrNip.y;
	v.z	= Grv.z - GrNip.z;
	return(v);
}