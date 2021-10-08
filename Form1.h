#pragma once
#include "func.h"
#include <fstream>
#include <math.h>
namespace orbita {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	/// <summary>
	/// Сводка для Form1
	/// </summary>
	struct Nip Earstation [15];
	int k[15];
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TabPage^  tabPage4;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;














	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"863,745";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 131);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 38);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"5706,040";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 186);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"z";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(51, 222);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 38);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"-4029,574";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 32);
			this->label4->TabIndex = 7;
			this->label4->Text = L"V.x";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(51, 310);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 38);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"1,899047";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 367);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 32);
			this->label5->TabIndex = 9;
			this->label5->Text = L"V.y";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(51, 403);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 38);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"4,000922";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 458);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 32);
			this->label6->TabIndex = 11;
			this->label6->Text = L"V.z";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(51, 491);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(228, 38);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"6,079740";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(432, 472);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(264, 117);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Перасчет----->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(432, 110);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(264, 117);
			this->button2->TabIndex = 13;
			this->button2->Text = L"<-----Перерасчет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 32);
			this->label7->TabIndex = 15;
			this->label7->Text = L"a";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(32, 41);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(228, 38);
			this->textBox7->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(27, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 32);
			this->label8->TabIndex = 17;
			this->label8->Text = L"e";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(32, 131);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(228, 38);
			this->textBox8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 186);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 32);
			this->label9->TabIndex = 19;
			this->label9->Text = L"i";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(32, 222);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(228, 38);
			this->textBox9->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(27, 277);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 32);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Om";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(32, 310);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(228, 38);
			this->textBox10->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 367);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 32);
			this->label11->TabIndex = 23;
			this->label11->Text = L"w";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(32, 403);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(228, 38);
			this->textBox11->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(27, 458);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 32);
			this->label12->TabIndex = 25;
			this->label12->Text = L"u";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(32, 491);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(228, 38);
			this->textBox12->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(27, 539);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(63, 32);
			this->label13->TabIndex = 27;
			this->label13->Text = L"teta";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(32, 572);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(228, 38);
			this->textBox13->TabIndex = 26;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"0", L"1", L"2", L"3", L"4"});
			this->comboBox1->Location = System::Drawing::Point(432, 334);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(265, 39);
			this->comboBox1->TabIndex = 29;
			this->comboBox1->Text = L"0";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(432, 298);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(262, 32);
			this->label14->TabIndex = 30;
			this->label14->Text = L"количество витков";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Location = System::Drawing::Point(731, 64);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(299, 682);
			this->panel1->TabIndex = 31;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->textBox14);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Location = System::Drawing::Point(67, 64);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(328, 682);
			this->panel2->TabIndex = 32;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(45, 539);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 32);
			this->label17->TabIndex = 13;
			this->label17->Text = L"t";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(51, 572);
			this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(228, 38);
			this->textBox14->TabIndex = 12;
			this->textBox14->Text = L"4659,925 ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(165, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(103, 39);
			this->label15->TabIndex = 33;
			this->label15->Text = L"ГрКП";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(725, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(326, 39);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Параметры орбиты";
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->CausesValidation = false;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->HotTrack = true;
			this->tabControl1->Location = System::Drawing::Point(11, 12);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1211, 820);
			this->tabControl1->TabIndex = 35;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Location = System::Drawing::Point(10, 48);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1191, 762);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Перерасчет";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(432, 625);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(263, 105);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Сохранить трассу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Location = System::Drawing::Point(10, 48);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1191, 762);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Трасса";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->AxisX->Interval = 60;
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisX->Maximum = 180;
			chartArea1->AxisX->MaximumAutoSize = 30;
			chartArea1->AxisX->Minimum = -180;
			chartArea1->AxisX->ScaleView->Zoomable = false;
			chartArea1->AxisX->ScrollBar->Enabled = false;
			chartArea1->AxisY->Interval = 30;
			chartArea1->AxisY->Maximum = 90;
			chartArea1->AxisY->Minimum = -90;
			chartArea1->BackImage = L"C:\\Users\\Anton\\Documents\\Visual Studio 2010\\Projects\\orbita\\orbita\\World-Coloured" 
				L".bmp";
			chartArea1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			chartArea1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chart1->Location = System::Drawing::Point(3, 2);
			this->chart1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->MarkerColor = System::Drawing::Color::Black;
			series1->MarkerSize = 2;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->MarkerColor = System::Drawing::Color::Green;
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series3->MarkerColor = System::Drawing::Color::Yellow;
			series3->MarkerSize = 4;
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1185, 758);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart2);
			this->tabPage3->Location = System::Drawing::Point(10, 48);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1191, 762);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"НИП (график)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->AxisY->Maximum = 90;
			chartArea2->AxisY->Minimum = 0;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			this->chart2->Location = System::Drawing::Point(5, 5);
			this->chart2->Name = L"chart2";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->CustomProperties = L"EmptyPointValue=Zero";
			series4->Name = L"Series1";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(1175, 756);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->textBox15);
			this->tabPage4->Location = System::Drawing::Point(10, 48);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1191, 762);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"НИП (таблица)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Menu;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column1, 
				this->Column2, this->Column3, this->Column4});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView1->Location = System::Drawing::Point(312, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(879, 762);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"Gammamax";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 193;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"tнач";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 95;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"tкон";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 94;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"deltat";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 111;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Location = System::Drawing::Point(12, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(261, 83);
			this->button4->TabIndex = 2;
			this->button4->Text = L"ПОКАЗАТЬ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(18, 28);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(84, 36);
			this->label18->TabIndex = 1;
			this->label18->Text = L"НИП";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(12, 67);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(261, 38);
			this->textBox15->TabIndex = 0;
			this->textBox15->Text = L"3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1253, 849);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		chart1->Series[0]->Points->Clear();
		chart1->Series[2]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		struct Vector3x1 r;
		struct Vector3x1 V;
		double t;
		r.x = Convert::ToDouble(textBox1->Text);
		r.y = Convert::ToDouble(textBox2->Text);
		r.z = Convert::ToDouble(textBox3->Text);
		V.x = Convert::ToDouble(textBox4->Text);
		V.y = Convert::ToDouble(textBox5->Text);
		V.z = Convert::ToDouble(textBox6->Text);
		t = Convert::ToDouble(textBox14->Text);
		double ec, a, i, Om, u, w, teta;
		getorbparam(r, V, ec, a, i, Om, u, w, teta);
		double V_ = norm(V);
		textBox8->Text = Convert::ToString(ec);
		textBox9->Text = Convert::ToString(i * tograd);
		textBox7->Text = Convert::ToString(a);
		textBox10->Text = Convert::ToString(Om * tograd);
		textBox12->Text = Convert::ToString(u * tograd);
		textBox11->Text = Convert::ToString(w * tograd);
		textBox13->Text = Convert::ToString(teta * tograd);
		int T=Convert::ToInt16(comboBox1->Text);
		double lat, lon;
		double deltat = 1;
		double period = getperiod(a);
		double Ean= getecanomal(teta,ec);
		double midan=getmidan(Ean,ec);
		char str [20];
		int n;
		double rdn;
		ifstream fin("GS_list.txt");
		for (int count = 0; count < 7; count ++ ) {
			fin >> str;
		}
		fin >> n;

		for (int count = 0; count < 15; count ++ ) {
			fin >> rdn;
			Earstation [count].lat = rdn;
			fin >> rdn;
			Earstation [count].lon = rdn;
			fin >> rdn;
			Earstation [count].h = rdn;
			fin >> rdn;
			Earstation [count].gammamin = rdn;
			fin >> Earstation [count].name;
			//for (int i = 0; i < 20; i ++ ) {
			//Earstation [count].name[i] = str[i];
			//}
			chart1->Series[1]->Points->AddXY(Earstation [count].lon ,Earstation [count].lat);
			Earstation [count].Grv = getGRvNip( Earstation [count].lat*torad,Earstation [count].lon*torad,Re+Earstation [count].h);
		}
		fin.close();
		FILE *out;
		out = fopen("res1_with.txt", "w");
		getlatilon(lat, lon, r, t);
		fprintf(out, "%lf %lf %lf %lf %lf\n",Ean* tograd,t, teta* tograd,  lat* tograd, lon* tograd);
		chart1->ChartAreas[0]->AxisX->ScaleView->Zoom(-180,180);
		chart1->ChartAreas[0]->AxisY->ScaleView->Zoom(-90,90);
		chart1->Series[0]->Points->AddXY(lon* tograd,lat* tograd);
		double tau = gettper(t,midan, getn(period));
		double lonpred=lon;
		t = t + deltat;
		double A[3][3];
		double n1 = 0;
		for (int count = 0; count < 15; count ++ ) { 
				Earstation [count].gamma = new double[ceil(T * period)+1];
				Earstation [count].time = new double[ceil(T * period)+1];
				k[count]=0;
			}
	
		while (n1 <=T * period +1 ) {
			kepler(a, ec, Ean, t-tau);
			teta = get__truean(Ean, ec);
			u=getsnova_u(teta, w);
			getGrKP(r, V, ec, a, i, Om, u, w, teta );
			getlatilon(lat, lon, r, t);
			if (lonpred*lon < 0) {
			
				//chart1->DataManipulator->InsertEmptyPoints(360,System::Windows::Forms::DataVisualization::Charting::IntervalType::Number,"Series1");
				//chart1->Series[0]->Points->AddXY(lon* tograd,lat* tograd);
			}
			gertransfermatrix ( t, A);
			struct Vector3x1 GRv =  getGRvSat( r, A);
			struct Vector3x1 D;
			double gamma;
			double gammax=0;
			for (int count = 0; count < 15; count ++ ) {
				D = getDistSatNip(GRv,Earstation [count].Grv);
				gamma = getangleplace( D, Earstation [count].Grv);
				if ( isFisible (Earstation [count].gammamin, gamma) ){
					chart1->Series[2]->Points->AddXY(lon* tograd,lat* tograd);
					Earstation [count].gamma[k[count]] = gamma;
					Earstation [count].time[k[count]] = t;
					k[count]++;
					//if (count == 2){chart2->Series[0]->Points->AddXY(t,gamma* tograd);}	
				}
				
		    }
			chart1->Series[0]->Points->AddXY(lon* tograd,lat* tograd);
			lonpred=lon;
			fprintf(out, "%lf %lf %lf %lf %lf\n",Ean* tograd,t, teta* tograd,  lat* tograd, lon* tograd);
			t = t + deltat;
			n1 = n1 + deltat;
		}
		fclose(out);
		
		chart1->DataManipulator->InsertEmptyPoints(360,System::Windows::Forms::DataVisualization::Charting::IntervalType::Number,"Series1");
		chart2->DataManipulator->InsertEmptyPoints(360,System::Windows::Forms::DataVisualization::Charting::IntervalType::Number,"Series1");

	 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double ec, a, i, Om, u, w, teta;
	struct Vector3x1 X;
	struct Vector3x1 V;
	ec = Convert::ToDouble(textBox8->Text);
	i = Convert::ToDouble(textBox9->Text) * torad;
	a = Convert::ToDouble(textBox7->Text);
	Om = Convert::ToDouble(textBox10->Text) * torad;
	u = Convert::ToDouble(textBox12->Text)* torad;
	w = Convert::ToDouble(textBox11->Text) * torad;
	teta = Convert::ToDouble(textBox13->Text) * torad;
	getGrKP(X, V, ec, a, i, Om, u, w, teta);
	textBox1->Text = Convert::ToString(X.x);
	textBox2->Text = Convert::ToString(X.y);
	textBox3->Text = Convert::ToString(X.z);
	textBox4->Text = Convert::ToString(V.x);
	textBox5->Text = Convert::ToString(V.y);
	textBox6->Text = Convert::ToString(V.z);
	
		 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chart1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 chart1->SaveImage("image.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->Rows->Clear();
			 chart2->Series[0]->Points->Clear();
			 int n =Convert::ToInt16(textBox15->Text)-1;
			 //int n=0;
			 //int c=0;
			 //bool ind =false;
			 //bool ind2 =false;
			 //char str[20];
			 //str = textBox15->Text->ToCharArray(); 
			 //while (ind == false){
				 //while( ind2==false && c<=20){
					// if (str[c]!=Earstation [n].name[c]){ ind2 = true;}
				 //c++;
				 //}
				 //if (c==20){ind = true;}
				 //ind2 = false;
				 //c=0;
				 //n++;
			 //}
			 double tn,tk,max;
			 tn= Earstation [n].time[0];
			 max = Earstation [n].gamma[0];
			 ofstream fout("Nip.txt");
			 fout << Earstation [n].name <<   "\n";
			 fout << "Время \t\t";
			 fout << "Угл места \n";
			 for (int count = 1; count < k[n]-1; count ++ ) {
				chart2->Series[0]->Points->AddXY(Earstation [n].time[count],Earstation [n].gamma[count]* tograd);
				fout << Earstation [n].time[count] <<  "\t\t";	
				fout << Earstation [n].gamma[count] <<  "\n";
				if (Earstation [n].gamma[count] > max){ max = Earstation [n].gamma[count];}
				if ((Earstation [n].time[count+1] - Earstation [n].time[count] )>2 ){
					tk =Earstation [n].time[count];
					dataGridView1->Rows->Add(max* tograd, tn , tk, tk-tn);
					tn = Earstation [n].time[count+1];
					max = 0;
				}
			 	
			 }
			 tk =Earstation [n].time[k[n]-1];
			 dataGridView1->Rows->Add(max* tograd, tn , tk, tk-tn);
			 fout.close();
			 
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 for (int count = 0; count < 15; count ++ ) { 
				delete [] Earstation [count].gamma ;
				delete [] Earstation [count].time;
				
			}
		 }
};
}
