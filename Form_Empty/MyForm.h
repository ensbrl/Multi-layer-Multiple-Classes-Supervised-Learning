#pragma once
#include "matrix.h";
#include "function.h";

namespace Form_Empty {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SizeT= Size1 = Size2 = Size3 = Size4 = Size5 = Size6 = 0;
			
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		Matrix^ w; 
		Matrix^ v;
		samples* p;
		samples* test;
		Matrix^ moment;
	
		

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RadioButton^ class1;
	private: System::Windows::Forms::RadioButton^ class2;
	private: System::Windows::Forms::RadioButton^ class3;
	private: System::Windows::Forms::RadioButton^ class4;
	private: System::Windows::Forms::RadioButton^ class5;
	private: System::Windows::Forms::RadioButton^ class6;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ pROCESSToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ rESERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eXITToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbCoor;
	private: System::Windows::Forms::Label^ lbError;
	private: System::Windows::Forms::Label^ lbCycle;
	private: System::Windows::Forms::Label^ lb_total;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolStripMenuItem^ uploadInputToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFile;

	private: System::Windows::Forms::ToolStripMenuItem^ uploadWWeightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uploadVWeightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomWightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vToolStripMenuItem;



	private: System::Windows::Forms::ComboBox^ hLIndx;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolStripMenuItem^ learningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ testToolStripMenuItem;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ error_chart;
	private: System::Windows::Forms::ToolStripMenuItem^ sHOWINPUTEXAMPLEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ learningWithMomentToolStripMenuItem;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->class1 = (gcnew System::Windows::Forms::RadioButton());
			this->class2 = (gcnew System::Windows::Forms::RadioButton());
			this->class3 = (gcnew System::Windows::Forms::RadioButton());
			this->class4 = (gcnew System::Windows::Forms::RadioButton());
			this->class5 = (gcnew System::Windows::Forms::RadioButton());
			this->class6 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pROCESSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomWightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->learningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->learningWithMomentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eXITToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadInputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadWWeightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadVWeightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rESERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sHOWINPUTEXAMPLEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->hLIndx = (gcnew System::Windows::Forms::ComboBox());
			this->lbCoor = (gcnew System::Windows::Forms::Label());
			this->lbError = (gcnew System::Windows::Forms::Label());
			this->lbCycle = (gcnew System::Windows::Forms::Label());
			this->lb_total = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->error_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error_chart))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LavenderBlush;
			this->pictureBox1->Location = System::Drawing::Point(14, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->comboBox1->Location = System::Drawing::Point(213, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(41, 22);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedValueChanged);
			// 
			// class1
			// 
			this->class1->AutoSize = true;
			this->class1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class1->Location = System::Drawing::Point(34, 42);
			this->class1->Name = L"class1";
			this->class1->Size = System::Drawing::Size(61, 17);
			this->class1->TabIndex = 2;
			this->class1->TabStop = true;
			this->class1->Text = L"class1";
			this->class1->UseVisualStyleBackColor = true;
			this->class1->Visible = false;
			// 
			// class2
			// 
			this->class2->AutoSize = true;
			this->class2->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class2->Location = System::Drawing::Point(142, 42);
			this->class2->Name = L"class2";
			this->class2->Size = System::Drawing::Size(61, 17);
			this->class2->TabIndex = 2;
			this->class2->TabStop = true;
			this->class2->Text = L"class2";
			this->class2->UseVisualStyleBackColor = true;
			this->class2->Visible = false;
			// 
			// class3
			// 
			this->class3->AutoSize = true;
			this->class3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class3->Location = System::Drawing::Point(271, 42);
			this->class3->Name = L"class3";
			this->class3->Size = System::Drawing::Size(61, 17);
			this->class3->TabIndex = 2;
			this->class3->TabStop = true;
			this->class3->Text = L"class3";
			this->class3->UseVisualStyleBackColor = true;
			this->class3->Visible = false;
			// 
			// class4
			// 
			this->class4->AutoSize = true;
			this->class4->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class4->Location = System::Drawing::Point(34, 80);
			this->class4->Name = L"class4";
			this->class4->Size = System::Drawing::Size(61, 17);
			this->class4->TabIndex = 2;
			this->class4->TabStop = true;
			this->class4->Text = L"class4";
			this->class4->UseVisualStyleBackColor = true;
			this->class4->Visible = false;
			// 
			// class5
			// 
			this->class5->AutoSize = true;
			this->class5->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class5->Location = System::Drawing::Point(142, 80);
			this->class5->Name = L"class5";
			this->class5->Size = System::Drawing::Size(61, 17);
			this->class5->TabIndex = 2;
			this->class5->TabStop = true;
			this->class5->Text = L"class5";
			this->class5->UseVisualStyleBackColor = true;
			this->class5->Visible = false;
			// 
			// class6
			// 
			this->class6->AutoSize = true;
			this->class6->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class6->Location = System::Drawing::Point(271, 80);
			this->class6->Name = L"class6";
			this->class6->Size = System::Drawing::Size(61, 17);
			this->class6->TabIndex = 2;
			this->class6->TabStop = true;
			this->class6->Text = L"class6";
			this->class6->UseVisualStyleBackColor = true;
			this->class6->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->pROCESSToolStripMenuItem,
					this->eXITToolStripMenuItem, this->rESERToolStripMenuItem, this->sHOWINPUTEXAMPLEToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1198, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pROCESSToolStripMenuItem
			// 
			this->pROCESSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->randomWightToolStripMenuItem,
					this->learningToolStripMenuItem, this->testToolStripMenuItem, this->learningWithMomentToolStripMenuItem
			});
			this->pROCESSToolStripMenuItem->Name = L"pROCESSToolStripMenuItem";
			this->pROCESSToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->pROCESSToolStripMenuItem->Text = L"PROCESS";
			// 
			// randomWightToolStripMenuItem
			// 
			this->randomWightToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wToolStripMenuItem,
					this->vToolStripMenuItem
			});
			this->randomWightToolStripMenuItem->Name = L"randomWightToolStripMenuItem";
			this->randomWightToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->randomWightToolStripMenuItem->Text = L"Random Weight";
			// 
			// wToolStripMenuItem
			// 
			this->wToolStripMenuItem->Name = L"wToolStripMenuItem";
			this->wToolStripMenuItem->Size = System::Drawing::Size(81, 22);
			this->wToolStripMenuItem->Text = L"W";
			this->wToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wToolStripMenuItem_Click);
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(81, 22);
			this->vToolStripMenuItem->Text = L"V";
			this->vToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::vToolStripMenuItem_Click);
			// 
			// learningToolStripMenuItem
			// 
			this->learningToolStripMenuItem->Name = L"learningToolStripMenuItem";
			this->learningToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->learningToolStripMenuItem->Text = L"Learning";
			this->learningToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::learningToolStripMenuItem_Click);
			// 
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->testToolStripMenuItem->Text = L"Test";
			this->testToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::testToolStripMenuItem_Click);
			// 
			// learningWithMomentToolStripMenuItem
			// 
			this->learningWithMomentToolStripMenuItem->Name = L"learningWithMomentToolStripMenuItem";
			this->learningWithMomentToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->learningWithMomentToolStripMenuItem->Text = L"Learning With Moment";
			this->learningWithMomentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::learningWithMomentToolStripMenuItem_Click);
			// 
			// eXITToolStripMenuItem
			// 
			this->eXITToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->uploadInputToolStripMenuItem,
					this->uploadWWeightToolStripMenuItem, this->uploadVWeightToolStripMenuItem
			});
			this->eXITToolStripMenuItem->Name = L"eXITToolStripMenuItem";
			this->eXITToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->eXITToolStripMenuItem->Text = L"UPLOAD";
			this->eXITToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eXITToolStripMenuItem_Click);
			// 
			// uploadInputToolStripMenuItem
			// 
			this->uploadInputToolStripMenuItem->Name = L"uploadInputToolStripMenuItem";
			this->uploadInputToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->uploadInputToolStripMenuItem->Text = L"Upload Input";
			this->uploadInputToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uploadInputToolStripMenuItem_Click);
			// 
			// uploadWWeightToolStripMenuItem
			// 
			this->uploadWWeightToolStripMenuItem->Name = L"uploadWWeightToolStripMenuItem";
			this->uploadWWeightToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->uploadWWeightToolStripMenuItem->Text = L"Upload wWeight";
			this->uploadWWeightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uploadWWeightToolStripMenuItem_Click);
			// 
			// uploadVWeightToolStripMenuItem
			// 
			this->uploadVWeightToolStripMenuItem->Name = L"uploadVWeightToolStripMenuItem";
			this->uploadVWeightToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->uploadVWeightToolStripMenuItem->Text = L"Upload vWeight";
			this->uploadVWeightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uploadVWeightToolStripMenuItem_Click);
			// 
			// rESERToolStripMenuItem
			// 
			this->rESERToolStripMenuItem->Name = L"rESERToolStripMenuItem";
			this->rESERToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->rESERToolStripMenuItem->Text = L"RESET";
			this->rESERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rESETToolStripMenuItem_Click);
			// 
			// sHOWINPUTEXAMPLEToolStripMenuItem
			// 
			this->sHOWINPUTEXAMPLEToolStripMenuItem->Name = L"sHOWINPUTEXAMPLEToolStripMenuItem";
			this->sHOWINPUTEXAMPLEToolStripMenuItem->Size = System::Drawing::Size(145, 20);
			this->sHOWINPUTEXAMPLEToolStripMenuItem->Text = L"INPUT EXAMPLE SHOW";
			this->sHOWINPUTEXAMPLEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sHOWINPUTEXAMPLEToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->hLIndx);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->class6);
			this->groupBox1->Controls->Add(this->class1);
			this->groupBox1->Controls->Add(this->class5);
			this->groupBox1->Controls->Add(this->class2);
			this->groupBox1->Controls->Add(this->class4);
			this->groupBox1->Controls->Add(this->class3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->groupBox1->Location = System::Drawing::Point(554, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(610, 167);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"NUMBER OF CLASS";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(301, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 14);
			this->label6->TabIndex = 17;
			this->label6->Text = L"NUMBER OF HIDDEN LAYER";
			// 
			// hLIndx
			// 
			this->hLIndx->FormattingEnabled = true;
			this->hLIndx->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"500"
			});
			this->hLIndx->Location = System::Drawing::Point(489, -3);
			this->hLIndx->Name = L"hLIndx";
			this->hLIndx->Size = System::Drawing::Size(41, 22);
			this->hLIndx->TabIndex = 16;
			this->hLIndx->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::hLIndx_SelectedIndexChanged);
			// 
			// lbCoor
			// 
			this->lbCoor->AutoSize = true;
			this->lbCoor->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbCoor->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbCoor->Location = System::Drawing::Point(825, 268);
			this->lbCoor->Name = L"lbCoor";
			this->lbCoor->Size = System::Drawing::Size(49, 14);
			this->lbCoor->TabIndex = 6;
			this->lbCoor->Text = L"lbCoor";
			// 
			// lbError
			// 
			this->lbError->AutoSize = true;
			this->lbError->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbError->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbError->Location = System::Drawing::Point(825, 303);
			this->lbError->Name = L"lbError";
			this->lbError->Size = System::Drawing::Size(56, 14);
			this->lbError->TabIndex = 7;
			this->lbError->Text = L"lbError";
			// 
			// lbCycle
			// 
			this->lbCycle->AutoSize = true;
			this->lbCycle->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbCycle->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbCycle->Location = System::Drawing::Point(825, 335);
			this->lbCycle->Name = L"lbCycle";
			this->lbCycle->Size = System::Drawing::Size(56, 14);
			this->lbCycle->TabIndex = 8;
			this->lbCycle->Text = L"lbCycle";
			// 
			// lb_total
			// 
			this->lb_total->AutoSize = true;
			this->lb_total->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lb_total->ForeColor = System::Drawing::Color::DarkBlue;
			this->lb_total->Location = System::Drawing::Point(825, 233);
			this->lb_total->Name = L"lb_total";
			this->lb_total->Size = System::Drawing::Size(49, 14);
			this->lb_total->TabIndex = 9;
			this->lb_total->Text = L"Toplam";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::DarkBlue;
			this->label1->Location = System::Drawing::Point(551, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 14);
			this->label1->TabIndex = 13;
			this->label1->Text = L"INPUT COORDINATE           :   ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::DarkBlue;
			this->label2->Location = System::Drawing::Point(551, 335);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 14);
			this->label2->TabIndex = 12;
			this->label2->Text = L"ALGORITHM CYCLE SIZE       :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::DarkBlue;
			this->label3->Location = System::Drawing::Point(551, 303);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 14);
			this->label3->TabIndex = 11;
			this->label3->Text = L"TOTAL ERROR                :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::DarkBlue;
			this->label4->Location = System::Drawing::Point(551, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 14);
			this->label4->TabIndex = 10;
			this->label4->Text = L"NUMBER OF LEARNING INPUT   :";
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFile";
			// 
			// error_chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->error_chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->error_chart->Legends->Add(legend1);
			this->error_chart->Location = System::Drawing::Point(554, 373);
			this->error_chart->Name = L"error_chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::MidnightBlue;
			series1->LabelBorderWidth = 5;
			series1->Legend = L"Legend1";
			series1->Name = L"Cycle";
			this->error_chart->Series->Add(series1);
			this->error_chart->Size = System::Drawing::Size(576, 186);
			this->error_chart->TabIndex = 15;
			this->error_chart->Text = L"error";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 592);
			this->Controls->Add(this->error_chart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lb_total);
			this->Controls->Add(this->lbCycle);
			this->Controls->Add(this->lbError);
			this->Controls->Add(this->lbCoor);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"One Layer L_Neuron ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error_chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
		lb_total->Text = SizeT.ToString();

	}
	private: System::Void comboBox1_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		oSize = Convert::ToInt32(comboBox1->SelectedItem);
		switch (oSize)
		{
		case 1:
			class1->Visible = true;
			class2->Visible = false;
			class3->Visible = false;
			class4->Visible = false;
			class5->Visible = false;
			class6->Visible = false;
			break;
		case 2:
			class1->Visible = true;
			class2->Visible = true;
			class3->Visible = false;
			class4->Visible = false;
			class5->Visible = false;
			class6->Visible = false;
			break;
		case 3:
			class1->Visible = true;
			class2->Visible = true;
			class3->Visible = true;
			class4->Visible = false;
			class5->Visible = false;
			class6->Visible = false;
			break;
		case 4:
			class1->Visible = true;
			class2->Visible = true;
			class3->Visible = true;
			class4->Visible = true;
			class5->Visible = false;
			class6->Visible = false;
			break;
		case 5:
			class1->Visible = true;
			class2->Visible = true;
			class3->Visible = true;
			class4->Visible = true;
			class5->Visible = true;
			class6->Visible = false;
			break;
		case 6:
			class1->Visible = true;
			class2->Visible = true;
			class3->Visible = true;
			class4->Visible = true;
			class5->Visible = true;
			class6->Visible = true;
			break;
		default:
			break;
		}
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drawWeight = true;
		if (oSize == 0)
		{
			MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
		}
		if (randomPressed == false)
		{
			w = gcnew Matrix(oSize, vSize);
			w->randomD();
		}
		//Ornekleme
		if (class1->Checked)
		{
			int temp_x, temp_y;
			double x1, x2;

			temp_x = (Convert::ToInt32(e->X));
			temp_y = (Convert::ToInt32(e->Y));
			
			x1 = temp_x- (pictureBox1->Width / 2);
			x2 = (pictureBox1->Width / 2) -temp_y;
			
			if (SizeT == 0) {
				SizeT = Size1 = 1;
				lbCoor->Text = "Size Number : " + Size1 + " x : " + x1 + " y : " + x2;
				p = new samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = 1;
			}
			else
			{
				samples* temp;
				temp = p;
				Size1++;
				SizeT++;
				lbCoor->Text = "Size Number : " + Size1 + " x : " + x1 + " y : " + x2;
				p = new samples[SizeT];
				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT - 1].x1 = x1;
				p[SizeT - 1].x2 = x2;
				p[SizeT - 1].id = 1;
				delete temp;
			}
			
		
		}

		if (class2->Checked)
		{
			
			int temp_x, temp_y;
			double x1, x2;

			temp_x = (Convert::ToInt32(e->X));
			temp_y = (Convert::ToInt32(e->Y));
			
			x1 = e->X - (pictureBox1->Width / 2);
			x2 = (pictureBox1->Width / 2) - e->Y;
			
			if (SizeT == 0) {
				SizeT = Size2 = 1;
				lbCoor->Text = "Size Number : " + Size2 + " x : " + x1 + " y : " + x2;
				p = new samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = 2;
			}
			else
			{
				samples* temp;
				temp = p;
				Size2++;
				SizeT++;
				lbCoor->Text = "Size Number : " + Size2 + " x : " + x1 + " y : " + x2;
				p = new samples[SizeT];

				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT - 1].x1 = x1;
				p[SizeT - 1].x2 = x2;
				p[SizeT - 1].id = 2;
				delete temp;
			}


		}

		if (class3->Checked)
		{

			int temp_x, temp_y;
			double x1, x2;

			temp_x = (Convert::ToInt32(e->X));
			temp_y = (Convert::ToInt32(e->Y));
			
			x1 = e->X - (pictureBox1->Width / 2);
			x2 = (pictureBox1->Width / 2) - e->Y;
			
			if (SizeT == 0) {
				SizeT = Size3 = 1;
				lbCoor->Text = "Size Number : " + Size3 + " x : " + x1 + " y : " + x2;
				p = new samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = 3;
			}
			else
			{
				samples* temp;
				temp = p;
				Size3++;
				SizeT++;
				lbCoor->Text = "Size Number : " + Size3 + " x : " + x1 + " y : " + x2;
				p = new samples[SizeT];
				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT - 1].x1 = x1;
				p[SizeT - 1].x2 = x2;
				p[SizeT - 1].id = 3;
				delete temp;
			}


		}

		if (class4->Checked)
		{

			int temp_x, temp_y;
			double x1, x2;

			temp_x = (Convert::ToInt32(e->X));
			temp_y = (Convert::ToInt32(e->Y));
			
			x1 = e->X - (pictureBox1->Width / 2);
			x2 = (pictureBox1->Width / 2) - e->Y;

			if (SizeT == 0) {
				SizeT = Size4 = 1;
				lbCoor->Text = "Size Number : " + Size4 + " x : " + x1 + " y : " + x2;
				p = new samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = 4;
			}
			else
			{
				samples* temp;
				temp = p;
				Size4++;
				SizeT++;
				lbCoor->Text = "Size Number : " + Size4 + " x : " + x1 + " y : " + x2;
				p = new samples[SizeT];
				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT - 1].x1 = x1;
				p[SizeT - 1].x2 = x2;
				p[SizeT - 1].id = 4;
				delete temp;
			}


		}

		if (class5->Checked)
		{

			int temp_x, temp_y;
			double x1, x2;

			temp_x = (Convert::ToInt32(e->X));
			temp_y = (Convert::ToInt32(e->Y));
			
			x1 = e->X - (pictureBox1->Width / 2);
			x2 = (pictureBox1->Width / 2) - e->Y;

			if (SizeT == 0) {
				SizeT = Size5 = 1;
				lbCoor->Text = "Size Number : " + Size5+ " x : " + x1 + " y : " + x2;
				p = new samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = 5;
			}
			else
			{
				samples* temp;
				temp = p;
				Size5++;
				SizeT++;
				lbCoor->Text = "Size Number : " + Size5 + " x : " + x1 + " y : " + x2;
				p = new samples[SizeT];
				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT - 1].x1 = x1;
				p[SizeT - 1].x2 = x2;
				p[SizeT - 1].id = 5;
				delete temp;
			}


		}

		if (class6->Checked)
		{

			int temp_x, temp_y;
			double x1, x2;

			temp_x = (Convert::ToInt32(e->X));
			temp_y = (Convert::ToInt32(e->Y));
			
			x1 = e->X - (pictureBox1->Width / 2);
			x2 = (pictureBox1->Width / 2) - e->Y;

			if (SizeT == 0) {
				SizeT = Size6 = 1;
				lbCoor->Text = "Size Number : " + Size6 + " x : " + x1 + " y : " + x2;
				p = new samples[1];
				p[0].x1 = x1;
				p[0].x2 = x2;
				p[0].id = 6;
			}
			else
			{
				samples* temp;
				temp = p;
				Size6++;
				SizeT++;
				lbCoor->Text = "Size Number : " + Size6 + " x : " + x1 + " y : " + x2;
				p = new samples[SizeT];
				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT - 1].x1 = x1;
				p[SizeT - 1].x2 = x2;
				p[SizeT - 1].id = 6;
				delete temp;
			}


		}
		
		lb_total->Text = "Toplam Örnek Sayýsý " +  SizeT ;
		pictureBox1->Refresh();

	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		//KOORDÝNAT ÇÝZGÝLERÝ
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width) / 2;
		center_height = (int)(pictureBox1->Height) / 2;
		

		Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
		e->Graphics->DrawLine(gcnew Pen(Color::Black, 3.0f), pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
		e->Graphics->DrawLine(gcnew Pen(Color::Black, 3.0f), 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		
		//ORNEKLER'ÝN ÇÝZÝLMESÝ
		Pen^ penOrnek = gcnew Pen(Color::Blue, 3.0f);
		if (drawWeight == true)
		{
			if (SizeT != 0)
			{
				for (int i = 0; i < SizeT; i++)
				{
					switch ((int)p[i].id)
					{
					case 1:
						penOrnek->Color = Color::DarkKhaki;
						break;
					case 2:
						penOrnek->Color = Color::Blue;
						break;
					case 3:
						penOrnek->Color = Color::Red;
						break;
					case 4:
						penOrnek->Color = Color::Purple;
						break;
					case 5:
						penOrnek->Color = Color::Orange;
						break;
					case 6:
						penOrnek->Color = Color::DarkGreen;
						break;
					default:
						break;
					}

					int x, y = 0;
					x = (int)((p[i].x1  + (pictureBox1->Width / 2)));
					y = (int)(((pictureBox1->Height / 2) - p[i].x2 ));

					e->Graphics->DrawLine(penOrnek, x - 5, y, x + 5, y);
					e->Graphics->DrawLine(penOrnek, x, y - 5, x, y + 5);

				}
				drawWeight = false;
			}
		
		}
		//Hidden Layer Draw Line
		
		if (vDraw)
		{
			for (int i = 0; i < vSize; i++)
			{
				pen->Color = Color::Blue;
				double x, y, s;

				x = v->get(i, 0);
				y = v->get(i, 1);
				s = v->get(i, 2)* zoom;
				int x1, x2, y1, y2 = 0;

				x1 = 0;
				y1 = Ypoint(x1, x, y, s, (pictureBox1->Width / 2));

				x2 = (int)(pictureBox1->Height);
				y2 = Ypoint(x2, x, y, s, (pictureBox1->Width / 2));

				e->Graphics->DrawLine(pen, x1, y1, x2, y2);


			}
			vDraw = false;
		}

		//Test verilerininÇÝZÝLMESÝ
		if (tDraw)
		{
			int indis = 0;
			for (int j = 0; j < 450; j++)
			{
				for (int k = 0; k < 450; k++)
				{
					Pen^ penTest = gcnew Pen(Color::Black, 3.0f);
					if (test[indis].id == 1)
						penTest->Color = Color::DarkKhaki;
					else if (test[indis].id == 2)
						penTest->Color = Color::Blue;
					else if (test[indis].id == 3)
						penTest->Color = Color::Red;
					else if (test[indis].id == 4)
						penTest->Color = Color::Purple;
					else if (test[indis].id == 5)
						penTest->Color = Color::Orange;
					else
						penTest->Color = Color::DarkGreen;
					e->Graphics->DrawEllipse(penTest, j, k, 1, 1);
					indis++;
					k = k + 4;
				}
				j = j + 4;
			}
			tDraw = false;
		

		}
		
		
	}
private: System::Void rESETToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		randomPressed = false;
		drawWeight = false;
		w->~Matrix();
		SizeT = Size1 = Size2 = Size3 = Size4 = Size5 = Size6 = 0;
		pictureBox1->Refresh();
		oSize = 0;
		MessageBox::Show("Lütfen Sýnýf Sayýsýný Belirtiniz...");

	 }
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void eXITToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void uploadInputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	IO::Stream^ myStream;
	OpenFileDialog^ openFile = gcnew OpenFileDialog;
	String^ patch;
	openFile->InitialDirectory = "c:\\Desktop";
	openFile->Filter = "txt files (*.txt)|*.txt";
	openFile->FilterIndex = 2;
	openFile->RestoreDirectory = true;
	SizeT = 0;
	
	if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFile->OpenFile()) != nullptr)
		{
			patch= openFile->FileName;
			
			// Insert code to read the stream here.
			myStream->Close();
		}
	}

	try
	{
		StreamReader^ fs = File::OpenText(patch);

		Console::WriteLine("contents of {0}:", patch);
		String^ str=fs->ReadLine();
		while (str!= nullptr)
		{
			array<String^>^ sentences;
			sentences = str->Split(' ');

			if (SizeT == 0) {
				SizeT  = 1; 
				p = new samples[1];
				p[0].x1 = Convert::ToDouble(sentences[0]);
				p[0].x2 = Convert::ToDouble(sentences[1]);
				p[0].id = Convert::ToDouble(sentences[2]);
			}
			else
			{
				samples* temp;
				temp = p;
				SizeT++;
				
				p = new samples[SizeT];
				for (int i = 0; i < SizeT; i++)
				{
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}
				p[SizeT-1].x1 = Convert::ToDouble(sentences[0]);
				p[SizeT-1].x2 = Convert::ToDouble(sentences[1]);
				p[SizeT-1].id = Convert::ToDouble(sentences[2]);
				delete temp;
			}
			str=fs->ReadLine();
		}
		fs->Close();
		for (int i = 1; i < SizeT; i++)
		{
			if (p[i].id > p[i - 1].id)
				oSize = p[i].id;
		}
		drawWeight = true;
		vDraw = true;
		pictureBox1->Refresh();
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			Console::WriteLine("File '{0}' not found", patch);
		else
			Console::WriteLine("problem reading file '{0}'", patch);
		
	}
	
	lb_total->Text = SizeT.ToString();
}
private: System::Void uploadWWeightToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	drawWeight = true;
	vDraw = true;
	IO::Stream^ myStream;
	OpenFileDialog^ openFile = gcnew OpenFileDialog;
	String^ patch;
	openFile->InitialDirectory = "c:\\Desktop";
	openFile->Filter = "txt files (*.txt)|*.txt";
	openFile->FilterIndex = 2;
	openFile->RestoreDirectory = true;
	

	if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFile->OpenFile()) != nullptr)
		{
			patch = openFile->FileName;

			// Insert code to read the stream here.
			myStream->Close();
		}
	}

	try
	{
		StreamReader^ fs = File::OpenText(patch);
		int i = 0;
	
		String^ str = fs->ReadLine();
		w = gcnew Matrix(oSize, vSize+1);
		while (str != nullptr)
		{
			array<String^>^ sentences;
			sentences = str->Split(' ');
			

			w->set(Convert::ToDouble(sentences[0])/1000, i, 0);
			w->set(Convert::ToDouble(sentences[1])/1000, i, 1);
			w->set(Convert::ToDouble(sentences[2])/1000, i, 2);
			w->set(Convert::ToDouble(sentences[3]) / 1000, i, 3);
			w->set(Convert::ToDouble(sentences[4]) / 1000, i, 4);
			w->set(Convert::ToDouble(sentences[5]) / 1000, i, 5);
			w->set(Convert::ToDouble(sentences[6]) / 1000, i, 6);
			w->set(Convert::ToDouble(sentences[7]) / 1000, i, 7);


			str = fs->ReadLine();
			i++;
		}
		fs->Close();
		
		
		
		
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			MessageBox::Show("File '{0}' not found", patch);
		else
			MessageBox::Show("problem reading file '{0}'", patch);

	}
	//initial momentum value
	 moment = gcnew Matrix(oSize, 1);
	for (int i = 0; i < oSize; i++)
	{
		moment->set(0.4, i, 0);
	}
	pictureBox1->Refresh();

}
private: System::Void uploadVWeightToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	IO::Stream^ myStream;
	OpenFileDialog^ openFile = gcnew OpenFileDialog;
	String^ patch;
	openFile->InitialDirectory = "c:\\Desktop";
	openFile->Filter = "txt files (*.txt)|*.txt";
	openFile->FilterIndex = 2;
	openFile->RestoreDirectory = true;
	vSize = 0;

	if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFile->OpenFile()) != nullptr)
		{
			patch = openFile->FileName;
			myStream->Close();
		}
	}

	try
	{
		StreamReader^ fs = File::OpenText(patch);
		int i = 0;

		String^ str = fs->ReadLine();
		vSize = Convert::ToInt32(str);
		v = gcnew Matrix(vSize, 3);
		str = fs->ReadLine();
		
		while (str != nullptr)
		{
			array<String^>^ sentences;
			sentences = str->Split(' ');


			v->set(Convert::ToDouble(sentences[0])/1000, i, 0);
			v->set(Convert::ToDouble(sentences[1])/1000, i, 1);
			v->set(Convert::ToDouble(sentences[2])/1000, i, 2);
			str = fs->ReadLine();
			i++;
		}
		fs->Close();
		vDraw = true;
		drawWeight = true;
		
		pictureBox1->Refresh();
		
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			MessageBox::Show("File '{0}' not found", patch);
		else
			MessageBox::Show("problem reading file '{0}'", patch);

	}
}
private: System::Void wToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if(oSize ==0 && vSize == 0)
	{
		MessageBox::Show("Output Katmaný Belli deðil.");
	}
	
	else
	{
		w = gcnew Matrix(oSize, vSize+1);
		w->randomD();
		drawWeight = true;
		pictureBox1->Refresh();
	}
	moment = gcnew Matrix(oSize, 1);
	for (int i = 0; i < oSize; i++)
	{
		moment->set(0.4, i, 0);
	}
	pictureBox1->Refresh();

}
private: System::Void vToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (vSize == 0)
	{
		MessageBox::Show("Gizli Katman Sayýsý Belli deðil.");
	}
	else
	{
		v = gcnew Matrix(vSize, 3);
		v->randomD();
		drawWeight = true;
		vDraw = true;
		pictureBox1->Refresh();
	}
}
private: System::Void hLIndx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	vSize = Convert::ToInt32(hLIndx->SelectedItem);
}
private: System::Void learningToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Refresh();
	if (oSize == 0)
	{
		MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
	}
	if (vSize == 0)
	{
		MessageBox::Show("Lütfen  gizli katman sayýsýný seçiniz...");
	}
	for (int i = 0; i < SizeT; i++)
	{
		meanX += p[i].x1;
		meanY += p[i].x2;
	}
	meanX /= SizeT;
	meanY /= SizeT;
	double sumX = 0, sumY = 0;
	for (int i = 0; i < SizeT; i++)
	{
		sumX += pow((p[i].x1 - meanX), 2);
		sumY += pow((p[i].x2 - meanY), 2);
	}
	sSX = sqrt(sumX / (SizeT - 1));
	sSY = sqrt(sumY / (SizeT - 1));

	double error = 0;
	int cycle = 0;

	do
	{
		error = 0;
		for (int i = 0; i < SizeT; i++)
		{
			Matrix^ z = gcnew Matrix(3, 1); //input
			z->set((p[i].x1 - meanX) / sSX, 0, 0);
			z->set((p[i].x2 - meanY) / sSY, 1, 0);
			z->set(1.0, 2, 0);
			Matrix^ d = gcnew Matrix(oSize, 1);//d index=nöron sayýsý
			for (int k = 0; k < oSize; k++)
			{
				d->set(-1.0, k, 0);
			}
			d->set(1.0, (p[i].id - 1), 0);
			Matrix^ netV = v * z;
			Matrix^ y= vActivation(netV);//output hidden layer
			Matrix^ vTfnet = vTurev(netV);
			Matrix^ yAugmented= gcnew Matrix(vSize + 1, 1);
			for (size_t i = 0; i < vSize; i++)
			{
				yAugmented->set(y->get(i, 0), i, 0);
			}
			yAugmented->set(1, vSize, 0);//w input bias
			Matrix^ netO = w * yAugmented;
			Matrix^ o= wActivation(netO);//output neural network
			Matrix^ wTnet = wTurev(o);
			double temp=0;
			//calculate error 
			for (int i = 0; i < oSize; i++)
			{
				error =error+ (pow((d->get(i, 0) - o->get(i, 0)), 2));
			}

			Matrix^ esK = gcnew Matrix(oSize, 1); //gradient descent output
			Matrix^ esY = gcnew Matrix(vSize, 1); //gradient descent hidden layer
			for (int k = 0; k < oSize; k++)
			{
				double temp=  ((d->get(k, 0) - o->get(k, 0))*wTnet->get(k,0));
				esK->set(temp, k, 0);
			}
			//weight update output
			for (int k = 0; k < oSize; k++)
			{
				for (int j = 0; j < vSize+1; j++)
				{
					w->set((w->get(k, j) + (0.01 * esK->get(k, 0) * yAugmented->get(j, 0))),k,j);
				}
			}
			for (int j = 0; j < vSize; j++)
			{
				double t = 0;
				for (int k = 0; k < oSize; k++)
				{
					t += esK->get(k, 0) * w->get(k, j);
				}
				double temp = vTfnet->get(j,0) *t;
				esY->set(temp, j, 0);
			}
			//weight update hidden layer
			for (int j = 0; j < vSize; j++)
			{
				for (int i = 0; i < 3; i++)
				{
					v->set((v->get(j, i) + (0.1 * esY->get(j, 0) * z->get(i,0))),j,i);
				}
			}

			netV->~Matrix();
		}		
		cycle++;
		//root-mean-square normalized error
		error = sqrt(error) / (SizeT);
		error_chart->Series[0]->Points->AddXY(cycle, error);
		drawWeight = true;
		vDraw = true;
		pictureBox1->Refresh();
	} while (error> 0.01);
	lbCycle->Text = Convert::ToString(cycle);
	lbError->Text = Convert::ToString(error);
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void testToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	test = new samples[8100];
	int temp_x, temp_y;
	//Test verileri oluþturuldu.
	for (int i = 0; i < 8100; i++)
	{
		for (int j = 0; j < 450; j++)
		{
			for (int k = 0; k < 450; k++)
			{
				temp_x = j;
				temp_y = k;
				double x1, x2;
				x1 = temp_x - (pictureBox1->Width / 2);
				x2 = (pictureBox1->Width / 2) - temp_y;

				test[i].x1 = x1;
				test[i].x2 = x2;
				i++;
				k = k + 4;
			}
			
			j = j + 4;
		}
	}	
	//Batch normalizasyon uygulandý.
	for (int i = 0; i < 8100; i++)
	{
		test[i].x1 = ((test[i].x1 - meanX) / sSX);
		test[i].x2 = ((test[i].x2 - meanY) / sSY);
		test[i].id = 0;
	}
	//test iþlemi tüm tesrt verileri üzerinde yapýlacak.
	for (int i = 0; i < 8100; i++)
	{
		Matrix^ testy = gcnew Matrix(3, 1); //input test
		//test y_augmented
		testy->set(test[i].x1, 0, 0);
		testy->set(test[i].x2, 1, 0);
		testy->set(1, 2, 0);//bias hidden layer

		Matrix^ netV = v * testy;
		Matrix^ y = vActivation(netV); //hidden layer output
		Matrix^ yAugmented = gcnew Matrix(vSize + 1, 1);//output augmented
		for (size_t i = 0; i < vSize; i++)
		{
			yAugmented->set(y->get(i, 0), i, 0);
		}
		yAugmented->set(1, vSize, 0);//bias output
		Matrix^ netO = w * yAugmented;
		Matrix^ ot = wActivation(netO); //output 
		double eB = ot->get(0, 0);
		int ind = 1;
		//test verisinin hangi sýnýfa ait olduðu belirlendi.
		for (int i = 1; i < oSize; i++)
		{

			if (ot->get(i, 0) > eB)
			{
				eB = ot->get(i, 0);
				ind=i+1;
			}
		}
		test[i].id = ind;
	}
	tDraw = true;
	pictureBox1->Refresh();
}
private: System::Void sHOWINPUTEXAMPLEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	drawWeight = true;
	tDraw = true;
	pictureBox1->Refresh();

}
private: System::Void learningWithMomentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	pictureBox1->Refresh();
	

	if (oSize == 0)
	{
		MessageBox::Show("Lütfen  sýnýf sayýsýný seçiniz...");
	}
	if (vSize == 0)
	{
		MessageBox::Show("Lütfen  gizli katman sayýsýný seçiniz...");
	}
	for (int i = 0; i < SizeT; i++)
	{
		meanX += p[i].x1;
		meanY += p[i].x2;
	}
	meanX /= SizeT;
	meanY /= SizeT;
	double sumX = 0, sumY = 0;
	for (int i = 0; i < SizeT; i++)
	{
		sumX += pow((p[i].x1 - meanX), 2);
		sumY += pow((p[i].x2 - meanY), 2);
	}
	sSX = sqrt(sumX / (SizeT - 1));
	sSY = sqrt(sumY / (SizeT - 1));

	double error = 0;
	int cycle = 0;

	do
	{
		error = 0;
		for (int i = 0; i < SizeT; i++)
		{
			Matrix^ z = gcnew Matrix(3, 1); //input
			z->set((p[i].x1 - meanX) / sSX, 0, 0);
			z->set((p[i].x2 - meanY) / sSY, 1, 0);
			z->set(1.0, 2, 0);
			Matrix^ d = gcnew Matrix(oSize, 1);//d index=nöron sayýsý
			for (int k = 0; k < oSize; k++)
			{
				d->set(-1.0, k, 0);
			}
			d->set(1.0, (p[i].id - 1), 0);
			Matrix^ netV = v * z;
			Matrix^ y = vActivation(netV);
			Matrix^ vTfnet = vTurev(netV);
			Matrix^ yAugmented = gcnew Matrix(vSize + 1, 1);
			for (size_t i = 0; i < vSize; i++)
			{
				yAugmented->set(y->get(i, 0), i, 0);
			}

			yAugmented->set(1, vSize, 0);
			Matrix^ netO = w * yAugmented;
			Matrix^ o = wActivation(netO);
			Matrix^ wTnet = wTurev(o);
			double temp = 0;
			for (int i = 0; i < oSize; i++)
			{
				error = error + (pow((d->get(i, 0) - o->get(i, 0)), 2));
			}

			Matrix^ esK = gcnew Matrix(oSize, 1);
			Matrix^ esY = gcnew Matrix(vSize, 1);
			for (int k = 0; k < oSize; k++)
			{
				double temp = ((d->get(k, 0) - o->get(k, 0)) * wTnet->get(k, 0));
				esK->set(temp, k, 0);
				//bire önceki aðýrlýk güncelleme  ile þu andaki aðýrlýk güncelleme ayný yöndeyse 
				//bir önceki aðýrlýk müktarýnýda  ekleyerek güncelle
				if (moment->get(k, 0) < 0 && esK->get(k, 0) < 0 || moment->get(k, 0) > 0 && esK->get(k, 0) > 0)
				{
					esK->set(esK->get(k, 0) + moment->get(k, 0), k, 0);
				}
				
			}
			moment = esK;

			
			for (int k = 0; k < oSize; k++)
			{
				for (int j = 0; j < vSize + 1; j++)
				{
					w->set((w->get(k, j) + (0.01 * esK->get(k, 0) * yAugmented->get(j, 0))), k, j);
				}
			}
			for (int j = 0; j < vSize; j++)
			{
				double t = 0;
				for (int k = 0; k < oSize; k++)
				{
					t += esK->get(k, 0) * w->get(k, j);
				}
				double temp = vTfnet->get(j, 0) * t;
				esY->set(temp, j, 0);
			}
			for (int j = 0; j < vSize; j++)
			{
				for (int i = 0; i < 3; i++)
				{
					v->set((v->get(j, i) + (0.1 * esY->get(j, 0) * z->get(i, 0))), j, i);

				}
			}



			netV->~Matrix();
		}

		cycle++;
		error = sqrt(error) / (SizeT);
		error_chart->Series[0]->Points->AddXY(cycle, error);
		drawWeight = true;
		vDraw = true;
		pictureBox1->Refresh();

	} while (error > 0.01);
	lbCycle->Text = Convert::ToString(cycle);
	lbError->Text = Convert::ToString(error);


}
};
}
