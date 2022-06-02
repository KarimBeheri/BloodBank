#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <msclr\marshal_cppstd.h>
#include <cassert>
#include<Windows.h>
#include<MMsystem.h>
#include<stdio.h>
namespace BloodBank {
	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	/// <summary>
	/// Summary for Recipient
	/// </summary>
	public ref class Recipient : public System::Windows::Forms::Form
	{
	public:
		Recipient(void)
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
		~Recipient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Recipient::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(24, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 35);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseWaitCursor = true;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox1_MouseClick);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(24, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(336, 35);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"Username";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox5_MouseClick);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(24, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(336, 35);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"Email";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox4_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(24, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(336, 35);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox2_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(24, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(336, 35);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"Age";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox3_MouseClick);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox3->Location = System::Drawing::Point(24, 382);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox3->Size = System::Drawing::Size(165, 36);
			this->comboBox3->TabIndex = 21;
			this->comboBox3->Text = L"  Blood Type";
			this->comboBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::comboBox3_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(136, 261);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(396, 591);
			this->panel1->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(24, 505);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(336, 65);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Create Account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::button1_MouseClick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(24, 478);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(344, 21);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Tag = L"";
			this->checkBox1->Text = L"I Agree To The Terms Of Service And Privacy Policy";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Recipient::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(274, 438);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(86, 25);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Recipient::checkBox3_CheckedChanged);
			this->checkBox3->Click += gcnew System::EventHandler(this, &Recipient::checkBox3_CheckedChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(24, 330);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(336, 35);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"Doctor of the case";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox7_MouseClick);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(293, 390);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 25);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::checkBox2_MouseClick);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(24, 277);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(336, 35);
			this->textBox6->TabIndex = 19;
			this->textBox6->Text = L"Hospital";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::textBox6_MouseClick);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(650, 255);
			this->panel2->TabIndex = 23;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(211, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(229, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->label1->Location = System::Drawing::Point(95, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(499, 50);
			this->label1->TabIndex = 4;
			this->label1->Text = L"CREATE NEW ACCOUNT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Recipient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(650, 864);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Name = L"Recipient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recipient";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// lock "Create Account" Button when checkBox isn't checked
	if (checkBox1->Checked) {

		button1->Enabled = true;
	}
	else
		button1->Enabled = false;
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// lock "Male" checkBox if "Female" checkBox was Checked
	if (checkBox3->Checked) {

		checkBox2->Enabled = false;
	}
	else
		checkBox2->Enabled = true;
}
private: System::Void checkBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// lock "Female" checkBox if "Male" checkBox was Checked
	if (checkBox2->Checked) {

		checkBox3->Enabled = false;
	}
	else
		checkBox3->Enabled = true;


}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox1->Text == "Name")
	{
		textBox1->Text = "";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void textBox5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox5->Text == "Username")
	{
		textBox5->Text = "";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox4->Text == "Email")
	{
		textBox4->Text = "";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox2->Text == "Password")
	{
		textBox2->Text = "";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox3->Text == "Age")
	{
		textBox3->Text = "";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void textBox6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox6->Text == "Hospital")
	{
		textBox6->Text = "";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void textBox7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox7->Text == "Doctor of the case")
	{
		textBox7->Text = "";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
}
private: System::Void comboBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (comboBox3->Text == "  Blood Type")
	{
		comboBox3->Text = "";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Doctor of the case";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Hospital";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
}
private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	if (checkBox1->Checked) {
		if (checkBox2->Checked || checkBox3->Checked) {
			ofstream RecipientData;
			ofstream RecipientLogInData;
			ofstream RecipientUsernames;
			ifstream users;

			RecipientLogInData.open("RecipientLogIn.txt", ios::app);
			RecipientData.open("Recipient.txt", ios::app);
			RecipientUsernames.open("RecipientUsernames.txt", ios::app);

			vector <string> RecipientArr;
			vector <string> UsersArray;
			vector<string> usernamesArr;

			//Get input from Recipient "USER"
			String^ Name = textBox1->Text;
			String^ UserName = textBox5->Text;
			String^ Email = textBox4->Text;
			String^ PassWord = textBox2->Text;
			String^ Age = textBox3->Text;
			String^ Hospital = textBox6->Text;
			String^ DocOfCase = textBox7->Text;
			String^ BloodType = comboBox3->Text;
			String^ Gender;
			if (checkBox2->Checked) {
				Gender = "Male";
			}
			else if (checkBox3->Checked) {
				Gender = "Female";
			}
			//Convert DataType of all attributes
			string name = msclr::interop::marshal_as<string>(Name);
			string username = msclr::interop::marshal_as<string>(UserName);
			string email = msclr::interop::marshal_as<string>(Email);
			string password = msclr::interop::marshal_as<string>(PassWord);
			string age = msclr::interop::marshal_as<string>(Age);
			string hospital = msclr::interop::marshal_as<string>(Hospital);
			string doctor_of_case = msclr::interop::marshal_as<string>(DocOfCase);
			string blood_type = msclr::interop::marshal_as<string>(BloodType);
			string gender = msclr::interop::marshal_as<string>(Gender);

			//put the information entered by a user into "Array" RecipientArr
			RecipientArr.push_back(name);
			RecipientArr.push_back(username);
			RecipientArr.push_back(email);
			RecipientArr.push_back(password);
			RecipientArr.push_back(gender);
			RecipientArr.push_back(age);
			RecipientArr.push_back(hospital);
			RecipientArr.push_back(blood_type);
			RecipientArr.push_back(doctor_of_case);

			// get all username into an "array" of type string

			bool state = false;
			users.open("RecipientUsernames.txt");
			string value;
			while (getline(users, value)) {
				usernamesArr.push_back(value);
				if (username == value) {
					break;
				}
			}
			// Check if the entered username is used before or not
			if (usernamesArr.size() > 0) {
				if (usernamesArr[usernamesArr.size() - 1] != username) {
					for (int i = 0; i < 9; i++) {
						if (i != 8) {
							RecipientData << RecipientArr.at(i) << ",";
						}
						else {
							RecipientData << RecipientArr.at(i);
						}

					}
					RecipientData << "\n";
					RecipientLogInData << RecipientArr.at(1) << "," << RecipientArr.at(3) << "\n";
					RecipientUsernames << RecipientArr.at(1) << "\n";
					RecipientArr.empty();
					state = true;
				}
				else {
					MessageBox::Show("This Username Is Already Used", "Used Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
					state = false;

				}
			}
			else {
				RecipientData << "defult,defult,defult,defult,defult,defult,defult,defult,defult" << "\n";
				RecipientLogInData << "defult,defult" << "\n";
				RecipientUsernames << "defult" << "\n";
			}
			//close Recipient form after finishing Registration
			usernamesArr.clear();
			if (state == true) {
				this->Close();
			}
		}
		else {
			MessageBox::Show("Error! :You Should Choose your gender ", "Register Fail", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	else {
		MessageBox::Show("Error! :You Should Accept our Terms and conditions ", "Register Fail", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
