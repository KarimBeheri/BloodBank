#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include <msclr\marshal_cppstd.h>
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
	/// Summary for Donor
	/// </summary
	
	public ref class Donor : public System::Windows::Forms::Form
	{
	public:
		Donor(void)
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
		~Donor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Donor::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1032, 201);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Donor::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->label1->Location = System::Drawing::Point(301, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(582, 59);
			this->label1->TabIndex = 3;
			this->label1->Text = L"CREATE NEW ACCOUNT";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(64, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(229, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(64, 266);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(398, 384);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Donor::panel2_Paint);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(26, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(336, 35);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"Username";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::textBox5_MouseClick);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Donor::textBox5_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(26, 255);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(336, 35);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"Age";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::textBox3_MouseClick);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Donor::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(26, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(336, 35);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Email";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::textBox4_MouseClick);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Donor::textBox4_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(26, 321);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(336, 35);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"Any disease \?";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::textBox6_MouseClick);
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Donor::textBox6_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(26, 195);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(336, 35);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::textBox2_MouseClick);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Donor::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(26, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 35);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseWaitCursor = true;
			this->textBox1->Click += gcnew System::EventHandler(this, &Donor::textBox1_TextChanged);
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Donor::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->ForeColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(488, 546);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(344, 21);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Tag = L"";
			this->checkBox1->Text = L"I Agree To The Terms Of Service And Privacy Policy";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Donor::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(488, 573);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(491, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Create Account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Donor::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->checkBox3);
			this->panel3->Controls->Add(this->checkBox2);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->comboBox3);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Location = System::Drawing::Point(488, 266);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(482, 256);
			this->panel3->TabIndex = 16;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(106, 197);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(86, 25);
			this->checkBox3->TabIndex = 24;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Donor::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(18, 197);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 25);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Donor::checkBox2_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(14, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 22);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Date of the latest donation";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Hiragana;
			this->dateTimePicker1->Location = System::Drawing::Point(18, 136);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(165, 32);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::InfoText;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox3->Location = System::Drawing::Point(18, 10);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox3->Size = System::Drawing::Size(165, 36);
			this->comboBox3->TabIndex = 20;
			this->comboBox3->Text = L"  Blood Type";
			this->comboBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Donor::comboBox3_MouseClick);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Blood Pressure Disorders", L"Thyroid Disease",
					L"Diabetes", L"Cancer", L"Heart Disorders", L"Hepatitis", L"None of Them"
			});
			this->comboBox1->Location = System::Drawing::Point(18, 75);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(355, 36);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->Text = L" if you suffer from any diseases";
			this->comboBox1->Click += gcnew System::EventHandler(this, &Donor::comboBox1_Click);
			// 
			// Donor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1032, 680);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Donor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Donor";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

		   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// disable Sign up button if CheckBox wasn't checked
		if (checkBox1->Checked) {
			button1->Enabled = true;
		}
		else
			button1->Enabled = false;
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			if (checkBox2->Checked || checkBox3->Checked) {
				ofstream DonorData;
				ofstream DonorLogInData;
				ofstream DonorsUsernames;
				ifstream users;

				DonorLogInData.open("DonorLogIn.txt", ios::app);
				DonorData.open("Donor.txt", ios::app);
				DonorsUsernames.open("DonorUsernames.txt", ios::app);

				vector <string> DonorsArray;
				//vector <string> UsersArray;
				vector<string> usernameArr;

				//Get input from Donor "USER"
				String^ Name = textBox1->Text;
				String^ UserName = textBox5->Text;
				String^ Email = textBox4->Text;
				String^ PassWord = textBox2->Text;
				String^ Age = textBox3->Text;
				String^ Disease = textBox6->Text;
				String^ BloodType = comboBox3->Text;
				String^ ArrDisease = comboBox1->Text;
				String^ DateOfLastDonation = dateTimePicker1->Text;
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
				string disease = msclr::interop::marshal_as<string>(Disease);
				string arr_disease = msclr::interop::marshal_as<string>(ArrDisease);
				string date_of_last_donation = msclr::interop::marshal_as<string>(DateOfLastDonation);
				string blood_type = msclr::interop::marshal_as<string>(BloodType);
				string gender = msclr::interop::marshal_as<string>(Gender);

				//put the information entered by a user into "Array" DonorsArray
				DonorsArray.push_back(name);
				DonorsArray.push_back(username);
				DonorsArray.push_back(email);
				DonorsArray.push_back(password);
				DonorsArray.push_back(gender);
				DonorsArray.push_back(age);
				DonorsArray.push_back(disease);
				DonorsArray.push_back(arr_disease);
				DonorsArray.push_back(blood_type);
				DonorsArray.push_back(date_of_last_donation);

				// get all username into an "array" of type string
				bool state = false;
				users.open("DonorUsernames.txt");
				string value;
				while (getline(users, value)) {
					usernameArr.push_back(value);
					if (username == value) {
						break;
					}
				}
				// Check if the entered username is used before or not
				if (usernameArr.size() > 0) {
					if (usernameArr[usernameArr.size() - 1] != username) {
						for (int i = 0; i < 10; i++) {
							if (i != 9) {
								DonorData << DonorsArray.at(i) << ",";
							}
							else {
								DonorData << DonorsArray.at(i);
							}

						}
						DonorData << "\n";
						DonorLogInData << DonorsArray.at(1) << "," << DonorsArray.at(3) << "\n";
						DonorsUsernames << DonorsArray.at(1) << "\n";
						DonorsArray.empty();
						state = true;
					}

					else {
						MessageBox::Show("This Username Is Already Used", "Used Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
						state = false;

					}
				}
				else {
					DonorData << "defult,defult,defult,defult,defult,defult,defult,defult,defult,defult" << "\n";
					DonorLogInData << "defult,defult" << "\n";
					DonorsUsernames << "defult" << "\n";
				}
				//close Donor form after finishing Registration
				usernameArr.clear();
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
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	// lock "Female" checkBox if "Male" checkBox was Checked
	if (checkBox2->Checked) {

		checkBox3->Enabled = false;
	}
	else
		checkBox3->Enabled = true;
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	// lock "Female" checkBox if "Male" checkBox was Checked
	if (checkBox3->Checked) {

		checkBox2->Enabled = false;
	}
	else
		checkBox2->Enabled = true;
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
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
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
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
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
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
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
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox3->Text == "Age")
	{
		textBox3->Text = "";
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
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox6->Text == "Any disease ?")
	{
		textBox6->Text = "";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
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
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
	}
}
private: System::Void comboBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (comboBox3->Text == "  Blood Type")
	{
		comboBox3->Text = "";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Any disease ?";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
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
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from any diseases";
	}
}
private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (comboBox1->Text == " if you suffer from any diseases")
	{
		comboBox1->Text = "";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Any disease ?";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
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
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
}
};
}

ref class Donor
{
};
