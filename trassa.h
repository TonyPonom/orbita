#pragma once
#include "Form1.h"
#include "func.h"
namespace orbita {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� trassa
	/// </summary>
	public ref class trassa : public System::Windows::Forms::Form
	{
	public:
		trassa(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(54, 49);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1183, 522);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~trassa()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
		protected: 

	protected: 

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			
			// 
			// trassa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1306, 629);
			this->Controls->Add(this->chart1);
			this->Name = L"trassa";
			this->Text = L"trassa";
			this->Load += gcnew System::EventHandler(this, &trassa::trassa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void trassa_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 }
	};
	private: System::Void .ctor() {
				 this->InitializeComponent();
			 }
	}
