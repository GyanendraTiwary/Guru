#pragma once
#include "user.h"
#include "students.h"
 
 

namespace guru {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(user ^User)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			label1->Text = "Welcome " + User->name;
			label3->Text = "ID: " + User->id; 
			label2->Text = "Panel: " + User->panel;

			pnlAdd->Hide();
			pnlShow->Hide();
			studDispPnl->Hide();
			dataGridView1->Hide();
			showAllClosebtn->Hide();
			pnlUpdate->Hide();
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;

	protected:



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ addButton;

	private: System::Windows::Forms::Button^ showButton;
	private: System::Windows::Forms::Button^ shoeAllButton;
	private: System::Windows::Forms::Panel^ pnlAdd;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbStdName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ addOk;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ tbStdEmail;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbStdPhone;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tbStdDob;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbStdPrn;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Panel^ pnlShow;

	private: System::Windows::Forms::Button^ okShow;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ tbShow;

	private: System::Windows::Forms::Label^ label10;




	private: System::Windows::Forms::Panel^ studDispPnl;

	private: System::Windows::Forms::Label^ sPrnLbl;
	private: System::Windows::Forms::Label^ sEmaillbl;
	private: System::Windows::Forms::Label^ sRollLbl;
	private: System::Windows::Forms::Label^ sNamelbl;

	private: System::Windows::Forms::Button^ okShowStud;
	private: System::Windows::Forms::Label^ sMarksLbl;
	private: System::Windows::Forms::Label^ SAgeLbl;


