#pragma once
#include "user.h"

namespace guru {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for signin
	/// </summary>
	public ref class signin : public System::Windows::Forms::Form
	{
	public:
		signin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox6;

	protected:

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox7;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ securitykeytb;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label4;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signin::typeid));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->securitykeytb = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(59, 284);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(305, 3);
			this->panel5->TabIndex = 27;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(59, 256);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(305, 31);
			this->textBox6->TabIndex = 26;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &signin::textBox6_KeyDown);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(53, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 32);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Class";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(59, 192);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(305, 3);
			this->panel4->TabIndex = 24;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(59, 164);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(305, 31);
			this->textBox7->TabIndex = 22;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &signin::textBox7_TextChanged);
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &signin::textBox7_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(59, 164);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(305, 23);
			this->textBox5->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(53, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 32);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Name";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(59, 605);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 45);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Register";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &signin::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(47, 29);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(206, 67);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Register";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(594, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(402, 116);
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(496, 237);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(512, 486);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(59, 374);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(305, 3);
			this->panel1->TabIndex = 30;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(59, 346);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(305, 31);
			this->textBox1->TabIndex = 29;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &signin::textBox1_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(53, 311);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 32);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Username";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(59, 455);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(305, 3);
			this->panel2->TabIndex = 33;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(59, 432);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(305, 23);
			this->textBox2->TabIndex = 32;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &signin::textBox2_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(53, 397);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 32);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Password";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(59, 544);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(305, 3);
			this->panel3->TabIndex = 36;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(59, 521);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(305, 23);
			this->textBox3->TabIndex = 35;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &signin::textBox3_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(53, 486);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 32);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Retype Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(234, 605);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 45);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &signin::button1_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(496, 221);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(305, 3);
			this->panel6->TabIndex = 41;
			// 
			// securitykeytb
			// 
			this->securitykeytb->BackColor = System::Drawing::Color::Black;
			this->securitykeytb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->securitykeytb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->securitykeytb->ForeColor = System::Drawing::Color::White;
			this->securitykeytb->Location = System::Drawing::Point(496, 193);
			this->securitykeytb->Multiline = true;
			this->securitykeytb->Name = L"securitykeytb";
			this->securitykeytb->PasswordChar = '*';
			this->securitykeytb->Size = System::Drawing::Size(305, 31);
			this->securitykeytb->TabIndex = 39;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(496, 193);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(305, 23);
			this->textBox8->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(490, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 32);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Security Key:";
			// 
			// signin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1008, 723);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->securitykeytb);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"signin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"signin";
			this->Load += gcnew System::EventHandler(this, &signin::signin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: user^ User = nullptr;

	private: System::Void textBox7_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox6->Focus();
		}
	}
	private: System::Void textBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox1->Focus();
		}
	}

	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox2->Focus();
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter)
		{
			textBox3->Focus();
		}
	}
	private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter)
		{
			button4->PerformClick();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (securitykeytb->Text == "onlyadmin")
		{
			String^ name = textBox7->Text;
			String^ panel = textBox6->Text;
			String^ username = textBox1->Text;
			String^ password = textBox2->Text;
			String^ confirmpassword = textBox3->Text;

			if (name->Length == 0 || panel->Length == 0 || username->Length == 0 || password->Length == 0 || confirmpassword->Length == 0)
			{
				MessageBox::Show("Please enter all the fields", "One or more field Empty", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if (String::Compare(password, confirmpassword) != 0)
			{
				MessageBox::Show("Opps!! Password Dosen't Match, Please Retype", "Password Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				textBox3->Clear();
				textBox2->Clear();
				textBox2->Focus();

			}
			else
			{
				try {
					String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=guru;Integrated Security=True";
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					String^ sqlQuery = "INSERT INTO userdata " +
						"(name, panel, username, password) VALUES " +
						"(@name, @panel, @username, @password);";

					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@name", name);
					command.Parameters->AddWithValue("@panel", panel);
					command.Parameters->AddWithValue("@username", username);
					command.Parameters->AddWithValue("@password", password);

					command.ExecuteNonQuery();

					MessageBox::Show("New User Registered", "Registration Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);


					this->Close();

				}
				catch (Exception^ e)
				{
					MessageBox::Show("New User Regestration Failed", "Registration Faliure", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		else {
			MessageBox::Show("Only admin can perform this task", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
		}










	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void signin_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
