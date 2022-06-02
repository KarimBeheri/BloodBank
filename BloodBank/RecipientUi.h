#pragma once
#include <fstream>
#include<sstream>
#include<stack>
#include<iostream>
#include<string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <queue>
#include"RecipientFn.h"
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
	/// Summary for RecipientUi
	/// </summary>
	public ref class RecipientUi : public System::Windows::Forms::Form
	{
	public:
		RecipientUi(void)
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
		~RecipientUi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ available;
	private: System::Windows::Forms::DataGridView^ dataGrid;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ Quantity;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ ABm_Button;
	private: System::Windows::Forms::Button^ Bm_Button;
	private: System::Windows::Forms::Button^ Om_Button;
	private: System::Windows::Forms::Button^ Am_Button;
	private: System::Windows::Forms::Button^ ABp_Button;
	private: System::Windows::Forms::Button^ Bp_Button;
	private: System::Windows::Forms::Button^ Op_Button;
	private: System::Windows::Forms::Button^ Ap_Button;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ button2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RecipientUi::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Quantity = (gcnew System::Windows::Forms::Label());
			this->available = (gcnew System::Windows::Forms::Label());
			this->ABm_Button = (gcnew System::Windows::Forms::Button());
			this->Bm_Button = (gcnew System::Windows::Forms::Button());
			this->Om_Button = (gcnew System::Windows::Forms::Button());
			this->Am_Button = (gcnew System::Windows::Forms::Button());
			this->ABp_Button = (gcnew System::Windows::Forms::Button());
			this->Bp_Button = (gcnew System::Windows::Forms::Button());
			this->Op_Button = (gcnew System::Windows::Forms::Button());
			this->Ap_Button = (gcnew System::Windows::Forms::Button());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(327, 675);
			this->panel1->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 214);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(300, 63);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Request Blood Type";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &RecipientUi::button7_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 531);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(300, 63);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Delete Account";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &RecipientUi::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 450);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(300, 63);
			this->button5->TabIndex = 34;
			this->button5->Text = L"Update Account";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RecipientUi::button5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(9, 127);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(315, 74);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 33;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, -29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(324, 245);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 32;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 63);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Display Blood Data";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RecipientUi::button2_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(12, 292);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(300, 63);
			this->button13->TabIndex = 0;
			this->button13->Text = L"Search Blood Type";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &RecipientUi::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->Quantity);
			this->panel3->Controls->Add(this->available);
			this->panel3->Controls->Add(this->ABm_Button);
			this->panel3->Controls->Add(this->Bm_Button);
			this->panel3->Controls->Add(this->Om_Button);
			this->panel3->Controls->Add(this->Am_Button);
			this->panel3->Controls->Add(this->ABp_Button);
			this->panel3->Controls->Add(this->Bp_Button);
			this->panel3->Controls->Add(this->Op_Button);
			this->panel3->Controls->Add(this->Ap_Button);
			this->panel3->Location = System::Drawing::Point(354, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(957, 653);
			this->panel3->TabIndex = 3;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RecipientUi::panel3_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(472, 616);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(273, 28);
			this->label6->TabIndex = 12;
			this->label6->Text = L", Blood donation does\"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(214, 616);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 28);
			this->label5->TabIndex = 11;
			this->label5->Text = L"\"Excuses never save a life";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(372, 85);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Number of donors :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Quantity
			// 
			this->Quantity->BackColor = System::Drawing::Color::Transparent;
			this->Quantity->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quantity->ForeColor = System::Drawing::Color::White;
			this->Quantity->Location = System::Drawing::Point(395, 25);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(74, 72);
			this->Quantity->TabIndex = 9;
			this->Quantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Quantity->UseMnemonic = false;
			// 
			// available
			// 
			this->available->AutoSize = true;
			this->available->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->available->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->available->Location = System::Drawing::Point(596, 12);
			this->available->MaximumSize = System::Drawing::Size(300, 85);
			this->available->Name = L"available";
			this->available->Padding = System::Windows::Forms::Padding(20);
			this->available->Size = System::Drawing::Size(149, 85);
			this->available->TabIndex = 8;
			this->available->Text = L"Status";
			this->available->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->available->UseCompatibleTextRendering = true;
			this->available->Click += gcnew System::EventHandler(this, &RecipientUi::available_Click);
			// 
			// ABm_Button
			// 
			this->ABm_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->ABm_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ABm_Button->Location = System::Drawing::Point(731, 333);
			this->ABm_Button->Name = L"ABm_Button";
			this->ABm_Button->Size = System::Drawing::Size(205, 140);
			this->ABm_Button->TabIndex = 7;
			this->ABm_Button->Text = L"AB-";
			this->ABm_Button->UseVisualStyleBackColor = false;
			this->ABm_Button->Click += gcnew System::EventHandler(this, &RecipientUi::ABm_Button_Click);
			// 
			// Bm_Button
			// 
			this->Bm_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Bm_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Bm_Button->Location = System::Drawing::Point(508, 333);
			this->Bm_Button->Name = L"Bm_Button";
			this->Bm_Button->Size = System::Drawing::Size(205, 140);
			this->Bm_Button->TabIndex = 6;
			this->Bm_Button->Text = L"B-";
			this->Bm_Button->UseVisualStyleBackColor = false;
			this->Bm_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Bm_Button_Click);
			// 
			// Om_Button
			// 
			this->Om_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Om_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Om_Button->Location = System::Drawing::Point(274, 333);
			this->Om_Button->Name = L"Om_Button";
			this->Om_Button->Size = System::Drawing::Size(205, 140);
			this->Om_Button->TabIndex = 5;
			this->Om_Button->Text = L"O-";
			this->Om_Button->UseVisualStyleBackColor = false;
			this->Om_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Om_Button_Click);
			// 
			// Am_Button
			// 
			this->Am_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Am_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Am_Button->Location = System::Drawing::Point(45, 333);
			this->Am_Button->Name = L"Am_Button";
			this->Am_Button->Size = System::Drawing::Size(205, 140);
			this->Am_Button->TabIndex = 4;
			this->Am_Button->Text = L"A-";
			this->Am_Button->UseVisualStyleBackColor = false;
			this->Am_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Am_Button_Click);
			// 
			// ABp_Button
			// 
			this->ABp_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->ABp_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ABp_Button->Location = System::Drawing::Point(736, 135);
			this->ABp_Button->Name = L"ABp_Button";
			this->ABp_Button->Size = System::Drawing::Size(205, 140);
			this->ABp_Button->TabIndex = 3;
			this->ABp_Button->Text = L"AB+";
			this->ABp_Button->UseVisualStyleBackColor = false;
			this->ABp_Button->Click += gcnew System::EventHandler(this, &RecipientUi::ABp_Button_Click);
			// 
			// Bp_Button
			// 
			this->Bp_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Bp_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Bp_Button->Location = System::Drawing::Point(508, 135);
			this->Bp_Button->Name = L"Bp_Button";
			this->Bp_Button->Size = System::Drawing::Size(205, 140);
			this->Bp_Button->TabIndex = 2;
			this->Bp_Button->Text = L"B+";
			this->Bp_Button->UseVisualStyleBackColor = false;
			this->Bp_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Bp_Button_Click);
			// 
			// Op_Button
			// 
			this->Op_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Op_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Op_Button->Location = System::Drawing::Point(274, 135);
			this->Op_Button->Name = L"Op_Button";
			this->Op_Button->Size = System::Drawing::Size(205, 140);
			this->Op_Button->TabIndex = 1;
			this->Op_Button->Text = L"O+";
			this->Op_Button->UseVisualStyleBackColor = false;
			this->Op_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Op_Button_Click);
			// 
			// Ap_Button
			// 
			this->Ap_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Ap_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Ap_Button->Location = System::Drawing::Point(50, 135);
			this->Ap_Button->Name = L"Ap_Button";
			this->Ap_Button->Size = System::Drawing::Size(205, 140);
			this->Ap_Button->TabIndex = 0;
			this->Ap_Button->Text = L"A+";
			this->Ap_Button->UseVisualStyleBackColor = false;
			this->Ap_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Ap_Button_Click);
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->AllowUserToOrderColumns = true;
			this->dataGrid->AllowUserToResizeColumns = false;
			this->dataGrid->AllowUserToResizeRows = false;
			this->dataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(112)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Traditional Arabic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::MediumOrchid;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGrid->ColumnHeadersHeight = 45;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column3,
					this->Column4
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(245)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGrid->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGrid->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGrid->Location = System::Drawing::Point(21, 22);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			this->dataGrid->RowHeadersWidth = 51;
			this->dataGrid->RowTemplate->Height = 26;
			this->dataGrid->Size = System::Drawing::Size(957, 572);
			this->dataGrid->TabIndex = 0;
			this->dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RecipientUi::dataGrid_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Blood Type";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Rec Date";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Exp Date";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->dataGrid);
			this->panel2->Location = System::Drawing::Point(333, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1004, 619);
			this->panel2->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Location = System::Drawing::Point(315, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1040, 615);
			this->panel4->TabIndex = 5;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->checkBox3);
			this->panel5->Controls->Add(this->textBox7);
			this->panel5->Controls->Add(this->checkBox2);
			this->panel5->Controls->Add(this->comboBox3);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Location = System::Drawing::Point(295, 28);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(562, 591);
			this->panel5->TabIndex = 28;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(24, 454);
			this->button3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(495, 112);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Create Account";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RecipientUi::button3_Click);
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &RecipientUi::button3_MouseClick);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(356, 410);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(86, 25);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(24, 330);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(495, 35);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"Doctor of the case";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(356, 382);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 25);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &RecipientUi::checkBox2_CheckedChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Black;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox3->Location = System::Drawing::Point(24, 382);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox3->Size = System::Drawing::Size(324, 36);
			this->comboBox3->TabIndex = 21;
			this->comboBox3->Text = L"  Blood Type";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(24, 277);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(495, 35);
			this->textBox6->TabIndex = 19;
			this->textBox6->Text = L"Hospital";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(24, 25);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(495, 35);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseWaitCursor = true;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(24, 73);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(495, 35);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"Username";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(24, 226);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(495, 35);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"Age";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(24, 126);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(495, 35);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"Email";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(24, 176);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(495, 35);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox9);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->textBox8);
			this->panel6->Location = System::Drawing::Point(35, 28);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(579, 492);
			this->panel6->TabIndex = 32;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(21, 160);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(204, 35);
			this->textBox9->TabIndex = 29;
			this->textBox9->Text = L"Username";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->UseWaitCursor = true;
			this->textBox9->Click += gcnew System::EventHandler(this, &RecipientUi::textBox9_Click);
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &RecipientUi::textBox9_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(49, 272);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 48);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RecipientUi::button1_Click_2);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(21, 214);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(204, 35);
			this->textBox8->TabIndex = 30;
			this->textBox8->Text = L"Password";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->UseSystemPasswordChar = true;
			this->textBox8->Click += gcnew System::EventHandler(this, &RecipientUi::textBox8_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->textBox10);
			this->panel7->Controls->Add(this->textBox11);
			this->panel7->Location = System::Drawing::Point(399, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(938, 631);
			this->panel7->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(230, 345);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(380, 108);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Delete Account";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &RecipientUi::button6_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(127, 241);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(573, 44);
			this->textBox10->TabIndex = 31;
			this->textBox10->Text = L"Password";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->UseSystemPasswordChar = true;
			this->textBox10->Click += gcnew System::EventHandler(this, &RecipientUi::textBox10_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(127, 183);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(573, 44);
			this->textBox11->TabIndex = 30;
			this->textBox11->Text = L"Username";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->UseWaitCursor = true;
			this->textBox11->Click += gcnew System::EventHandler(this, &RecipientUi::textBox11_Click);
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &RecipientUi::textBox11_TextChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->comboBox2);
			this->panel8->Controls->Add(this->button8);
			this->panel8->Controls->Add(this->label3);
			this->panel8->Controls->Add(this->comboBox1);
			this->panel8->Controls->Add(this->textBox12);
			this->panel8->Controls->Add(this->label2);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Location = System::Drawing::Point(350, 12);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(961, 654);
			this->panel8->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::Black;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::White;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox2->Location = System::Drawing::Point(90, 253);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox2->Size = System::Drawing::Size(234, 36);
			this->comboBox2->TabIndex = 38;
			this->comboBox2->Text = L"Blood Type";
			this->comboBox2->Click += gcnew System::EventHandler(this, &RecipientUi::comboBox2_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(90, 365);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(433, 80);
			this->button8->TabIndex = 37;
			this->button8->Text = L"Request Blood Type";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &RecipientUi::button8_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(5, 478);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 34);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Did You Know";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Black;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox1->Location = System::Drawing::Point(90, 305);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(234, 36);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"Quantity";
			this->comboBox1->Click += gcnew System::EventHandler(this, &RecipientUi::comboBox1_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::Black;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(90, 204);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(433, 35);
			this->textBox12->TabIndex = 1;
			this->textBox12->Text = L"Username";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->Click += gcnew System::EventHandler(this, &RecipientUi::textBox12_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(67, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(286, 45);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Apply Request";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(7, 521);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(938, 110);
			this->label4->TabIndex = 31;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// RecipientUi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1349, 675);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Name = L"RecipientUi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recipient UI";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->Load += gcnew System::EventHandler(this, &RecipientUi::RecipientUi_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void dataGrid_Shown(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void available_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	   void searchButton(string bloodType) {
		   fstream RecipientData;
		   stack <string>Blood_Donations;
		   //vector <string> Display_Blood_Type;
		   RecipientData.open("DonorUiData.txt");
		   if (RecipientData.is_open()) {
			   string line;
			   // Read all lines from the given Text File
			   while (getline(RecipientData, line))
			   {
				   string value;
				   istringstream   linestream(line);
				   // Split every line into values "Name,Username ...."
				   while (getline(linestream, value, ','))
				   {
					   Blood_Donations.push(value);
				   }
			   }
			   int q = 0;
			   string Poped_Value;
			   bool exist = 0;
			   for (int i = Blood_Donations.size(); i > 0; i--) {
				   Poped_Value = Blood_Donations.top();
				   if (Poped_Value == bloodType) {
					   q++;
					   available->Text = "Available";
					   exist = 1;
				   }
				   Blood_Donations.pop();
			   }
			   string b = to_string(q);
			   String^ quantity;
			   quantity = gcnew String(b.c_str());
			   Quantity->Text = quantity;
			   if (!exist) {
				   available->Text = "Not Available";
			   }
		   }
		   RecipientData.close();
	   }
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
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Show();
	panel3->Hide();
	panel2->Hide();
	panel7 -> Hide();
	panel8 -> Hide();
	panel6->Show();
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "Username") {
		textBox11->Text = "";
	}
	if (textBox10->Text == "") {
		textBox10->Text = "Password";
	}
}
private: System::Void textBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "") {
		textBox11->Text = "Username";
	}
	if (textBox10->Text == "Password") {
		textBox10->Text = "";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {	
		dataGrid->Hide();
		panel2->Hide();
		panel3->Show(); 
		panel4->Hide();
		panel7->Hide();
		panel8->Hide();
	}
private: System::Void textBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9->Text == "Username") {
		textBox9->Text = "";
	}
	if (textBox8->Text == "") {
		textBox8->Text = "Password";
	}
}
private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8->Text == "Password") {
		textBox8->Text = "";
	}
	if (textBox9->Text == "") {
		textBox9->Text = "Username";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	panel2->Show();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	dataGrid->Show();
	panel4->Hide();
	dataGrid->Rows->Clear();
	vector<string>getData;
	//vector <string> Display_Blood_Type;
	readData("DonorUiData.txt", getData);
		for (int i = 6; i < getData.size(); i = i + 11) {
			string Blood_Type = getData.at(i);
			string Date1 = getData.at(i + 1);
			string Date2 = getData.at(i + 2);
			string Date3 = getData.at(i + 3);
			string Date4 = getData.at(i + 4);
			String^ blood_type = msclr::interop::marshal_as<String^>(Blood_Type);
			String^ date1 = msclr::interop::marshal_as<String^>(Date1);
			String^ date2 = msclr::interop::marshal_as<String^>(Date2);
			String^ date3 = msclr::interop::marshal_as<String^>(Date3);
			String^ date4 = msclr::interop::marshal_as<String^>(Date4);
			dataGrid->Rows->Add(blood_type, date1 + " - " + date2, date3 + " - " + date4);
		}
}
private: System::Void Ap_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("A+");
}
private: System::Void Op_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("O+");
}
private: System::Void Bp_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("B+");
}
private: System::Void ABp_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("AB+");
}
private: System::Void Am_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("A-");
}
private: System::Void Om_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("O-");
}
private: System::Void Bm_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("B-");
}
private: System::Void ABm_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	searchButton("AB-");
}
	   int counter = 0;
	   bool b = false;
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {	
	RecipientFn r;
	bool passing = false;
	String^ username = textBox9->Text;
	r.username = msclr::interop::marshal_as<string>(username);
	String^ password = textBox8->Text;
	r.password = msclr::interop::marshal_as<string>(password);
	vector<string> RecipientData;
	readData("Recipient.txt", RecipientData);
		//Check if the entered username is correct or not
		for (int j = 1; j < RecipientData.size(); j++) {
			if (RecipientData.at(j) == r.username) {
				if (RecipientData.at(j + 2) == r.password) {
					passing = true;
					MessageBox::Show("Success! :You Are logged in", "Login Success", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					counter = j;
					break;
				}
			}
		}
		if (passing == true) {
			panel6->Hide();

		}
		if (passing == false) {

			MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		b = passing;

	if (passing == true) {
		String^ Name = msclr::interop::marshal_as<String^>(RecipientData[counter - 1]);
		textBox1->Text = Name;
		String^ uName = msclr::interop::marshal_as<String^>(RecipientData[counter]);
		textBox5->Text = uName;
		String^ em = msclr::interop::marshal_as<String^>(RecipientData[counter + 1]);
		textBox4->Text = em;
		String^ pas = msclr::interop::marshal_as<String^>(RecipientData[counter + 2]);
		textBox2->Text = pas;
		String^ age = msclr::interop::marshal_as<String^>(RecipientData[counter + 4]);
		textBox3->Text = age;
		String^ blood = msclr::interop::marshal_as<String^>(RecipientData[counter + 6]);
		comboBox3->Text = blood;
		String^ hos = msclr::interop::marshal_as<String^>(RecipientData[counter + 5]);
		textBox6->Text = hos;
		String^ doc = msclr::interop::marshal_as<String^>(RecipientData[counter + 7]);
		textBox7->Text = doc;
		RecipientData.clear();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	RecipientFn r;
	if (b == true) {
		if (checkBox2->Checked || checkBox3->Checked) {
			String^ username = textBox9->Text;
			r.username = msclr::interop::marshal_as<string>(username);
			String^ password = textBox8->Text;
			r.password = msclr::interop::marshal_as<string>(password);
			vector<string> ArrRecipientData;
			//Read form Donor file
			readData("Recipient.txt", ArrRecipientData);
				remove("Recipient.txt");
				remove("RecipientLogIn.txt");
				remove("RecipientUsernames.txt");


			for (int j = 0; j < 9; j++) {
				ArrRecipientData.erase(ArrRecipientData.begin() + counter - 1);
			}

			String^ Name = textBox1->Text;
			String^ UserNamee = textBox5->Text;
			String^ Email = textBox4->Text;
			String^ PassWordd = textBox2->Text;
			String^ Age = textBox3->Text;
			String^ Hospital = textBox6->Text;
			String^ Doctor = textBox7->Text;
			String^ BloodType = comboBox3->Text;
			String^ Gender;
			if (checkBox2->Checked) {
				Gender = "Male";
			}
			else if (checkBox3->Checked) {
				Gender = "Female";
			}


			r.name = msclr::interop::marshal_as<string>(Name);
			r.username = msclr::interop::marshal_as<string>(UserNamee);
			r.email = msclr::interop::marshal_as<string>(Email);
			r.password = msclr::interop::marshal_as<string>(PassWordd);
			r.age = msclr::interop::marshal_as<string>(Age);
			r.hospital = msclr::interop::marshal_as<string>(Hospital);
			r.doc_of_case = msclr::interop::marshal_as<string>(Doctor);
			r.blood_type = msclr::interop::marshal_as<string>(BloodType);
			r.gender = msclr::interop::marshal_as<string>(Gender);

			ArrRecipientData.push_back(r.name);
			ArrRecipientData.push_back(r.username);
			ArrRecipientData.push_back(r.email);
			ArrRecipientData.push_back(r.password);
			ArrRecipientData.push_back(r.gender);
			ArrRecipientData.push_back(r.age);
			ArrRecipientData.push_back(r.hospital);
			ArrRecipientData.push_back(r.blood_type);
			ArrRecipientData.push_back(r.doc_of_case);

			ofstream edit;
			edit.open("Recipient.txt", ios::app);
			for (int i = 0; i < ArrRecipientData.size(); i++) {
				if (i % 9 != 8 || i == 0) {
					edit << ArrRecipientData.at(i) << ",";
				}
				else {
					edit << ArrRecipientData.at(i);
					edit << "\n";
				}
			}

			ofstream usern;
			usern.open("RecipientUsernames.txt", ios::app);
			for (int i = 1; i < ArrRecipientData.size(); i += 9) {
				usern << ArrRecipientData.at(i) << "\n";
			}

			ofstream loginn;
			loginn.open("RecipientLogIn.txt", ios::app);
			for (int i = 1; i < ArrRecipientData.size(); i += 9) {
				loginn << ArrRecipientData.at(i) + "," + ArrRecipientData.at(i + 2) << "\n";
			}
			loginn.close();
			edit.close();
			usern.close();
			ArrRecipientData.clear();
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
       int counter1 = 0;
	   bool Login_Success = false;
	   bool a = false;
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	RecipientFn r;
	String^ username = textBox11->Text;
	r.username = msclr::interop::marshal_as<string>(username);
	String^ password = textBox10->Text;
	r.password = msclr::interop::marshal_as<string>(password);
	vector<string> RecipientData;
	readData("Recipient.txt", RecipientData);
		//Check if the entered username is correct or not
		for (int j = 1; j < RecipientData.size(); j++) {
			if (RecipientData.at(j) == r.username) {
				if (RecipientData.at(j + 2) == r.password) {
					Login_Success = true;
					counter1 = j;
					break;
				}
			}
		}
		if (Login_Success == false) {

			MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		a = Login_Success;
	if (Login_Success == true) {
		remove("Recipient.txt");
		remove("RecipientLogIn.txt");
		remove("RecipientUsernames.txt");
		for (int j = 0; j < 9; j++) {
			RecipientData.erase(RecipientData.begin() + counter1 - 1);
		}
		ofstream edit;
		edit.open("Recipient.txt", ios::app);
		for (int i = 0; i < RecipientData.size(); i++) {
			if (i % 9 != 8 || i == 0) {
				edit << RecipientData.at(i) << ",";
			}
			else {
				edit << RecipientData.at(i);
				edit << "\n";
			}
		}
		ofstream usern;
		usern.open("RecipientUsernames.txt", ios::app);
		for (int i = 1; i < RecipientData.size(); i += 9) {
			usern << RecipientData.at(i) << "\n";
		}
		ofstream loginn;
		loginn.open("RecipientLogIn.txt", ios::app);
		for (int i = 1; i < RecipientData.size(); i += 9) {
			loginn << RecipientData.at(i) + "," + RecipientData.at(i + 2) << "\n";
		}
		loginn.close();
		edit.close();
		usern.close();
		RecipientData.clear();
		MessageBox::Show("Success! :Your account has been Deleted", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {	
	panel7->Show();
	panel8->Hide();
	panel3->Hide();
	panel2->Hide();
	panel4->Hide();
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel7->Hide();
	panel8->Show();
	panel3->Hide();
	panel2->Hide();
	panel6->Hide();
	panel4->Hide();
}
private: System::Void textBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "Username") {
		textBox12->Text = "";
	}
	if (comboBox2->Text == "") {
		comboBox2->Text = "Blood Type";
	}
	if (comboBox1->Text == "") {
		comboBox1->Text = "Quantity";
	}
}
private: System::Void comboBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "") {
		textBox12->Text = "Username";
	}
	if (comboBox2->Text == "Blood Type") {
		comboBox2->Text = "";
	}
	if (comboBox1->Text == "") {
		comboBox1->Text = "Quantity";
	}
}
private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "") {
		textBox12->Text = "Username";
	}
	if (comboBox2->Text == "") {
		comboBox2->Text = "Blood Type";
	}
	if (comboBox1->Text == "Quantity") {
		comboBox1->Text = "";
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	RecipientFn r;
	int tmp = 0;
	bool success = false;
	bool b = false;

	String^ username = textBox12->Text;
	String^ blood_type = comboBox2->Text;
	String^ quantity = comboBox1->Text;

	r.username = msclr::interop::marshal_as<string>(username);
	r.blood_type = msclr::interop::marshal_as<string>(blood_type);
	string Quantity = msclr::interop::marshal_as<string>(quantity);

	queue<string> Recipient_Req_Data;



	bool Username_exist = false;

	fstream RecipientData;
	RecipientData.open("Recipient.txt");
	vector <string> RecipData;

	stack <string> Don;
	if (RecipientData.is_open()) {
		string line;

		// Read all lines from the given Text File

		while (getline(RecipientData, line))
		{
			string value;
			istringstream   linestream(line);

			// Split every line into values "Name,Username ...."

			while (getline(linestream, value, ','))
			{

				RecipData.push_back(value);
			}
		}
		fstream DeleteDonation;
		vector <string> DeleteCompleteDonation;
		readData("DonorUiData.txt", DeleteCompleteDonation);
		
		for (int j = 0; j < DeleteCompleteDonation.size(); j += 11) {
			if (DeleteCompleteDonation.at(j + 6) == r.blood_type) {
				success = true;
				tmp = j;
				break;
			}
		}
		DeleteDonation.close();
		if (success == true) {
			remove("DonorUiData.txt");
			for (int j = 0; j < 11; j++) {
				DeleteCompleteDonation.erase(DeleteCompleteDonation.begin() + tmp);
			}
			

			ofstream edit;
			edit.open("DonorUiData.txt", ios::app);
			for (int i = 0; i < DeleteCompleteDonation.size(); i++) {
				if (i % 11 != 10 || i == 0) {
					edit << DeleteCompleteDonation.at(i) << ",";
				}
				else {
					edit << DeleteCompleteDonation.at(i);
					edit << "\n";
				}
			}
			edit.close();
			DeleteCompleteDonation.clear();
		}


		for (int i = 1; i < RecipData.size(); i = i + 9) {

			if (RecipData.at(i) == r.username) {

				Username_exist = true;
				Don.push(RecipData.at(i + 5));
				break;
			}

		}
	}
	fstream BLOOD_TYPES;
	BLOOD_TYPES.open("DonorUiData.txt");
	vector <string> Blood_Types;
	if (BLOOD_TYPES.is_open()) {
		string line;

		// Read all lines from the given Text File
		while (getline(BLOOD_TYPES, line))
		{
			string value;
			istringstream   linestream(line);

			// Split every line into values "Name,Username ...."
			while (getline(linestream, value, ','))
			{
				//string BloodTypes[8] = { "A+", "A-", "O+", "B+", "AB+", "O-", "B-", "AB-" };
				//for (int i = 0; i < 8; i++) {
				//	if (value == BloodTypes[i]) {
						Blood_Types.push_back(value);
					//}
				//}
			}
		}
	}
	bool found = false;
	String^ RequestedBloodType = comboBox2->Text;
	string Requested_BloodType = msclr::interop::marshal_as<string>(RequestedBloodType);
	for (int i = 0; i < Blood_Types.size(); i++) {
		if (Requested_BloodType == Blood_Types[i]) {
			found = true;
		}
		
	}
	if (Username_exist == true)
	{
		Recipient_Req_Data.push(r.username);
		Recipient_Req_Data.push(r.blood_type);
		Recipient_Req_Data.push(Quantity);
	}
	RecipientData.close();
	fstream RecipientRequests;
	RecipientRequests.open("RecipientRequests.txt", ios::app);
	if (RecipientRequests.is_open()) {
		if (Username_exist == true && found == true) {

			RecipientRequests << Recipient_Req_Data.front() << ",";
			Recipient_Req_Data.pop();
			RecipientRequests << Recipient_Req_Data.front() << ",";
			RecipientRequests << Recipient_Req_Data.back() << ",";
			RecipientRequests << Don.top() << "," << "\n";
			MessageBox::Show("Success! : Your Request is successfully Added", "Request Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
	}
	if (Username_exist == false) {
		MessageBox::Show("Error! : Wrong UserName", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	if (found == false) {
		MessageBox::Show("Error! : Sorry This Blood Type Is Not Available", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

	RecipientRequests.close();

}
private: System::Void RecipientUi_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
