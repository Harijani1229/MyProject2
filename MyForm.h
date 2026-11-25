#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			ApplyModernTheme();
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

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dgvRecent;
	private: System::Windows::Forms::Label^ dashboardTitle;






	protected:



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dashboardTitle = (gcnew System::Windows::Forms::Label());
			this->dgvRecent = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecent))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(898, 510);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dashboardTitle);
			this->tabPage4->Controls->Add(this->dgvRecent);
			this->tabPage4->Controls->Add(this->panel4);
			this->tabPage4->Controls->Add(this->panel5);
			this->tabPage4->Controls->Add(this->panel6);
			this->tabPage4->Controls->Add(this->panel3);
			this->tabPage4->Controls->Add(this->panel2);
			this->tabPage4->Controls->Add(this->panel1);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(890, 477);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Overview";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// dashboardTitle
			// 
			this->dashboardTitle->AutoSize = true;
			this->dashboardTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold));
			this->dashboardTitle->Location = System::Drawing::Point(249, 0);
			this->dashboardTitle->Name = L"dashboardTitle";
			this->dashboardTitle->Size = System::Drawing::Size(297, 54);
			this->dashboardTitle->TabIndex = 4;
			this->dashboardTitle->Text = L"Your Overview";
			// 
			// dgvRecent
			// 
			this->dgvRecent->AllowUserToAddRows = false;
			this->dgvRecent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRecent->Location = System::Drawing::Point(24, 294);
			this->dgvRecent->Name = L"dgvRecent";
			this->dgvRecent->ReadOnly = true;
			this->dgvRecent->RowHeadersWidth = 62;
			this->dgvRecent->RowTemplate->Height = 28;
			this->dgvRecent->Size = System::Drawing::Size(746, 150);
			this->dgvRecent->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Location = System::Drawing::Point(540, 182);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(230, 100);
			this->panel4->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(33, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 25);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Rs. 0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(144, 20);
			this->label11->TabIndex = 0;
			this->label11->Text = L"TOTAL RECORDS";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Location = System::Drawing::Point(280, 182);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(230, 100);
			this->panel5->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(33, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 25);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Rs. 0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(34, 23);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 20);
			this->label13->TabIndex = 0;
			this->label13->Text = L"TODAY EXPENSE";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Location = System::Drawing::Point(540, 75);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(230, 100);
			this->panel6->TabIndex = 2;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(33, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 25);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Rs. 0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(34, 23);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(84, 20);
			this->label15->TabIndex = 0;
			this->label15->Text = L"BALANCE";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(24, 182);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(230, 100);
			this->panel3->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(33, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 25);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Rs. 0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"TODAY INCOME";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Location = System::Drawing::Point(280, 75);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(230, 100);
			this->panel2->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(33, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Rs. 0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"TOTAL EXPENSE";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(24, 75);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 100);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(33, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Rs. 0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"TOTAL INCOME";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(890, 477);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Expense";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click_1);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(154, 301);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(312, 84);
			this->listBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(312, 36);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Add Expense";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 191);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(488, 26);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Description";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Food", L"Transport", L"Shopping", L"Bills", L"Other" });
			this->comboBox1->Location = System::Drawing::Point(154, 94);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(488, 28);
			this->comboBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Category";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(488, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Amount";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(890, 477);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"To-Do";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(191, 64);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(239, 344);
			this->listBox2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(191, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(239, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Task";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox3);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(890, 477);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Notes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(200, 72);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(300, 364);
			this->listBox3->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(200, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 44);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Add Note";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(17, 22);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 544);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Daily Life Manager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRecent))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ApplyModernTheme() {
		Color pageBackground = Color::FromArgb(239, 242, 248);
		Color surface = Color::White;
		Color primary = Color::FromArgb(91, 76, 172);
		Color text = Color::FromArgb(38, 42, 56);
		Color mutedText = Color::FromArgb(82, 88, 108);
		Color incomeColor = Color::FromArgb(35, 145, 105);
		Color expenseColor = Color::FromArgb(205, 76, 91);
		Color balanceColor = Color::FromArgb(48, 112, 190);
		Color todayColor = Color::FromArgb(224, 139, 43);

		this->BackColor = pageBackground;
		this->ForeColor = text;
		this->Font = gcnew Drawing::Font(L"Segoe UI", 10);
		this->StartPosition = FormStartPosition::CenterScreen;
		this->MinimumSize = Drawing::Size(900, 560);
		this->tabControl1->Dock = DockStyle::Fill;
		this->tabControl1->Padding = Drawing::Point(16, 8);
		this->tabControl1->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10);
		this->dashboardTitle->ForeColor = primary;
		this->dashboardTitle->Font = gcnew Drawing::Font(L"Segoe UI", 20, Drawing::FontStyle::Bold);

		for each (TabPage^ page in this->tabControl1->TabPages) {
			page->BackColor = pageBackground;
			page->ForeColor = text;
			page->Padding = Windows::Forms::Padding(24);
		}

		array<Button^>^ buttons = gcnew array<Button^> { button1, button2, button3 };
		for each (Button^ button in buttons) {
			button->BackColor = primary;
			button->ForeColor = Color::White;
			button->FlatStyle = FlatStyle::Flat;
			button->FlatAppearance->BorderSize = 0;
			button->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10);
			button->Cursor = Cursors::Hand;
			button->UseVisualStyleBackColor = false;
		}
		button1->BackColor = expenseColor;
		button2->BackColor = balanceColor;
		button3->BackColor = todayColor;

		array<TextBox^>^ textBoxes = gcnew array<TextBox^> { textBox1, textBox2, textBox3, textBox4 };
		for each (TextBox^ textBox in textBoxes) {
			textBox->BackColor = surface;
			textBox->ForeColor = text;
			textBox->BorderStyle = BorderStyle::FixedSingle;
		}

		comboBox1->BackColor = surface;
		comboBox1->ForeColor = text;
		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

		array<ListBox^>^ lists = gcnew array<ListBox^> { listBox1, listBox2, listBox3 };
		for each (ListBox^ list in lists) {
			list->BackColor = surface;
			list->ForeColor = text;
			list->BorderStyle = BorderStyle::FixedSingle;
		}

		array<Panel^>^ cards = gcnew array<Panel^> { panel1, panel2, panel3, panel4, panel5, panel6 };
		for each (Panel^ card in cards) {
			card->BackColor = surface;
			card->BorderStyle = BorderStyle::FixedSingle;
		}
		panel1->BackColor = Color::FromArgb(226, 246, 237);
		panel2->BackColor = Color::FromArgb(253, 232, 235);
		panel3->BackColor = Color::FromArgb(229, 244, 250);
		panel4->BackColor = Color::FromArgb(243, 235, 253);
		panel5->BackColor = Color::FromArgb(255, 243, 221);
		panel6->BackColor = Color::FromArgb(226, 237, 253);

		array<Label^>^ metricLabels = gcnew array<Label^> { label5, label6, label8, label10, label12, label14 };
		for each (Label^ label in metricLabels) {
			label->ForeColor = primary;
			label->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 16);
		}
		label5->ForeColor = incomeColor;
		label6->ForeColor = expenseColor;
		label8->ForeColor = balanceColor;
		label10->ForeColor = primary;
		label12->ForeColor = todayColor;
		label14->ForeColor = balanceColor;

		array<Label^>^ captionLabels = gcnew array<Label^> { label4, label7, label9, label11, label13, label15 };
		for each (Label^ label in captionLabels) {
			label->ForeColor = mutedText;
			label->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 9);
		}

		this->dgvRecent->BackgroundColor = surface;
		this->dgvRecent->BorderStyle = BorderStyle::FixedSingle;
		this->dgvRecent->GridColor = Color::FromArgb(225, 230, 238);
		this->dgvRecent->RowHeadersVisible = false;
		this->dgvRecent->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		this->dgvRecent->EnableHeadersVisualStyles = false;
		this->dgvRecent->ColumnHeadersDefaultCellStyle->BackColor = primary;
		this->dgvRecent->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;
		this->dgvRecent->ColumnHeadersDefaultCellStyle->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 9);
		this->dgvRecent->DefaultCellStyle->SelectionBackColor = Color::FromArgb(220, 232, 247);
		this->dgvRecent->DefaultCellStyle->SelectionForeColor = text;
		this->dgvRecent->AlternatingRowsDefaultCellStyle->BackColor = Color::FromArgb(248, 250, 253);

		this->panel1->Location = Drawing::Point(24, 58);
		this->panel2->Location = Drawing::Point(306, 58);
		this->panel3->Location = Drawing::Point(24, 177);
		this->panel4->Location = Drawing::Point(588, 177);
		this->panel5->Location = Drawing::Point(306, 177);
		this->panel6->Location = Drawing::Point(588, 58);
		for each (Panel^ card in cards) {
			card->Size = Drawing::Size(255, 100);
		}
		this->dgvRecent->Location = Drawing::Point(24, 306);
		this->dgvRecent->Size = Drawing::Size(819, 150);
		this->dgvRecent->Anchor = AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right;

		this->tabPage1->Text = L"Expenses";
		this->tabPage2->Text = L"Tasks";
		this->tabPage3->Text = L"Notes";
		this->label1->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10);
		this->label2->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10);
		this->label3->Font = gcnew Drawing::Font(L"Segoe UI Semibold", 10);
		this->label1->Location = Drawing::Point(34, 43);
		this->label2->Location = Drawing::Point(34, 111);
		this->label3->Location = Drawing::Point(34, 181);
		this->textBox1->Location = Drawing::Point(154, 38);
		this->comboBox1->Location = Drawing::Point(154, 106);
		this->textBox2->Location = Drawing::Point(154, 174);
		this->button1->Location = Drawing::Point(154, 232);
		this->listBox1->Location = Drawing::Point(154, 282);
		this->listBox1->Size = Drawing::Size(488, 130);
		this->textBox3->Location = Drawing::Point(24, 24);
		this->textBox3->Size = Drawing::Size(500, 32);
		this->button2->Location = Drawing::Point(540, 24);
		this->button2->Size = Drawing::Size(300, 38);
		this->listBox2->Location = Drawing::Point(24, 82);
		this->listBox2->Size = Drawing::Size(816, 330);
		this->textBox4->Location = Drawing::Point(24, 24);
		this->textBox4->Size = Drawing::Size(500, 32);
		this->button3->Location = Drawing::Point(540, 24);
		this->button3->Size = Drawing::Size(300, 38);
		this->listBox3->Location = Drawing::Point(24, 82);
		this->listBox3->Size = Drawing::Size(816, 330);
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || comboBox1->Text == "" || textBox2->Text == "") {
			MessageBox::Show("Please fill all fields!");
			return;
		}

		String^ item = textBox2->Text + " - " + comboBox1->Text + " - Rs." + textBox1->Text;
		listBox1->Items->Add(item);

		if (dgvRecent->Columns->Count == 0) {
			dgvRecent->Columns->Add("Date", "Date");
			dgvRecent->Columns->Add("Type", "Type");
			dgvRecent->Columns->Add("Category", "Category");
			dgvRecent->Columns->Add("Amount", "Amount");
		}
		dgvRecent->Rows->Add(DateTime::Now, "Expense", comboBox1->Text, textBox1->Text);
		tabPage4_Click(sender, e);

		textBox1->Clear();
		textBox2->Clear();
		comboBox1->SelectedIndex = -1;
		MessageBox::Show("Expense Added!");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "") {
			MessageBox::Show("Please enter a task!");
			return;
		}

		listBox2->Items->Add(textBox3->Text);
		textBox3->Clear();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "") {
			MessageBox::Show("Please enter a note!");
			return;
		}

		listBox3->Items->Add(textBox4->Text);
		textBox4->Clear();
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {

		double totalIncome = 0, totalExpense = 0;
		double todayIncome = 0, todayExpense = 0;
		int totalRecords = 0;
		DateTime today = DateTime::Today;

		// dgvRecent la irukura ella rows um paakrom
		for each(DataGridViewRow ^ row in dgvRecent->Rows) {
			if (row->IsNewRow) continue;
			if (row->Cells[0]->Value == nullptr || row->Cells[1]->Value == nullptr || row->Cells[3]->Value == nullptr) continue;

			String^ type = row->Cells[1]->Value->ToString(); // Income / Expense
			double amount = Convert::ToDouble(row->Cells[3]->Value); // Amount
			DateTime date = Convert::ToDateTime(row->Cells[0]->Value); // Date

			totalRecords++;

			if (type == "Income") {
				totalIncome += amount;
				if (date.Date == today) todayIncome += amount;
			}
			else if (type == "Expense") {
				totalExpense += amount;
				if (date.Date == today) todayExpense += amount;
			}
		}

		double balance = totalIncome - totalExpense;

		label5->Text = "Rs. " + totalIncome.ToString("N2");
		label6->Text = "Rs. " + totalExpense.ToString("N2");
		label14->Text = "Rs. " + balance.ToString("N2");
		label8->Text = "Rs. " + todayIncome.ToString("N2");
		label12->Text = "Rs. " + todayExpense.ToString("N2");
		label10->Text = totalRecords.ToString();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}

