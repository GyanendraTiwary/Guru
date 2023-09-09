#pragma once
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
	/// Summary for studentsection
	/// </summary>
	public ref class studentsection : public System::Windows::Forms::Form
	{
	public:
		studentsection(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			studsecDispPnl->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentsection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ ssnametb;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ ssprntb;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ studsecDispPnl;
	private: System::Windows::Forms::Label^ ssBatchLbl;
	private: System::Windows::Forms::Button^ okShowStud;
	private: System::Windows::Forms::Label^ ssMarksLbl;
	private: System::Windows::Forms::Label^ ssAgeLbl;
	private: System::Windows::Forms::Label^ ssPhoneLbl;
	private: System::Windows::Forms::Label^ ssPrnLbl;
	private: System::Windows::Forms::Label^ ssEmaillbl;
	private: System::Windows::Forms::Label^ ssRollLbl;
	private: System::Windows::Forms::Label^ ssNamelbl;
	private: System::Windows::Forms::Button^ getinfobtn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(studentsection::typeid));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ssnametb = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->ssprntb = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->studsecDispPnl = (gcnew System::Windows::Forms::Panel());
			this->ssBatchLbl = (gcnew System::Windows::Forms::Label());
			this->okShowStud = (gcnew System::Windows::Forms::Button());
			this->ssMarksLbl = (gcnew System::Windows::Forms::Label());
			this->ssAgeLbl = (gcnew System::Windows::Forms::Label());
			this->ssPhoneLbl = (gcnew System::Windows::Forms::Label());
			this->ssPrnLbl = (gcnew System::Windows::Forms::Label());
			this->ssEmaillbl = (gcnew System::Windows::Forms::Label());
			this->ssRollLbl = (gcnew System::Windows::Forms::Label());
			this->ssNamelbl = (gcnew System::Windows::Forms::Label());
			this->getinfobtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->studsecDispPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(35, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(375, 67);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Student Section";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(594, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(402, 116);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(47, 422);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(305, 3);
			this->panel5->TabIndex = 33;
			// 
			// ssnametb
			// 
			this->ssnametb->BackColor = System::Drawing::Color::Black;
			this->ssnametb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ssnametb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ssnametb->ForeColor = System::Drawing::Color::White;
			this->ssnametb->Location = System::Drawing::Point(47, 393);
			this->ssnametb->Multiline = true;
			this->ssnametb->Name = L"ssnametb";
			this->ssnametb->Size = System::Drawing::Size(305, 32);
			this->ssnametb->TabIndex = 32;
			this->ssnametb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &studentsection::ssnametb_KeyDown);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(41, 358);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 32);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Name";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(47, 330);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(305, 3);
			this->panel4->TabIndex = 30;
			// 
			// ssprntb
			// 
			this->ssprntb->BackColor = System::Drawing::Color::Black;
			this->ssprntb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ssprntb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ssprntb->ForeColor = System::Drawing::Color::White;
			this->ssprntb->Location = System::Drawing::Point(47, 301);
			this->ssprntb->Multiline = true;
			this->ssprntb->Name = L"ssprntb";
			this->ssprntb->Size = System::Drawing::Size(305, 32);
			this->ssprntb->TabIndex = 29;
			this->ssprntb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &studentsection::ssprntb_KeyDown);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(41, 266);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 32);
			this->label8->TabIndex = 28;
			this->label8->Text = L"PRN";
			// 
			// studsecDispPnl
			// 
			this->studsecDispPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->studsecDispPnl->Controls->Add(this->ssBatchLbl);
			this->studsecDispPnl->Controls->Add(this->okShowStud);
			this->studsecDispPnl->Controls->Add(this->ssMarksLbl);
			this->studsecDispPnl->Controls->Add(this->ssAgeLbl);
			this->studsecDispPnl->Controls->Add(this->ssPhoneLbl);
			this->studsecDispPnl->Controls->Add(this->ssPrnLbl);
			this->studsecDispPnl->Controls->Add(this->ssEmaillbl);
			this->studsecDispPnl->Controls->Add(this->ssRollLbl);
			this->studsecDispPnl->Controls->Add(this->ssNamelbl);
			this->studsecDispPnl->Location = System::Drawing::Point(437, 215);
			this->studsecDispPnl->Name = L"studsecDispPnl";
			this->studsecDispPnl->Size = System::Drawing::Size(522, 386);
			this->studsecDispPnl->TabIndex = 34;
			// 
			// ssBatchLbl
			// 
			this->ssBatchLbl->BackColor = System::Drawing::Color::Black;
			this->ssBatchLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssBatchLbl->ForeColor = System::Drawing::Color::White;
			this->ssBatchLbl->Location = System::Drawing::Point(23, 236);
			this->ssBatchLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssBatchLbl->Name = L"ssBatchLbl";
			this->ssBatchLbl->Size = System::Drawing::Size(453, 33);
			this->ssBatchLbl->TabIndex = 17;
			this->ssBatchLbl->Text = L"Batch:";
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
			this->okShowStud->Location = System::Drawing::Point(393, 326);
			this->okShowStud->Name = L"okShowStud";
			this->okShowStud->Size = System::Drawing::Size(104, 47);
			this->okShowStud->TabIndex = 16;
			this->okShowStud->Text = L"OK";
			this->okShowStud->UseVisualStyleBackColor = false;
			this->okShowStud->Click += gcnew System::EventHandler(this, &studentsection::okShowStud_Click);
			// 
			// ssMarksLbl
			// 
			this->ssMarksLbl->BackColor = System::Drawing::Color::Black;
			this->ssMarksLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssMarksLbl->ForeColor = System::Drawing::Color::White;
			this->ssMarksLbl->Location = System::Drawing::Point(23, 276);
			this->ssMarksLbl->Name = L"ssMarksLbl";
			this->ssMarksLbl->Size = System::Drawing::Size(316, 33);
			this->ssMarksLbl->TabIndex = 12;
			this->ssMarksLbl->Text = L"Marks:";
			// 
			// ssAgeLbl
			// 
			this->ssAgeLbl->BackColor = System::Drawing::Color::Black;
			this->ssAgeLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssAgeLbl->ForeColor = System::Drawing::Color::White;
			this->ssAgeLbl->Location = System::Drawing::Point(23, 198);
			this->ssAgeLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssAgeLbl->Name = L"ssAgeLbl";
			this->ssAgeLbl->Size = System::Drawing::Size(453, 33);
			this->ssAgeLbl->TabIndex = 10;
			this->ssAgeLbl->Text = L"Age: ";
			// 
			// ssPhoneLbl
			// 
			this->ssPhoneLbl->BackColor = System::Drawing::Color::Black;
			this->ssPhoneLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssPhoneLbl->ForeColor = System::Drawing::Color::White;
			this->ssPhoneLbl->Location = System::Drawing::Point(23, 161);
			this->ssPhoneLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssPhoneLbl->Name = L"ssPhoneLbl";
			this->ssPhoneLbl->Size = System::Drawing::Size(453, 33);
			this->ssPhoneLbl->TabIndex = 9;
			this->ssPhoneLbl->Text = L"Phone: ";
			// 
			// ssPrnLbl
			// 
			this->ssPrnLbl->BackColor = System::Drawing::Color::Black;
			this->ssPrnLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssPrnLbl->ForeColor = System::Drawing::Color::White;
			this->ssPrnLbl->Location = System::Drawing::Point(23, 124);
			this->ssPrnLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssPrnLbl->Name = L"ssPrnLbl";
			this->ssPrnLbl->Size = System::Drawing::Size(453, 33);
			this->ssPrnLbl->TabIndex = 8;
			this->ssPrnLbl->Text = L"PRN: ";
			// 
			// ssEmaillbl
			// 
			this->ssEmaillbl->BackColor = System::Drawing::Color::Black;
			this->ssEmaillbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssEmaillbl->ForeColor = System::Drawing::Color::White;
			this->ssEmaillbl->Location = System::Drawing::Point(23, 90);
			this->ssEmaillbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssEmaillbl->Name = L"ssEmaillbl";
			this->ssEmaillbl->Size = System::Drawing::Size(453, 33);
			this->ssEmaillbl->TabIndex = 7;
			this->ssEmaillbl->Text = L"Email: ";
			// 
			// ssRollLbl
			// 
			this->ssRollLbl->BackColor = System::Drawing::Color::Black;
			this->ssRollLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssRollLbl->ForeColor = System::Drawing::Color::White;
			this->ssRollLbl->Location = System::Drawing::Point(23, 54);
			this->ssRollLbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssRollLbl->Name = L"ssRollLbl";
			this->ssRollLbl->Size = System::Drawing::Size(453, 33);
			this->ssRollLbl->TabIndex = 6;
			this->ssRollLbl->Text = L"Roll: ";
			// 
			// ssNamelbl
			// 
			this->ssNamelbl->BackColor = System::Drawing::Color::Black;
			this->ssNamelbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->ssNamelbl->ForeColor = System::Drawing::Color::White;
			this->ssNamelbl->Location = System::Drawing::Point(23, 18);
			this->ssNamelbl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ssNamelbl->Name = L"ssNamelbl";
			this->ssNamelbl->Size = System::Drawing::Size(453, 33);
			this->ssNamelbl->TabIndex = 5;
			this->ssNamelbl->Text = L"Name: ";
			// 
			// getinfobtn
			// 
			this->getinfobtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->getinfobtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->getinfobtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->getinfobtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->getinfobtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->getinfobtn->Location = System::Drawing::Point(47, 482);
			this->getinfobtn->Name = L"getinfobtn";
			this->getinfobtn->Size = System::Drawing::Size(305, 47);
			this->getinfobtn->TabIndex = 35;
			this->getinfobtn->Text = L"GET INFO";
			this->getinfobtn->UseVisualStyleBackColor = false;
			this->getinfobtn->Click += gcnew System::EventHandler(this, &studentsection::getinfobtn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(47, 635);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(305, 47);
			this->button1->TabIndex = 36;
			this->button1->Text = L"CLOSE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &studentsection::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(470, 134);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(536, 590);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// studentsection
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1008, 723);
			this->Controls->Add(this->studsecDispPnl);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->getinfobtn);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->ssnametb);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->ssprntb);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label10);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"studentsection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentsection";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->studsecDispPnl->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


