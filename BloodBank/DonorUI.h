#pragma once
#include<fstream>
#include<string>
#include<iostream>
#include<sstream>
#include <msclr\marshal_cppstd.h>
#include<vector>
#include "DonorFn.h"

namespace BloodBank {
	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DonorUI
	/// </summary>
	public ref class DonorUI : public System::Windows::Forms::Form
	{
	public:
		DonorUI(void)
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
		~DonorUI()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ Donation_Request_Panel;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ Delete_Account_Panel;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DonorUI::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Delete_Account_Panel = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Donation_Request_Panel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Delete_Account_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->Donation_Request_Panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(357, 833);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 25);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(315, 79);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(17, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(316, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Every blood donor is a Lifesaver";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(354, 269);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 522);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(321, 72);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Delete Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DonorUI::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(12, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(321, 72);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Donation Request ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DonorUI::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(12, 424);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(321, 72);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Edit Account";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DonorUI::button5_Click);
			// 
			// Delete_Account_Panel
			// 
			this->Delete_Account_Panel->BackColor = System::Drawing::Color::Transparent;
			this->Delete_Account_Panel->Controls->Add(this->textBox4);
			this->Delete_Account_Panel->Controls->Add(this->textBox6);
			this->Delete_Account_Panel->Controls->Add(this->pictureBox1);
			this->Delete_Account_Panel->Controls->Add(this->pictureBox4);
			this->Delete_Account_Panel->Controls->Add(this->button1);
			this->Delete_Account_Panel->Location = System::Drawing::Point(480, 82);
			this->Delete_Account_Panel->Name = L"Delete_Account_Panel";
			this->Delete_Account_Panel->Size = System::Drawing::Size(700, 530);
			this->Delete_Account_Panel->TabIndex = 33;
			this->Delete_Account_Panel->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(70, 212);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(603, 47);
			this->textBox4->TabIndex = 44;
			this->textBox4->Text = L"Password";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->Click += gcnew System::EventHandler(this, &DonorUI::textBox4_Click_1);
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DonorUI::textBox4_MouseClick);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(70, 123);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(603, 47);
			this->textBox6->TabIndex = 43;
			this->textBox6->Text = L"Username";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Click += gcnew System::EventHandler(this, &DonorUI::textBox6_Click);
			this->textBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DonorUI::textBox6_MouseClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 212);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 47);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(23, 123);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 47);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 40;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(245, 341);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(298, 73);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Delete Account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DonorUI::button1_Click);
			// 
			// Donation_Request_Panel
			// 
			this->Donation_Request_Panel->BackColor = System::Drawing::Color::Transparent;
			this->Donation_Request_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Donation_Request_Panel.BackgroundImage")));
			this->Donation_Request_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Donation_Request_Panel->Controls->Add(this->label9);
			this->Donation_Request_Panel->Controls->Add(this->label3);
			this->Donation_Request_Panel->Controls->Add(this->label2);
			this->Donation_Request_Panel->Controls->Add(this->label6);
			this->Donation_Request_Panel->Controls->Add(this->label4);
			this->Donation_Request_Panel->Controls->Add(this->button3);
			this->Donation_Request_Panel->Controls->Add(this->checkBox1);
			this->Donation_Request_Panel->Controls->Add(this->comboBox3);
			this->Donation_Request_Panel->Controls->Add(this->comboBox1);
			this->Donation_Request_Panel->Controls->Add(this->label8);
			this->Donation_Request_Panel->Controls->Add(this->textBox2);
			this->Donation_Request_Panel->Controls->Add(this->textBox1);
			this->Donation_Request_Panel->Location = System::Drawing::Point(363, 12);
			this->Donation_Request_Panel->Name = L"Donation_Request_Panel";
			this->Donation_Request_Panel->Size = System::Drawing::Size(957, 821);
			this->Donation_Request_Panel->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(744, 756);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 24);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Giving More";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(229, 756);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 24);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Happiest People ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(49, 756);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(742, 24);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Remember That The                               Are Not Those Getting More , But "
				L"Those ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(119, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(530, 40);
			this->label6->TabIndex = 32;
			this->label6->Text = L"You place your donation request here by completing the information below\r\n, so th"
				L"at the recipient can see it";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(112, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(421, 62);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Donation Request";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(123, 501);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(594, 93);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Place Your Request";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DonorUI::button3_Click_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(123, 419);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(201, 28);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"Have any Diseases";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Black;
			this->comboBox3->DisplayMember = L"1";
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"January", L"February", L"March", L"April", L"May",
					L"June", L"August", L"September", L"October", L"November", L"December"
			});
			this->comboBox3->Location = System::Drawing::Point(212, 372);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(133, 30);
			this->comboBox3->TabIndex = 25;
			this->comboBox3->Text = L"Month";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Black;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox1->Location = System::Drawing::Point(123, 372);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(83, 30);
			this->comboBox1->TabIndex = 24;
			this->comboBox1->Text = L"Day";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(109, 345);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(236, 24);
			this->label8->TabIndex = 23;
			this->label8->Text = L" Your Last Donation Date";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(123, 290);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 35);
			this->textBox2->TabIndex = 22;
			this->textBox2->Text = L"Age";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Click += gcnew System::EventHandler(this, &DonorUI::textBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(123, 220);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 35);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"Username";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DonorUI::textBox1_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(387, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(903, 740);
			this->panel1->TabIndex = 34;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(549, 687);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 21);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Blood";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label10->Location = System::Drawing::Point(398, 686);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 21);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Popcorn";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(306, 686);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(339, 22);
			this->label7->TabIndex = 31;
			this->label7->Text = L"\"\"We Share                  Why Not             \"\"";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Location = System::Drawing::Point(209, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(410, 239);
			this->panel5->TabIndex = 30;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::Black;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(46, 21);
			this->textBox12->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(336, 35);
			this->textBox12->TabIndex = 24;
			this->textBox12->Text = L"Username";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->UseWaitCursor = true;
			this->textBox12->Click += gcnew System::EventHandler(this, &DonorUI::textBox12_Click);
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &DonorUI::textBox12_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(129, 161);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(180, 63);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Login";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &DonorUI::button6_Click);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(46, 90);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(336, 35);
			this->textBox8->TabIndex = 28;
			this->textBox8->Text = L"Password";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->UseSystemPasswordChar = true;
			this->textBox8->Click += gcnew System::EventHandler(this, &DonorUI::textBox8_Click);
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &DonorUI::textBox8_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->checkBox3);
			this->panel3->Controls->Add(this->checkBox2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->comboBox4);
			this->panel3->Location = System::Drawing::Point(417, 247);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(482, 374);
			this->panel3->TabIndex = 27;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(92, 205);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(86, 25);
			this->checkBox3->TabIndex = 24;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(4, 205);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 25);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(0, 127);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 22);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Date of the latest donation";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(0, 283);
			this->button7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(478, 73);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Edit Account";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DonorUI::button7_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Hiragana;
			this->dateTimePicker1->Location = System::Drawing::Point(4, 143);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(165, 32);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::Black;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::White;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox2->Location = System::Drawing::Point(4, 9);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox2->Size = System::Drawing::Size(165, 36);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->Text = L"  Blood Type";
			this->comboBox2->Click += gcnew System::EventHandler(this, &DonorUI::comboBox2_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::Black;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::White;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Blood Pressure Disorders", L"Thyroid Disease",
					L"Diabetes", L"Cancer", L"Heart Disorders", L"Hepatitis", L"None of Them"
			});
			this->comboBox4->Location = System::Drawing::Point(0, 73);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(355, 36);
			this->comboBox4->TabIndex = 18;
			this->comboBox4->Text = L" if you suffer from any diseases";
			this->comboBox4->Click += gcnew System::EventHandler(this, &DonorUI::comboBox4_Click);
			// 
			// panel4
			// 
			this->panel4->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Location = System::Drawing::Point(4, 247);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(391, 374);
			this->panel4->TabIndex = 25;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(26, 73);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(336, 35);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"Username";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Click += gcnew System::EventHandler(this, &DonorUI::textBox5_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(26, 255);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(336, 35);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"Age";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Click += gcnew System::EventHandler(this, &DonorUI::textBox3_Click_1);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(26, 134);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(336, 35);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"Email";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->Click += gcnew System::EventHandler(this, &DonorUI::textBox7_Click);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(26, 321);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(336, 35);
			this->textBox9->TabIndex = 15;
			this->textBox9->Text = L"Any disease \?";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->Click += gcnew System::EventHandler(this, &DonorUI::textBox9_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Black;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(26, 194);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(336, 35);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"Password";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->UseSystemPasswordChar = true;
			this->textBox10->Click += gcnew System::EventHandler(this, &DonorUI::textBox10_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Black;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(26, 10);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(336, 35);
			this->textBox11->TabIndex = 0;
			this->textBox11->Text = L"Name";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->UseWaitCursor = true;
			this->textBox11->Click += gcnew System::EventHandler(this, &DonorUI::textBox11_Click);
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &DonorUI::textBox11_TextChanged);
			// 
			// DonorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1320, 833);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Donation_Request_Panel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Delete_Account_Panel);
			this->Name = L"DonorUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DonorUI";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Delete_Account_Panel->ResumeLayout(false);
			this->Delete_Account_Panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->Donation_Request_Panel->ResumeLayout(false);
			this->Donation_Request_Panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "Username")
	{
		textBox1->Text = "";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Age")
	{
		textBox2->Text = "";
	}
	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	//flage for check age 
	bool Check_Age = false;
	//convert from String^ to string 
	String^ x = textBox2->Text;
	string y = msclr::interop::marshal_as<string>(x);

	//convert from string to int (to make comparison opertaions) 

	istringstream z(y);
	int n;
	z >> n;

	//check age in the range (17:60)

	if (n < 17 || n > 60)
	{
		Check_Age = true;

	}
	else {
		Check_Age = false;
	}

	//error message if age isn't in the range

	if (Check_Age == true)
	{

		MessageBox::Show("Error! : Your Age isn't Allowed", "You Can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	bool Disease = false;
	bool Check_Date = false;
	// to get time now by library (<ctime>)

	time_t now = time(0);
	tm* ltm = localtime(&now);

	// to get month only from date now

	int month = 1 + ltm->tm_mon;

	// to convert months to number (as it begin from 0 to 11) in comboBox3

	int g = comboBox3->SelectedIndex + 1;

	//calculate the difrence between selection month and date now

	int validation = month - g;

	//check if the duration grater than 3 monthes or not (error message if not grater than 3 )

	if (validation < 3 || comboBox3->Text == "Month")
	{
		Check_Date = false;
		MessageBox::Show("Error! : The Last Donation Date Must Be More Than 3 Months", "You Can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		Check_Date = true;

	}

	//check if have any diseases make error message

	if (checkBox1->Checked)
	{
		Disease = true;
		MessageBox::Show("Error! : You Can't Donate Because Of Your Disease Or Medicine", "You Can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	//convert String^ data get from FORM to string to save it in files 

	vector<string> DonorsArray;
	String^ UserName = textBox1->Text;
	string Username = msclr::interop::marshal_as<string>(UserName);
	String^ Age = textBox2->Text;
	string age = msclr::interop::marshal_as<string>(Age);
	String^ LastDate = comboBox3->Text;
	string lastDate = msclr::interop::marshal_as<string>(LastDate);
	String^ Have_Any_Disease;

	//if user have any diseases send YES to file and if not send NO

	if (checkBox1->Checked)
	{
		Have_Any_Disease = "Yes";
	}
	else
	{
		Have_Any_Disease = "No";
	}
	// convert from String^ to string 

	string HaveAnyDisease = msclr::interop::marshal_as<string>(Have_Any_Disease);

	//push data from FORM to DonorsArray Vector

	DonorsArray.push_back(Username);
	DonorsArray.push_back(age);
	DonorsArray.push_back(lastDate);
	DonorsArray.push_back(HaveAnyDisease);
	// flag to check if Username is correct or not

	bool Username_exist = false;

	// make file and open Donor file to check Username and get some data from it

	fstream DonorData;
	DonorData.open("Donor.txt");

	//make DonorDat Vector to push data from file to it 

	vector <string> DonorDat;

	//make Don Vector to push data from DonorDat Vector to it (name , gender , bloodType)

	vector <string> Don;
	readData("Donor.txt", DonorDat);
		for (int i = 1; i < DonorDat.size(); i = i + 10) {

			if (DonorDat.at(i) == Username) {
				// i =1 (index [1]) if Username is correct

				//make flag =true if find Username in Donor File
				Username_exist = true;
				//To get Name from Donor File as it in index [0]
				Don.push_back(DonorDat.at(i - 1));
				//To get Gender from Donor File as it in index [4]
				Don.push_back(DonorDat.at(i + 3));
				//To get BloodType from Donor File as it in index [8]
				Don.push_back(DonorDat.at(i + 7));

			}
		}
	// to send Donation date
	int timeNow[4];
	timeNow[0] = ltm->tm_mday;
	timeNow[1] = 1 + ltm->tm_mon;
	timeNow[2] = timeNow[0] + 42;
	while (timeNow[2] > 30) {
		timeNow[2] -= 30;
		timeNow[3] = timeNow[1] + 1;
	}
	// make file and open new file (DonorUiDate) to save DononrRequest 
	fstream DonorUiData;
	DonorUiData.open("DonorUiData.txt", ios::app);
	if (DonorUiData.is_open()) {
		//check falg state (if true it's mean Username is correct ) to save data in the file
		if (Username_exist == true && Disease == false && Check_Age == false && Check_Date == true)
		{
			for (int i = 0; i < 4; i++) {
				//save data from FORM (Username , age ,last date , have disease) to file
				DonorUiData << DonorsArray.at(i) << ",";
			}
			//save data from Donor file (Name , Gender ,BloodType ) to file
			for (int i = 0; i < Don.size(); i++) {
				DonorUiData << Don.at(i) << ",";
			}
			// to send Donation date
			for (int i = 0; i < 4; i++) {
				DonorUiData << timeNow[i] << ",";
			}
			//end line after save all data 
			DonorUiData << endl;
			//close files 
			DonorUiData.close();
			DonorData.close();
			MessageBox::Show("success : Your Donoation Request has been successfully added", " successful operation", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		//check falg state (if false it's mean Username is wrong ) to show error and it can't save data in the file
		if (Username_exist == false)
		{
			MessageBox::Show("Error! : Wrong UserName", " You can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	// Display Donation Request "PANEL"
	Delete_Account_Panel->Hide();
	Donation_Request_Panel->Show();
	panel1->Hide();

	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Display Delete Account "PANEL"
	Donation_Request_Panel->Hide();
	Delete_Account_Panel->Show();
	panel1->Hide();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Donation_Request_Panel->Hide();
	Delete_Account_Panel->Hide();
	panel1->Show();
	panel5->Show();
	
}
private: System::Void textBox6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//handle cursor
	if (textBox6->Text == "Username") {
		textBox6->Text = "";
	}
	if (textBox4->Text == "") {
		textBox4->Text = "Password";
	}
}
private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//handle cursor
	if (textBox6->Text == "") {
		textBox6->Text = "Username";
	}
	if (textBox4->Text == "Password") {
		textBox4->Text = "";
	}
}	   

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int tmp = 0;
	bool success = false;
	bool b = false;
	String^ username = textBox6->Text;
	String^ password = textBox4->Text;
	DonorFn don1;
		
	don1.username = msclr::interop::marshal_as<string>(username);
    don1.password = msclr::interop::marshal_as<string>(password);
	
	vector<string> DonorData;
	//Read form Donor file
	readData("Donor.txt", DonorData);
	//Check if the entered username is correct or not
	for (int j = 1; j < DonorData.size(); j = j + 10) {
		if (DonorData.at(j) == don1.username) {
			if (DonorData.at(j + 2) == don1.password) {
				success = true;
				tmp = j;
				break;
			}
		}
	}
	if (success == false) {

		MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	b = success;
	if (success == true) {
		remove("Donor.txt");
		remove("DonorLogIn.txt");
		remove("DonorUsernames.txt");

		for (int j = 0; j < 10; j++) {
			DonorData.erase(DonorData.begin() + tmp - 1);
		}

		ofstream edit;
		edit.open("Donor.txt", ios::app);
		for (int i = 0; i < DonorData.size(); i++) {
			if (i % 10 != 9 || i == 0) {
				edit << DonorData.at(i) << ",";
			}
			else {
				edit << DonorData.at(i);
				edit << "\n";
			}
		}

		ofstream usern;
		usern.open("DonorUsernames.txt", ios::app);
		for (int i = 1; i < DonorData.size(); i += 10) {
			usern << DonorData.at(i) << "\n";
		}

		ofstream loginn;
		loginn.open("DonorLogIn.txt", ios::app);
		for (int i = 1; i < DonorData.size(); i += 10) {
			loginn << DonorData.at(i) + "," + DonorData.at(i + 2) << "\n";
		}


		loginn.close();
		edit.close();
		usern.close();
		DonorData.clear();
		MessageBox::Show("Success! :Your account has been Deleted", " Delete Success ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
}
	   int tmp = 0;
	   bool b = false;
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	DonorFn don1;
	bool succeed = false;
	String^ username = textBox12->Text;
	 don1.username= msclr::interop::marshal_as<string>(username);
	String^ password = textBox8->Text;
	don1.password = msclr::interop::marshal_as<string>(password);
	vector<string> DonorData;
	//Read form Donor file
	readData("Donor.txt", DonorData);
		//Check if the entered username is correct or not
		for (int j = 1; j < DonorData.size() - 1; j = j + 10) {
			if (DonorData.at(j) == don1.username) {
				if (DonorData.at(j + 2) == don1.password) {
					succeed = true;
					MessageBox::Show("Success! :You Are logged in", "Login Success", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					tmp = j;
					break;
				}
			}
		}
		if (succeed == true) {
			panel5->Hide();
		}
		if (succeed == false) {

			MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		b = succeed;

	if (succeed == true) {
		String^ Name = msclr::interop::marshal_as<String^>(DonorData[tmp - 1]);
		textBox11->Text = Name;

		String^ uName = msclr::interop::marshal_as<String^>(DonorData[tmp]);
		textBox5->Text = uName;

		String^ mail = msclr::interop::marshal_as<String^>(DonorData[tmp + 1]);
		textBox7->Text = mail;

		String^ pas = msclr::interop::marshal_as<String^>(DonorData[tmp + 2]);
		textBox10->Text = pas;

		String^ age = msclr::interop::marshal_as<String^>(DonorData[tmp + 4]);
		textBox3->Text = age;

		String^ any = msclr::interop::marshal_as<String^>(DonorData[tmp + 5]);
		textBox9->Text = any;

		String^ blood = msclr::interop::marshal_as<String^>(DonorData[tmp + 7]);
		comboBox2->Text = blood;

		String^ suff = msclr::interop::marshal_as<String^>(DonorData[tmp + 6]);
		comboBox4->Text = suff;

	}
	DonorData.clear();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	DonorFn don1;

	if (b == true) {
		if (checkBox2->Checked || checkBox3->Checked) {
			String^ username = textBox12->Text;
			don1.username = msclr::interop::marshal_as<string>(username);
			String^ password = textBox8->Text;
			don1.password = msclr::interop::marshal_as<string>(password);
			vector<string> ArrDonorData;
			//Read form Donor file
			readData("Donor.txt", ArrDonorData);
				remove("Donor.txt");
				remove("DonorLogIn.txt");
				remove("DonorUsernames.txt");

			for (int j = 0; j < 10; j++) {
				ArrDonorData.erase(ArrDonorData.begin() + tmp - 1);
			}

			String^ Name = textBox11->Text;
			String^ UserNamee = textBox5->Text;
			String^ Email = textBox7->Text;
			String^ PassWordd = textBox10->Text;
			String^ Age = textBox3->Text;
			String^ Disease = textBox9->Text;
			String^ BloodType = comboBox2->Text;
			String^ ArrDisease = comboBox4->Text;
			String^ DateOfLastDonation = dateTimePicker1->Text;
			String^ Gender;
			if (checkBox2->Checked) {
				Gender = "Male";
			}
			else if (checkBox3->Checked) {
				Gender = "Female";
			}
			
			 don1.name = msclr::interop::marshal_as<string>(Name);
			 don1.username = msclr::interop::marshal_as<string>(UserNamee);
			don1.email= msclr::interop::marshal_as<string>(Email);
			don1.password = msclr::interop::marshal_as<string>(PassWordd);
			don1.age= msclr::interop::marshal_as<string>(Age);
			don1.disease = msclr::interop::marshal_as<string>(Disease);
			don1.arr_disease= msclr::interop::marshal_as<string>(ArrDisease);
			don1.last_Donation_date= msclr::interop::marshal_as<string>(DateOfLastDonation);
			don1.blood_type = msclr::interop::marshal_as<string>(BloodType);
			don1.gender = msclr::interop::marshal_as<string>(Gender);

			ArrDonorData.push_back(don1.name);
			ArrDonorData.push_back(don1.username);
			ArrDonorData.push_back(don1.email);
			ArrDonorData.push_back(don1.password);
			ArrDonorData.push_back(don1.gender);
			ArrDonorData.push_back(don1.age);
			ArrDonorData.push_back(don1.disease);
			ArrDonorData.push_back(don1.arr_disease);
			ArrDonorData.push_back(don1.blood_type);
			ArrDonorData.push_back(don1.last_Donation_date);

			
			DonorFn don1 ;
			don1.editDonor(ArrDonorData);
			MessageBox::Show("Done! :Your account is updated", "Update Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else {
			MessageBox::Show("Error! :You Must choose Your Gender", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Error! : You must Log in first ", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void textBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "Name")
	{
		textBox11->Text = "";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "Username")
	{
		textBox5->Text = "";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "Email")
	{
		textBox7->Text = "";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "Password")
	{
		textBox10->Text = "";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "Age")
	{
		textBox3->Text = "";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void textBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "Any disease ?")
	{
		textBox9->Text = "";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void comboBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "  Blood Type")
	{
		comboBox2->Text = "";
	}
	if (comboBox4->Text == "")
	{
		comboBox4->Text = " if you suffer from any diseases";
	}
}
private: System::Void comboBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Handle Cursor
	if (textBox11->Text == "")
	{
		textBox11->Text = "Name";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Username";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Email";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Any disease ?";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
	if (comboBox4->Text == " if you suffer from any diseases")
	{
		comboBox4->Text = "";
	}
}
private: System::Void textBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "Username")
	{
		textBox12->Text = "";
	}
	if (textBox8->Text == "")
	{
		textBox8->Text = "Password";
	}
}
private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "")
	{
		textBox12->Text = " Username";
	}
	if (textBox8->Text == "Password")
	{
		textBox8->Text = "";
	}

}
};
}