	private: System::Windows::Forms::Label^ sPhoneLbl;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ showAllClosebtn;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tbStdMarks;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbStdBatch;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ sBatchLbl;
private: System::Windows::Forms::Button^ updatebtn;
private: System::Windows::Forms::Panel^ pnlUpdate;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ updateMarkstb;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ updateOkbtn;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ updatePrntb;


private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ addcnclbtn;
private: System::Windows::Forms::Button^ showCnclbtn;
private: System::Windows::Forms::Button^ updatecnclbtn;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox6;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->showButton = (gcnew System::Windows::Forms::Button());
			this->shoeAllButton = (gcnew System::Windows::Forms::Button());
			this->pnlAdd = (gcnew System::Windows::Forms::Panel());
			this->addcnclbtn = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tbStdMarks = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbStdBatch = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->addOk = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->tbStdEmail = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbStdPhone = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbStdDob = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbStdPrn = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbStdName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pnlShow = (gcnew System::Windows::Forms::Panel());
			this->showCnclbtn = (gcnew System::Windows::Forms::Button());
			this->okShow = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tbShow = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->studDispPnl = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->sBatchLbl = (gcnew System::Windows::Forms::Label());
			this->okShowStud = (gcnew System::Windows::Forms::Button());
			this->sMarksLbl = (gcnew System::Windows::Forms::Label());
			this->SAgeLbl = (gcnew System::Windows::Forms::Label());
			this->sPhoneLbl = (gcnew System::Windows::Forms::Label());
			this->sPrnLbl = (gcnew System::Windows::Forms::Label());
			this->sEmaillbl = (gcnew System::Windows::Forms::Label());
			this->sRollLbl = (gcnew System::Windows::Forms::Label());
			this->sNamelbl = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->showAllClosebtn = (gcnew System::Windows::Forms::Button());
			this->updatebtn = (gcnew System::Windows::Forms::Button());
			this->pnlUpdate = (gcnew System::Windows::Forms::Panel());
			this->updatecnclbtn = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->updateMarkstb = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->updateOkbtn = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->updatePrntb = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->pnlAdd->SuspendLayout();
			this->pnlShow->SuspendLayout();
			this->studDispPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pnlUpdate->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(579, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(399, 117);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 56);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(18, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 33);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ID : ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(500, 544);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(594, 182);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-169, 544);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(676, 182);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(944, 529);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(54, 64);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(18, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 33);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Class : ";
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Location = System::Drawing::Point(23, 188);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(161, 51);
			this->addButton->TabIndex = 9;
			this->addButton->Text = L"ADD ";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// showButton
			// 
			this->showButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->showButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->showButton->Location = System::Drawing::Point(23, 272);
			this->showButton->Name = L"showButton";
			this->showButton->Size = System::Drawing::Size(161, 51);
			this->showButton->TabIndex = 11;
			this->showButton->Text = L"SHOW";
			this->showButton->UseVisualStyleBackColor = false;
			this->showButton->Click += gcnew System::EventHandler(this, &MyForm::showButton_Click);
			// 
			// shoeAllButton
			// 
			this->shoeAllButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->shoeAllButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->shoeAllButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shoeAllButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shoeAllButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->shoeAllButton->Location = System::Drawing::Point(23, 437);
			this->shoeAllButton->Name = L"shoeAllButton";
			this->shoeAllButton->Size = System::Drawing::Size(161, 51);
			this->shoeAllButton->TabIndex = 12;
			this->shoeAllButton->Text = L"SHOW ALL";
			this->shoeAllButton->UseVisualStyleBackColor = false;
			this->shoeAllButton->Click += gcnew System::EventHandler(this, &MyForm::shoeAllButton_Click);
			// 
			// pnlAdd
			// 
			this->pnlAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->pnlAdd->Controls->Add(this->addcnclbtn);
			this->pnlAdd->Controls->Add(this->panel7);
			this->pnlAdd->Controls->Add(this->tbStdMarks);
			this->pnlAdd->Controls->Add(this->label11);
			this->pnlAdd->Controls->Add(this->panel1);
			this->pnlAdd->Controls->Add(this->tbStdBatch);
			this->pnlAdd->Controls->Add(this->label9);
			this->pnlAdd->Controls->Add(this->addOk);
			this->pnlAdd->Controls->Add(this->panel6);
			this->pnlAdd->Controls->Add(this->tbStdEmail);
			this->pnlAdd->Controls->Add(this->label8);
			this->pnlAdd->Controls->Add(this->panel5);
			this->pnlAdd->Controls->Add(this->tbStdPhone);
			this->pnlAdd->Controls->Add(this->label7);
			this->pnlAdd->Controls->Add(this->panel4);
			this->pnlAdd->Controls->Add(this->tbStdDob);
			this->pnlAdd->Controls->Add(this->label6);
			this->pnlAdd->Controls->Add(this->panel3);
			this->pnlAdd->Controls->Add(this->tbStdPrn);
			this->pnlAdd->Controls->Add(this->label5);
			this->pnlAdd->Controls->Add(this->panel2);
			this->pnlAdd->Controls->Add(this->tbStdName);
			this->pnlAdd->Controls->Add(this->label4);
			this->pnlAdd->ForeColor = System::Drawing::Color::White;
			this->pnlAdd->Location = System::Drawing::Point(198, 188);
			this->pnlAdd->Name = L"pnlAdd";
			this->pnlAdd->Size = System::Drawing::Size(384, 482);
			this->pnlAdd->TabIndex = 13;
			this->pnlAdd->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// addcnclbtn
			// 
			this->addcnclbtn->BackColor = System::Drawing::Color::Red;
			this->addcnclbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcnclbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addcnclbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 6, System::Drawing::FontStyle::Bold));
			this->addcnclbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addcnclbtn->Location = System::Drawing::Point(339, 8);
			this->addcnclbtn->Name = L"addcnclbtn";
			this->addcnclbtn->Size = System::Drawing::Size(28, 22);
			this->addcnclbtn->TabIndex = 22;
			this->addcnclbtn->Text = L"X";
			this->addcnclbtn->UseVisualStyleBackColor = false;
			this->addcnclbtn->Click += gcnew System::EventHandler(this, &MyForm::addcnclbtn_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(108, 421);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(259, 1);
			this->panel7->TabIndex = 21;
			// 
			// tbStdMarks
			// 
			this->tbStdMarks->BackColor = System::Drawing::Color::Black;
			this->tbStdMarks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdMarks->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdMarks->ForeColor = System::Drawing::Color::White;
			this->tbStdMarks->Location = System::Drawing::Point(108, 395);
			this->tbStdMarks->Name = L"tbStdMarks";
			this->tbStdMarks->Size = System::Drawing::Size(259, 27);
			this->tbStdMarks->TabIndex = 20;
			this->tbStdMarks->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdMarks_KeyDown);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(31, 394);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 28);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Marks:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(106, 367);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(259, 1);
			this->panel1->TabIndex = 18;
			// 
			// tbStdBatch
			// 
			this->tbStdBatch->BackColor = System::Drawing::Color::Black;
			this->tbStdBatch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdBatch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdBatch->ForeColor = System::Drawing::Color::White;
			this->tbStdBatch->Location = System::Drawing::Point(106, 341);
			this->tbStdBatch->Name = L"tbStdBatch";
			this->tbStdBatch->Size = System::Drawing::Size(259, 27);
			this->tbStdBatch->TabIndex = 17;
			this->tbStdBatch->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdBatch_KeyDown);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(29, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 28);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Batch:";
			// 
			// addOk
			// 
			this->addOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addOk->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addOk->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addOk->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addOk->Location = System::Drawing::Point(266, 427);
			this->addOk->Name = L"addOk";
			this->addOk->Size = System::Drawing::Size(99, 42);
			this->addOk->TabIndex = 15;
			this->addOk->Text = L"OK";
			this->addOk->UseVisualStyleBackColor = false;
			this->addOk->Click += gcnew System::EventHandler(this, &MyForm::addOk_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(108, 303);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(259, 1);
			this->panel6->TabIndex = 14;
			// 
			// tbStdEmail
			// 
			this->tbStdEmail->BackColor = System::Drawing::Color::Black;
			this->tbStdEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdEmail->ForeColor = System::Drawing::Color::White;
			this->tbStdEmail->Location = System::Drawing::Point(108, 277);
			this->tbStdEmail->Name = L"tbStdEmail";
			this->tbStdEmail->Size = System::Drawing::Size(259, 27);
			this->tbStdEmail->TabIndex = 13;
			this->tbStdEmail->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdEmail_KeyDown);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(31, 276);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 28);
			this->label8->TabIndex = 12;
			this->label8->Text = L"E-mail:";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(108, 237);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(259, 1);
			this->panel5->TabIndex = 11;
			// 
			// tbStdPhone
			// 
			this->tbStdPhone->BackColor = System::Drawing::Color::Black;
			this->tbStdPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdPhone->ForeColor = System::Drawing::Color::White;
			this->tbStdPhone->Location = System::Drawing::Point(108, 211);
			this->tbStdPhone->Name = L"tbStdPhone";
			this->tbStdPhone->Size = System::Drawing::Size(259, 27);
			this->tbStdPhone->TabIndex = 10;
			this->tbStdPhone->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdPhone_KeyDown);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(31, 210);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 28);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Phone:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(108, 176);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(259, 1);
			this->panel4->TabIndex = 8;
			// 
			// tbStdDob
			// 
			this->tbStdDob->BackColor = System::Drawing::Color::Black;
			this->tbStdDob->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdDob->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdDob->ForeColor = System::Drawing::Color::White;
			this->tbStdDob->Location = System::Drawing::Point(108, 150);
			this->tbStdDob->Name = L"tbStdDob";
			this->tbStdDob->Size = System::Drawing::Size(259, 27);
			this->tbStdDob->TabIndex = 7;
			this->tbStdDob->TextChanged += gcnew System::EventHandler(this, &MyForm::tbStdDob_TextChanged);
			this->tbStdDob->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdDob_KeyDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 28);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Age:";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(108, 118);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(259, 1);
			this->panel3->TabIndex = 5;
			// 
			// tbStdPrn
			// 
			this->tbStdPrn->BackColor = System::Drawing::Color::Black;
			this->tbStdPrn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdPrn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdPrn->ForeColor = System::Drawing::Color::White;
			this->tbStdPrn->Location = System::Drawing::Point(108, 92);
			this->tbStdPrn->Name = L"tbStdPrn";
			this->tbStdPrn->Size = System::Drawing::Size(259, 27);
			this->tbStdPrn->TabIndex = 4;
			this->tbStdPrn->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdPrn_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 28);
			this->label5->TabIndex = 3;
			this->label5->Text = L"PRN:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(108, 62);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(259, 1);
			this->panel2->TabIndex = 2;
			// 
			// tbStdName
			// 
			this->tbStdName->BackColor = System::Drawing::Color::Black;
			this->tbStdName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStdName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbStdName->ForeColor = System::Drawing::Color::White;
			this->tbStdName->Location = System::Drawing::Point(108, 36);
			this->tbStdName->Name = L"tbStdName";
			this->tbStdName->Size = System::Drawing::Size(259, 27);
			this->tbStdName->TabIndex = 1;
			this->tbStdName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbStdName_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 28);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Name:";
			// 
			// pnlShow
			// 
			this->pnlShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->pnlShow->Controls->Add(this->showCnclbtn);
			this->pnlShow->Controls->Add(this->okShow);
			this->pnlShow->Controls->Add(this->panel9);
			this->pnlShow->Controls->Add(this->tbShow);
			this->pnlShow->Controls->Add(this->label10);
			this->pnlShow->Location = System::Drawing::Point(192, 273);
			this->pnlShow->Name = L"pnlShow";
			this->pnlShow->Size = System::Drawing::Size(393, 127);
			this->pnlShow->TabIndex = 15;
			this->pnlShow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel8_Paint);
			// 
			// showCnclbtn
			// 
			this->showCnclbtn->BackColor = System::Drawing::Color::Red;
			this->showCnclbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showCnclbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showCnclbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 6, System::Drawing::FontStyle::Bold));
			this->showCnclbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->showCnclbtn->Location = System::Drawing::Point(350, 5);
			this->showCnclbtn->Name = L"showCnclbtn";
			this->showCnclbtn->Size = System::Drawing::Size(28, 22);
			this->showCnclbtn->TabIndex = 23;
			this->showCnclbtn->Text = L"X";
			this->showCnclbtn->UseVisualStyleBackColor = false;
			this->showCnclbtn->Click += gcnew System::EventHandler(this, &MyForm::showCnclbtn_Click);
			// 
			// okShow
			// 
			this->okShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->okShow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->okShow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okShow->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okShow->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->okShow->Location = System::Drawing::Point(266, 76);
			this->okShow->Name = L"okShow";
			this->okShow->Size = System::Drawing::Size(99, 42);
			this->okShow->TabIndex = 18;
			this->okShow->Text = L"OK";
			this->okShow->UseVisualStyleBackColor = false;
			this->okShow->Click += gcnew System::EventHandler(this, &MyForm::okShow_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(85, 50);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(259, 1);
			this->panel9->TabIndex = 17;
			// 
			// tbShow
			// 
			this->tbShow->BackColor = System::Drawing::Color::Black;
			this->tbShow->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbShow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->tbShow->ForeColor = System::Drawing::Color::White;
			this->tbShow->Location = System::Drawing::Point(85, 21);
			this->tbShow->Name = L"tbShow";
			this->tbShow->Size = System::Drawing::Size(259, 27);
			this->tbShow->TabIndex = 16;
			this->tbShow->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbShow_KeyDown);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(15, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 28);
			this->label10->TabIndex = 15;
			this->label10->Text = L"ROLL:";
			// 
			// studDispPnl
			// 
			this->studDispPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->studDispPnl->Controls->Add(this->pictureBox5);
			this->studDispPnl->Controls->Add(this->sBatchLbl);
			this->studDispPnl->Controls->Add(this->okShowStud);
			this->studDispPnl->Controls->Add(this->sMarksLbl);
			this->studDispPnl->Controls->Add(this->SAgeLbl);
			this->studDispPnl->Controls->Add(this->sPhoneLbl);
			this->studDispPnl->Controls->Add(this->sPrnLbl);
			this->studDispPnl->Controls->Add(this->sEmaillbl);
			this->studDispPnl->Controls->Add(this->sRollLbl);
			this->studDispPnl->Controls->Add(this->sNamelbl);
			this->studDispPnl->Location = System::Drawing::Point(436, 181);
			this->studDispPnl->Name = L"studDispPnl";
			this->studDispPnl->Size = System::Drawing::Size(522, 342);
			this->studDispPnl->TabIndex = 15;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(577, 22);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(231, 181);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 19;
			this->pictureBox5->TabStop = false;
			// 
			// sBatchLbl
			// 
			this->sBatchLbl->BackColor = System::Drawing::Color::Black;
			this->sBatchLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sBatchLbl->ForeColor = System::Drawing::Color::White;
			this->sBatchLbl->Location = System::Drawing::Point(23, 238);
			this->sBatchLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sBatchLbl->Name = L"sBatchLbl";
			this->sBatchLbl->Size = System::Drawing::Size(453, 33);
			this->sBatchLbl->TabIndex = 17;
			this->sBatchLbl->Text = L"Batch:";
			// 
			// okShowStud
			// 
			this->okShowStud->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->okShowStud->Cursor = System::Windows::Forms::Cursors::Hand;
			this->okShowStud->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okShowStud->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okShowStud->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->okShowStud->Location = System::Drawing::Point(384, 287);
			this->okShowStud->Name = L"okShowStud";
			this->okShowStud->Size = System::Drawing::Size(104, 47);
			this->okShowStud->TabIndex = 16;
			this->okShowStud->Text = L"OK";
			this->okShowStud->UseVisualStyleBackColor = false;
			this->okShowStud->Click += gcnew System::EventHandler(this, &MyForm::okShowStud_Click);
			// 
			// sMarksLbl
			// 
			this->sMarksLbl->BackColor = System::Drawing::Color::Black;
			this->sMarksLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sMarksLbl->ForeColor = System::Drawing::Color::White;
			this->sMarksLbl->Location = System::Drawing::Point(23, 276);
			this->sMarksLbl->Name = L"sMarksLbl";
			this->sMarksLbl->Size = System::Drawing::Size(316, 33);
			this->sMarksLbl->TabIndex = 12;
			this->sMarksLbl->Text = L"Marks:";
			// 
			// SAgeLbl
			// 
			this->SAgeLbl->BackColor = System::Drawing::Color::Black;
			this->SAgeLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->SAgeLbl->ForeColor = System::Drawing::Color::White;
			this->SAgeLbl->Location = System::Drawing::Point(23, 201);
			this->SAgeLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SAgeLbl->Name = L"SAgeLbl";
			this->SAgeLbl->Size = System::Drawing::Size(453, 33);
			this->SAgeLbl->TabIndex = 10;
			this->SAgeLbl->Text = L"Age: ";
			// 
			// sPhoneLbl
			// 
			this->sPhoneLbl->BackColor = System::Drawing::Color::Black;
			this->sPhoneLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sPhoneLbl->ForeColor = System::Drawing::Color::White;
			this->sPhoneLbl->Location = System::Drawing::Point(23, 164);
			this->sPhoneLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sPhoneLbl->Name = L"sPhoneLbl";
			this->sPhoneLbl->Size = System::Drawing::Size(453, 33);
			this->sPhoneLbl->TabIndex = 9;
			this->sPhoneLbl->Text = L"Phone: ";
			// 
			// sPrnLbl
			// 
			this->sPrnLbl->BackColor = System::Drawing::Color::Black;
			this->sPrnLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sPrnLbl->ForeColor = System::Drawing::Color::White;
			this->sPrnLbl->Location = System::Drawing::Point(23, 127);
			this->sPrnLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sPrnLbl->Name = L"sPrnLbl";
			this->sPrnLbl->Size = System::Drawing::Size(453, 33);
			this->sPrnLbl->TabIndex = 8;
			this->sPrnLbl->Text = L"PRN: ";
			// 
			// sEmaillbl
			// 
			this->sEmaillbl->BackColor = System::Drawing::Color::Black;
			this->sEmaillbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sEmaillbl->ForeColor = System::Drawing::Color::White;
			this->sEmaillbl->Location = System::Drawing::Point(23, 90);
			this->sEmaillbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sEmaillbl->Name = L"sEmaillbl";
			this->sEmaillbl->Size = System::Drawing::Size(453, 33);
			this->sEmaillbl->TabIndex = 7;
			this->sEmaillbl->Text = L"Email: ";
			// 
			// sRollLbl
			// 
			this->sRollLbl->BackColor = System::Drawing::Color::Black;
			this->sRollLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sRollLbl->ForeColor = System::Drawing::Color::White;
			this->sRollLbl->Location = System::Drawing::Point(23, 54);
			this->sRollLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sRollLbl->Name = L"sRollLbl";
			this->sRollLbl->Size = System::Drawing::Size(453, 33);
			this->sRollLbl->TabIndex = 6;
			this->sRollLbl->Text = L"Roll: ";
			// 
			// sNamelbl
			// 
			this->sNamelbl->BackColor = System::Drawing::Color::Black;
			this->sNamelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->sNamelbl->ForeColor = System::Drawing::Color::White;
			this->sNamelbl->Location = System::Drawing::Point(23, 17);
			this->sNamelbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sNamelbl->Name = L"sNamelbl";
			this->sNamelbl->Size = System::Drawing::Size(453, 33);
			this->sNamelbl->TabIndex = 5;
			this->sNamelbl->Text = L"Name: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 169);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(881, 356);
			this->dataGridView1->TabIndex = 16;
			// 
			// showAllClosebtn
			// 
			this->showAllClosebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->showAllClosebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showAllClosebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showAllClosebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showAllClosebtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->showAllClosebtn->Location = System::Drawing::Point(784, 551);
			this->showAllClosebtn->Name = L"showAllClosebtn";
			this->showAllClosebtn->Size = System::Drawing::Size(120, 42);
			this->showAllClosebtn->TabIndex = 17;
			this->showAllClosebtn->Text = L"Done";
			this->showAllClosebtn->UseVisualStyleBackColor = false;
			this->showAllClosebtn->Click += gcnew System::EventHandler(this, &MyForm::showAllClosebtn_Click);
			// 
			// updatebtn
			// 
			this->updatebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->updatebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->updatebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updatebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 10.2F, System::Drawing::FontStyle::Bold));
			this->updatebtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->updatebtn->Location = System::Drawing::Point(23, 359);
			this->updatebtn->Name = L"updatebtn";
			this->updatebtn->Size = System::Drawing::Size(161, 51);
			this->updatebtn->TabIndex = 18;
			this->updatebtn->Text = L"UPDATE MARKS";
			this->updatebtn->UseVisualStyleBackColor = false;
			this->updatebtn->Click += gcnew System::EventHandler(this, &MyForm::updatebtn_Click);
			// 
			// pnlUpdate
			// 
			this->pnlUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->pnlUpdate->Controls->Add(this->updatecnclbtn);
			this->pnlUpdate->Controls->Add(this->panel8);
			this->pnlUpdate->Controls->Add(this->updateMarkstb);
			this->pnlUpdate->Controls->Add(this->label13);
			this->pnlUpdate->Controls->Add(this->updateOkbtn);
			this->pnlUpdate->Controls->Add(this->panel10);
			this->pnlUpdate->Controls->Add(this->updatePrntb);
			this->pnlUpdate->Controls->Add(this->label12);
			this->pnlUpdate->Location = System::Drawing::Point(189, 359);
			this->pnlUpdate->Name = L"pnlUpdate";
			this->pnlUpdate->Size = System::Drawing::Size(393, 203);
			this->pnlUpdate->TabIndex = 18;
			this->pnlUpdate->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnlUpdate_Paint);
			// 
			// updatecnclbtn
			// 
			this->updatecnclbtn->BackColor = System::Drawing::Color::Red;
			this->updatecnclbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->updatecnclbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updatecnclbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 6, System::Drawing::FontStyle::Bold));
			this->updatecnclbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->updatecnclbtn->Location = System::Drawing::Point(352, 9);
			this->updatecnclbtn->Name = L"updatecnclbtn";
			this->updatecnclbtn->Size = System::Drawing::Size(28, 22);
			this->updatecnclbtn->TabIndex = 24;
			this->updatecnclbtn->Text = L"X";
			this->updatecnclbtn->UseVisualStyleBackColor = false;
			this->updatecnclbtn->Click += gcnew System::EventHandler(this, &MyForm::updatecnclbtn_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(85, 112);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(259, 1);
			this->panel8->TabIndex = 21;
			// 
			// updateMarkstb
			// 
			this->updateMarkstb->BackColor = System::Drawing::Color::Black;
			this->updateMarkstb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->updateMarkstb->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->updateMarkstb->ForeColor = System::Drawing::Color::White;
			this->updateMarkstb->Location = System::Drawing::Point(85, 83);
			this->updateMarkstb->Name = L"updateMarkstb";
			this->updateMarkstb->Size = System::Drawing::Size(259, 27);
			this->updateMarkstb->TabIndex = 20;
			this->updateMarkstb->TextChanged += gcnew System::EventHandler(this, &MyForm::updateMarkstb_TextChanged);
			this->updateMarkstb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::updateMarkstb_KeyDown);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(15, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 28);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Marks:";
			// 
			// updateOkbtn
			// 
			this->updateOkbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->updateOkbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->updateOkbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateOkbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateOkbtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->updateOkbtn->Location = System::Drawing::Point(271, 145);
			this->updateOkbtn->Name = L"updateOkbtn";
			this->updateOkbtn->Size = System::Drawing::Size(99, 42);
			this->updateOkbtn->TabIndex = 18;
			this->updateOkbtn->Text = L"OK";
			this->updateOkbtn->UseVisualStyleBackColor = false;
			this->updateOkbtn->Click += gcnew System::EventHandler(this, &MyForm::updateOkbtn_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(85, 50);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(259, 1);
			this->panel10->TabIndex = 17;
			// 
			// updatePrntb
			// 
			this->updatePrntb->BackColor = System::Drawing::Color::Black;
			this->updatePrntb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->updatePrntb->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->updatePrntb->ForeColor = System::Drawing::Color::White;
			this->updatePrntb->Location = System::Drawing::Point(85, 21);
			this->updatePrntb->Name = L"updatePrntb";
			this->updatePrntb->Size = System::Drawing::Size(259, 27);
			this->updatePrntb->TabIndex = 16;
			this->updatePrntb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::updatePrntb_KeyDown);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(15, 23);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 28);
			this->label12->TabIndex = 15;
			this->label12->Text = L"PRN:";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(588, 268);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(341, 213);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 20;
			this->pictureBox6->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1008, 723);
			this->Controls->Add(this->studDispPnl);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pnlShow);
			this->Controls->Add(this->pnlUpdate);
			this->Controls->Add(this->pnlAdd);
			this->Controls->Add(this->showAllClosebtn);
			this->Controls->Add(this->shoeAllButton);
			this->Controls->Add(this->showButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->updatebtn);
			this->Controls->Add(this->pictureBox6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->pnlAdd->ResumeLayout(false);
			this->pnlAdd->PerformLayout();
			this->pnlShow->ResumeLayout(false);
			this->pnlShow->PerformLayout();
			this->studDispPnl->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pnlUpdate->ResumeLayout(false);
			this->pnlUpdate->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public: students^ student = nullptr;

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlUpdate->Hide();
	pnlShow->Hide();
	studDispPnl->Hide();
	dataGridView1->Hide();
	showAllClosebtn->Hide();
	pnlAdd->Show();
}
private: System::Void addOk_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ name = tbStdName->Text;
	String^ prn = tbStdPrn->Text;
	String^ age = tbStdDob->Text;
	String^ email = tbStdEmail->Text;
	String^ phone = tbStdPhone->Text;
	String^ batch = tbStdBatch->Text;
	String^ marks = tbStdMarks->Text;

	if (name->Length == 0 || prn->Length == 0 || age->Length == 0 || phone->Length == 0 || email->Length == 0 || batch->Length == 0)
	{
		MessageBox::Show("All Fields Needs to be filled. Except Marks !!", "Empty Fields", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
	}
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=guru;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO studentdata " + "(name, prn, age, email, phone, batch, marks) VALUES " +
			"(@name, @prn, @age, @email, @phone, @batch, @marks);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@prn", prn);
		command.Parameters->AddWithValue("@age", age);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@batch", batch);
		command.Parameters->AddWithValue("@marks", marks);

		command.ExecuteNonQuery();

		MessageBox::Show("New Student Added", "Addition Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	 tbStdName->Clear();
	 tbStdPrn->Clear();
	 tbStdDob->Clear();
	 tbStdEmail->Clear();
	 tbStdPhone->Clear();
	 tbStdBatch->Clear();
	 tbStdMarks->Clear();

	pnlAdd->Hide();
}
private: System::Void showButton_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlShow->Hide();
	pnlUpdate->Hide();
	studDispPnl->Hide();
	dataGridView1->Hide();
	showAllClosebtn->Hide();
	pnlShow->Show();
}
private: System::Void okShow_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlShow->Hide();
	studDispPnl->Hide();
	dataGridView1->Hide();
	showAllClosebtn->Hide();
	pnlShow->Hide();

	String^ roll = tbShow->Text;

	if (roll->Length == 0)
	{
		MessageBox::Show("Please Fill Roll No. ", "Empty Fields", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=guru;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM studentdata WHERE roll=@roll;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@roll", roll);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			student = gcnew students;
			student->roll = reader->GetInt32(0);
			student->name = reader->GetString(1);
			student->prn = reader->GetString(2);
			student->age = reader->GetString(3);
			student->email = reader->GetString(4);
			student->phone = reader->GetString(5);
			student->batch = reader->GetString(6);
			student->marks = reader->GetString(7);

		}
		else
		{
			MessageBox::Show("Student Does't Exist", "Add Student", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	sNamelbl->Text = "Name: " + student->name;
	sRollLbl->Text = "Roll: " + student->roll;
	sEmaillbl->Text = "Email: " + student->email;
	sPrnLbl->Text = "PRN: " + student->prn;
	sPhoneLbl->Text = "Phone: " + student->phone;
	SAgeLbl->Text = "Age: " + student->age;
	sBatchLbl->Text = "Batch: " + student->batch;
	sMarksLbl->Text = "Marks: " + student->marks;

	tbShow->Clear();

	studDispPnl->Show();
	 
}
private: System::Void okShowStud_Click(System::Object^ sender, System::EventArgs^ e) {
	studDispPnl->Hide();
}
private: System::Void shoeAllButton_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlUpdate->Hide();
	pnlShow->Hide();
	studDispPnl->Hide();
	dataGridView1->Hide();
	showAllClosebtn->Hide();
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=guru;Integrated Security=True;";
		SqlConnection^  connDatbase = gcnew SqlConnection(connString);
		String^ sqlQuery = "SELECT * FROM studentdata ;";
		SqlCommand^ cmdDatabase = gcnew  SqlCommand(sqlQuery, connDatbase);
		SqlDataReader^ reader;

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
		adapter->SelectCommand = cmdDatabase;
		DataTable^ dtStudents = gcnew DataTable();
		adapter->Fill(dtStudents);
		BindingSource^ bSource = gcnew BindingSource();
		
		bSource->DataSource = dtStudents;
		dataGridView1->DataSource = bSource;
		adapter->Update(dtStudents);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}



	dataGridView1->Show();
	showAllClosebtn->Show();
}
private: System::Void showAllClosebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Hide();
	showAllClosebtn->Hide();
}
private: System::Void tbStdDob_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void updatebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
	pnlShow->Hide();
	studDispPnl->Hide();
	dataGridView1->Hide();
	showAllClosebtn->Hide();
	pnlUpdate->Hide();
	pnlUpdate->Show();

}
private: System::Void updateOkbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ prn = updatePrntb->Text;
	 
	String^ marks = updateMarkstb->Text;

	if (prn->Length == 0 || marks->Length == 0 )
	{
		MessageBox::Show("All Fields Needs to be filled. Except Marks !!", "Empty Fields", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=guru;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "UPDATE studentdata SET prn=@prn, marks=@marks WHERE prn=@prn;";
			 

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@prn", prn);
		command.Parameters->AddWithValue("@marks", marks);

		command.ExecuteNonQuery();

		MessageBox::Show("Marks Updated Successfull", "Update Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	
	
	pnlUpdate->Hide();
}
private: System::Void addcnclbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdd->Hide();
}
private: System::Void showCnclbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlShow->Hide();
}
private: System::Void pnlUpdate_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void updatecnclbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlUpdate->Hide();
}
private: System::Void tbStdName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		tbStdPrn->Focus();
	}
}
private: System::Void tbStdPrn_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		tbStdDob->Focus();
	}
}
private: System::Void tbStdDob_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		tbStdPhone->Focus();
	}
}
private: System::Void tbStdPhone_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		tbStdEmail->Focus();
	}
}
private: System::Void tbStdEmail_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		tbStdBatch->Focus();
	}
}
private: System::Void tbStdBatch_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		tbStdMarks->Focus();
	}
}
private: System::Void tbStdMarks_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		addOk->PerformClick();
	}
}
private: System::Void tbShow_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		okShow->PerformClick();
	}
}
private: System::Void updatePrntb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		updateMarkstb->Focus();
	}
}
private: System::Void updateMarkstb_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void updateMarkstb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		updateOkbtn->PerformClick();
	}
}
};
}