public: students^ student = nullptr;

	private: System::Void okShowStud_Click(System::Object^ sender, System::EventArgs^ e) {
		studsecDispPnl->Hide();
		ssprntb->Clear();
		ssnametb->Clear();
		ssprntb->Focus();
	}
private: System::Void getinfobtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ prn = ssprntb->Text;
	String^ name = ssnametb->Text;

	if (prn->Length == 0 || name->Length == 0)
	{
		MessageBox::Show("Please Fill Roll No. ", "Empty Fields", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=guru;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM studentdata WHERE prn=@prn AND name=@name;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@prn", prn);
		command.Parameters->AddWithValue("@name", name);

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
			ssprntb->Clear();
			ssnametb->Clear();
			ssprntb->Focus();
			this->Hide();
		}



	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	ssNamelbl->Text = "Name: " + student->name;
	ssRollLbl->Text = "Roll: " + student->roll;
	ssEmaillbl->Text = "Email: " + student->email;
	ssPrnLbl->Text = "PRN: " + student->prn;
	ssPhoneLbl->Text = "Phone: " + student->phone;
	ssAgeLbl->Text = "Age: " + student->age;
	ssBatchLbl->Text = "Batch: " + student->batch;
	ssMarksLbl->Text = "Marks: " + student->marks;

	studsecDispPnl->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void ssprntb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		ssnametb->Focus();
	}
}
private: System::Void ssnametb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		getinfobtn->PerformClick();
	}
}
};
}
