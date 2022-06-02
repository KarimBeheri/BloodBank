#pragma once
#include "Registration.h"
#include<fstream>
#include<string>
#include<iostream>
#include<sstream>
#include <msclr\marshal_cppstd.h>
#include<vector>
#include "Admin.h"
#include "DonorUI.h"
#include"RecipientUi.h"
#include<Windows.h>
#include<MMsystem.h>
#include<stdio.h>
namespace BloodBank {
	using namespace std;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for Main
	/// </summary>

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;



	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(406, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(780, 673);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 525);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(780, 148);
			this->panel5->TabIndex = 7;
			this->panel5->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(56, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Did you Know";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->label5->Location = System::Drawing::Point(57, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(705, 95);
			this->label5->TabIndex = 0;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.8F));
			this->button3->Location = System::Drawing::Point(197, 440);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(323, 56);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Sign in";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::button3_MouseClick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(197, 413);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(236, 21);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"I agree to the terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox1_CheckedChanged);
			this->checkBox1->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->checkBox2);
			this->panel4->Location = System::Drawing::Point(164, 337);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(587, 57);
			this->panel4->TabIndex = 4;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(23, 29);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->textBox2->Location = System::Drawing::Point(33, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(323, 29);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &Main::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Main::textBox2_TextChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(376, 0);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 27);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Donor";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox2_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->checkBox3);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(164, 271);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(598, 60);
			this->panel3->TabIndex = 3;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(376, 33);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(102, 27);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"Recipient";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox3_CheckedChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 28);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 29);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->textBox1->Location = System::Drawing::Point(33, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(323, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L" Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &Main::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label4->Location = System::Drawing::Point(160, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(496, 40);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Sign in to your account so that we can import you settings and adjust \r\nyour expe"
				L"rience";
			this->label4->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 34.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(151, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 76);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Sign in";
			this->label3->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-403, 133);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(277, 89);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(406, 673);
			this->panel2->TabIndex = 1;
			this->panel2->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.8F));
			this->button2->Location = System::Drawing::Point(135, 553);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->label2->Location = System::Drawing::Point(141, 525);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"No Account\?";
			this->label2->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(78, 291);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Every blood donor is a Lifesaver";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 106);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(315, 91);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 106);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(413, 269);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Main::panel2_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	   void readData(string fileName, vector<string>& v) {
		   fstream File;
		   File.open(fileName);
		   if (File.is_open()) {
			   string line;
			   // Read all lines from the given Text File
			   while (getline(File, line))
			   {
				   string value;
				   istringstream   linestream(line);
				   // Split every line into values "Name,Username ...."
				   while (getline(linestream, value, ','))
				   {
					   v.push_back(value);
				   }
			   }
		   }
		   File.close();
	   }

private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == " Username")
	{
		textBox1->Text = "";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Password")
	{
		textBox2->Text = "";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = " Username";
	}
}
private: System::Void panel2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "")
	{
		textBox1->Text = " Username";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// enable and disable Sign In Button
	if (checkBox1->Checked ) {
			
		button3->Enabled = true;
	}
	else
		button3->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// To open a new form 
	
	Registration^ Register = gcnew Registration;
	Register->Show();
}
private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	bool Suc_Admin = false;

	if (checkBox1->Checked) {
		bool success = false;
		String^ username = textBox1->Text;
		string UserName = msclr::interop::marshal_as<string>(username);
		String^ password = textBox2->Text;
		string PassWord = msclr::interop::marshal_as<string>(password);

		//Read form Donor file
		if (checkBox2->Checked) {
			ifstream DonorFile;
			vector<string> DonorData;
			DonorFile.open("DonorLogIn.txt");
			if (DonorFile.is_open())
			{
				string line;
				// Read all lines from the given Text File
				while (getline(DonorFile, line))
				{
					string value;
					istringstream   linestream(line);
					// Split every line into values "Name,Username ...."
					while (getline(linestream, value, ','))
					{
						DonorData.push_back(value);
					}
				}
				//Check if the entered username is correct or not
				for (int i = 0; i < DonorData.size() - 1; i++) {
					if (DonorData.at(i) == UserName) {
						if (DonorData.at(i + 1) == PassWord) {

							success = true;
							DonorUI^ DonorForm = gcnew DonorUI();
							DonorForm->Show();
							this->Hide();
						}
					}
				}
				if (success == true) {
					/*SoundPlayer^ sound = gcnew SoundPlayer();
					sound->SoundLocation = "C:\\Users\\karim\\Desktop\\Last Last\\BloodBank\\BackGround_Music.wav";
					sound->Load();
					sound->Play();*/
				}
				if (success == false) {

					MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				DonorFile.close();
			}

		}
		//read from Recipient file
		else if (checkBox3->Checked) {

			ifstream RecipientFile;
			vector<string> RecipientData;
			RecipientFile.open("RecipientLogIn.txt");
			if (RecipientFile.is_open())
			{
				string line;
				// Read all lines from the given Text File
				while (getline(RecipientFile, line))
				{
					string value;
					istringstream   linestream(line);
					// Split every line into values "Name,Username ...."
					while (getline(linestream, value, ','))
					{
						RecipientData.push_back(value);
					}
				}
				//Check if the entered username is correct or not
				for (int i = 0; i < RecipientData.size() - 1; i++) {
					if (RecipientData.at(i) == UserName) {
						if (RecipientData.at(i + 1) == PassWord) {
							success = true;
							RecipientUi^ Form = gcnew RecipientUi();
							Form->Show();
							this->Hide();
						}
					}
				}
				if (success == true) {
					/*SoundPlayer^ sound = gcnew SoundPlayer();
					sound->SoundLocation = "C:\\Users\\karim\\Desktop\\Last Last\\BloodBank\\BackGround_Music.wav";
					sound->Load();
					sound->Play();*/
				}
				if (success == false) {

					MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			RecipientFile.close();
		}
		// Admin Login
		else {
			string ADMIN = "admin";
			string pass = "admin";
			if (UserName == ADMIN && PassWord == pass) {
				/*SoundPlayer^ sound = gcnew SoundPlayer();
				sound->SoundLocation = "C:\\Users\\karim\\Desktop\\Last Last\\BloodBank\\BackGround_Music.wav";
				sound->Load();
				sound->Play();*/
				Admin^ AdminForm = gcnew Admin;
				AdminForm->Show();
				this->Hide();


			}



			else
				MessageBox::Show("Error! :You Should Choose your type ", "Sign In Fail", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}
	else {
		MessageBox::Show("Error! :You Should Accept our Terms and conditions ", "Sign In Fail", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//enable and disable Recipient checkBox 
		if (checkBox2->Checked) {

			checkBox3->Enabled = false;
		}
		else
			checkBox3->Enabled = true;

	}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//enable and disable Recipient checkBox 
		if (checkBox3->Checked) {

			checkBox2->Enabled = false;
		}
		else
			checkBox2->Enabled = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
	}