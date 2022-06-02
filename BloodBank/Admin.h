//#include"Main.h"
#include <vector>
//#include "Donor.h"
#include <stack>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include<Windows.h>
#include<MMsystem.h>
#include<stdio.h>
namespace BloodBank {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;






















	private: System::Windows::Forms::Button^ button3;










	private: System::Windows::Forms::Panel^ DashBoard;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel8;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel3;















private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TextBox^ textBox8;












private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;


























private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Panel^ panel11;









private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button24;

private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Button^ button26;



















































































































































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DashBoard = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->DashBoard->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel14->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(335, 1055);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(0, 222);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(343, 831);
			this->panel2->TabIndex = 3;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button21->FlatAppearance->BorderSize = 2;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(4, 279);
			this->button21->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(328, 71);
			this->button21->TabIndex = 5;
			this->button21->Text = L"Control Donations";
			this->button21->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Admin::button21_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(4, 193);
			this->button3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 71);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Control Recipients";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
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
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(4, 110);
			this->button2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 71);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Control Donors";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(4, 25);
			this->button1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 71);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Dashboard";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(86, 196);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Administrator";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 58);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(331, 148);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// DashBoard
			// 
			this->DashBoard->BackColor = System::Drawing::Color::Transparent;
			this->DashBoard->Controls->Add(this->panel5);
			this->DashBoard->Controls->Add(this->panel7);
			this->DashBoard->Controls->Add(this->label2);
			this->DashBoard->Controls->Add(this->panel6);
			this->DashBoard->Controls->Add(this->panel4);
			this->DashBoard->Location = System::Drawing::Point(338, -31);
			this->DashBoard->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->DashBoard->Name = L"DashBoard";
			this->DashBoard->Size = System::Drawing::Size(1191, 1037);
			this->DashBoard->TabIndex = 5;
			this->DashBoard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::panel3_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Location = System::Drawing::Point(219, 636);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(375, 214);
			this->panel5->TabIndex = 4;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(251, 27);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(108, 120);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(18, 103);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Recipients";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gold;
			this->label7->Location = System::Drawing::Point(18, 67);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 30);
			this->label7->TabIndex = 1;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(18, 26);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 28);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Total Recipient";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Location = System::Drawing::Point(600, 225);
			this->panel7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(533, 625);
			this->panel7->TabIndex = 4;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(140, 65);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(238, 205);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(65, 448);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(168, 36);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Donations";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Gold;
			this->label13->Location = System::Drawing::Point(76, 387);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 34);
			this->label13->TabIndex = 1;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(65, 326);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(407, 36);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Total Completed Dontions";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(221, 173);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Dashboard";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(219, 429);
			this->panel6->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(375, 196);
			this->panel6->TabIndex = 5;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(251, 26);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(108, 122);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(18, 108);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 28);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Donors";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Gold;
			this->label10->Location = System::Drawing::Point(17, 62);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 34);
			this->label10->TabIndex = 1;
			this->label10->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(18, 26);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(160, 28);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Total Donors";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(219, 225);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(375, 191);
			this->panel4->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(251, 27);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(108, 118);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(18, 100);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 28);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Users";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(15, 65);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 34);
			this->label4->TabIndex = 1;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 27);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 28);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Total Users";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->button8);
			this->panel8->Controls->Add(this->button7);
			this->panel8->Controls->Add(this->button4);
			this->panel8->Controls->Add(this->button5);
			this->panel8->Location = System::Drawing::Point(340, 11);
			this->panel8->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1237, 213);
			this->panel8->TabIndex = 6;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(582, 115);
			this->button8->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(287, 86);
			this->button8->TabIndex = 32;
			this->button8->Text = L"Delete Donor";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Admin::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(582, 15);
			this->button7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(287, 86);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Update Donor";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Admin::button7_Click);
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
			this->button4->Location = System::Drawing::Point(257, 115);
			this->button4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(287, 86);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Add New Donor";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Admin::button4_Click);
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
			this->button5->Location = System::Drawing::Point(257, 15);
			this->button5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(287, 86);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Display Donors Data";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::button5_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->panel10);
			this->panel3->Location = System::Drawing::Point(361, 275);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1116, 731);
			this->panel3->TabIndex = 7;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->button10);
			this->panel9->Controls->Add(this->textBox6);
			this->panel9->Controls->Add(this->comboBox3);
			this->panel9->Controls->Add(this->button6);
			this->panel9->Controls->Add(this->label15);
			this->panel9->Controls->Add(this->checkBox3);
			this->panel9->Controls->Add(this->dateTimePicker1);
			this->panel9->Controls->Add(this->checkBox2);
			this->panel9->Controls->Add(this->comboBox1);
			this->panel9->Controls->Add(this->textBox7);
			this->panel9->Controls->Add(this->textBox4);
			this->panel9->Controls->Add(this->textBox3);
			this->panel9->Controls->Add(this->textBox2);
			this->panel9->Controls->Add(this->textBox1);
			this->panel9->Location = System::Drawing::Point(524, 30);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(415, 676);
			this->panel9->TabIndex = 37;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(21, 589);
			this->button10->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(274, 50);
			this->button10->TabIndex = 33;
			this->button10->Text = L"Edit Account";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Admin::button10_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(21, 423);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(235, 29);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"Any disease \?";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox6_MouseClick);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox3->Location = System::Drawing::Point(21, 320);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox3->Size = System::Drawing::Size(165, 30);
			this->comboBox3->TabIndex = 21;
			this->comboBox3->Text = L"  Blood Type";
			this->comboBox3->Click += gcnew System::EventHandler(this, &Admin::comboBox3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(21, 589);
			this->button6->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(274, 50);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Add";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Admin::button6_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(17, 466);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(222, 22);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Date of the latest donation";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(209, 560);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(86, 25);
			this->checkBox3->TabIndex = 27;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Hiragana;
			this->dateTimePicker1->Location = System::Drawing::Point(21, 497);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(165, 32);
			this->dateTimePicker1->TabIndex = 22;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(21, 560);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 25);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Blood Pressure Disorders", L"Thyroid Disease",
					L"Diabetes", L"Cancer", L"Heart Disorders", L"Hepatitis", L"None of Them"
			});
			this->comboBox1->Location = System::Drawing::Point(21, 369);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(274, 30);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->Text = L" if you suffer from these";
			this->comboBox1->Click += gcnew System::EventHandler(this, &Admin::comboBox1_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(21, 209);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(274, 29);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"Password";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox7_MouseClick);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(21, 90);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(274, 29);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Username";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox4_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(21, 148);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(274, 29);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Email";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox3_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(21, 273);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(274, 29);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Age";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox2_MouseClick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(21, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox1_MouseClick);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->button11);
			this->panel10->Controls->Add(this->textBox12);
			this->panel10->Controls->Add(this->button9);
			this->panel10->Controls->Add(this->textBox8);
			this->panel10->Location = System::Drawing::Point(99, 187);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(410, 239);
			this->panel10->TabIndex = 36;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(129, 161);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(180, 63);
			this->button11->TabIndex = 40;
			this->button11->Text = L"Delete Account";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Admin::button11_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::Black;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::IBeam;
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
			this->textBox12->Click += gcnew System::EventHandler(this, &Admin::textBox12_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(129, 161);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 63);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Login";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Admin::button9_Click);
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
			this->textBox8->Click += gcnew System::EventHandler(this, &Admin::textBox8_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->Controls->Add(this->button12);
			this->panel12->Controls->Add(this->button13);
			this->panel12->Controls->Add(this->button14);
			this->panel12->Controls->Add(this->button15);
			this->panel12->Location = System::Drawing::Point(338, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1243, 247);
			this->panel12->TabIndex = 37;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(678, 142);
			this->button12->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(337, 65);
			this->button12->TabIndex = 36;
			this->button12->Text = L"Delete Recipient";
			this->button12->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Admin::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->BorderSize = 2;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(678, 38);
			this->button13->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(337, 65);
			this->button13->TabIndex = 35;
			this->button13->Text = L"Update Recipient";
			this->button13->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Admin::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderSize = 2;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(231, 142);
			this->button14->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(337, 65);
			this->button14->TabIndex = 34;
			this->button14->Text = L"Add New Recipient";
			this->button14->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Admin::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->BorderSize = 2;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(231, 41);
			this->button15->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(337, 65);
			this->button15->TabIndex = 33;
			this->button15->Text = L"Display Recipient Data";
			this->button15->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Admin::button15_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Transparent;
			this->panel13->Controls->Add(this->dataGridView1);
			this->panel13->Location = System::Drawing::Point(345, 253);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(1168, 753);
			this->panel13->TabIndex = 38;
			this->panel13->DoubleClick += gcnew System::EventHandler(this, &Admin::panel13_DoubleClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->Location = System::Drawing::Point(28, 41);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 26;
			this->dataGridView1->Size = System::Drawing::Size(1100, 665);
			this->dataGridView1->TabIndex = 34;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Username";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Email";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Password";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Gender";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Age";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Any Disease";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Disease List";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Blood Type";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Date Of Last Donation";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Transparent;
			this->panel14->Controls->Add(this->panel16);
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Location = System::Drawing::Point(349, 259);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1365, 732);
			this->panel14->TabIndex = 39;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->button19);
			this->panel16->Controls->Add(this->textBox16);
			this->panel16->Controls->Add(this->button17);
			this->panel16->Controls->Add(this->textBox17);
			this->panel16->Location = System::Drawing::Point(203, 75);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(278, 492);
			this->panel16->TabIndex = 35;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(22, 309);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(223, 48);
			this->button19->TabIndex = 32;
			this->button19->Text = L"Login";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Admin::button19_Click);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::Black;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::White;
			this->textBox16->Location = System::Drawing::Point(21, 160);
			this->textBox16->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(204, 35);
			this->textBox16->TabIndex = 29;
			this->textBox16->Text = L"Username";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->Click += gcnew System::EventHandler(this, &Admin::textBox16_Click_1);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(21, 311);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(223, 48);
			this->button17->TabIndex = 31;
			this->button17->Text = L"Delete Account";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Admin::button17_Click_1);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::Black;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::Color::White;
			this->textBox17->Location = System::Drawing::Point(21, 214);
			this->textBox17->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(204, 35);
			this->textBox17->TabIndex = 30;
			this->textBox17->Text = L"Password";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->UseSystemPasswordChar = true;
			this->textBox17->Click += gcnew System::EventHandler(this, &Admin::textBox17_Click_1);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Transparent;
			this->panel15->Controls->Add(this->button20);
			this->panel15->Controls->Add(this->button16);
			this->panel15->Controls->Add(this->checkBox4);
			this->panel15->Controls->Add(this->textBox5);
			this->panel15->Controls->Add(this->checkBox5);
			this->panel15->Controls->Add(this->comboBox2);
			this->panel15->Controls->Add(this->textBox9);
			this->panel15->Controls->Add(this->textBox10);
			this->panel15->Controls->Add(this->textBox11);
			this->panel15->Controls->Add(this->textBox13);
			this->panel15->Controls->Add(this->textBox14);
			this->panel15->Controls->Add(this->textBox15);
			this->panel15->Location = System::Drawing::Point(503, 73);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(391, 618);
			this->panel15->TabIndex = 34;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button20->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Location = System::Drawing::Point(24, 501);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(336, 65);
			this->button20->TabIndex = 36;
			this->button20->Text = L"Update Account";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Admin::button20_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Location = System::Drawing::Point(24, 501);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(336, 65);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Create Account";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Admin::button16_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->ForeColor = System::Drawing::Color::White;
			this->checkBox4->Location = System::Drawing::Point(271, 454);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(86, 25);
			this->checkBox4->TabIndex = 25;
			this->checkBox4->Text = L"Female";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(24, 330);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(336, 35);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"Doctor of the case";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Click += gcnew System::EventHandler(this, &Admin::textBox5_Click_1);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->ForeColor = System::Drawing::Color::White;
			this->checkBox5->Location = System::Drawing::Point(81, 454);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(67, 25);
			this->checkBox5->TabIndex = 24;
			this->checkBox5->Text = L"Male";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::White;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox2->Location = System::Drawing::Point(24, 382);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox2->Size = System::Drawing::Size(165, 36);
			this->comboBox2->TabIndex = 21;
			this->comboBox2->Text = L"  Blood Type";
			this->comboBox2->Click += gcnew System::EventHandler(this, &Admin::comboBox2_Click_1);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(24, 277);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(336, 35);
			this->textBox9->TabIndex = 19;
			this->textBox9->Text = L"Hospital";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->Click += gcnew System::EventHandler(this, &Admin::textBox9_Click_1);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(24, 24);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(336, 35);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"Name";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->Click += gcnew System::EventHandler(this, &Admin::textBox10_Click_1);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(24, 73);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(336, 35);
			this->textBox11->TabIndex = 5;
			this->textBox11->Text = L"Username";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->Click += gcnew System::EventHandler(this, &Admin::textBox11_Click_1);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(24, 226);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(336, 35);
			this->textBox13->TabIndex = 18;
			this->textBox13->Text = L"Age";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->Click += gcnew System::EventHandler(this, &Admin::textBox13_Click_1);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::White;
			this->textBox14->Location = System::Drawing::Point(24, 125);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(336, 35);
			this->textBox14->TabIndex = 6;
			this->textBox14->Text = L"Email";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->Click += gcnew System::EventHandler(this, &Admin::textBox14_Click_1);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->Location = System::Drawing::Point(24, 176);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(336, 35);
			this->textBox15->TabIndex = 7;
			this->textBox15->Text = L"Password";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->UseSystemPasswordChar = true;
			this->textBox15->Click += gcnew System::EventHandler(this, &Admin::textBox15_Click_1);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Transparent;
			this->panel17->Controls->Add(this->dataGridView2);
			this->panel17->Location = System::Drawing::Point(338, 271);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1228, 816);
			this->panel17->TabIndex = 40;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->Column11, this->Column12, this->Column13
			});
			this->dataGridView2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView2->Location = System::Drawing::Point(66, 81);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 26;
			this->dataGridView2->Size = System::Drawing::Size(1094, 637);
			this->dataGridView2->TabIndex = 35;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Username";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Email";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Password";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Gender";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Hospital";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Blood Type";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Doctor";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 125;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Transparent;
			this->panel11->Controls->Add(this->dataGridView3);
			this->panel11->Location = System::Drawing::Point(358, 247);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1168, 780);
			this->panel11->TabIndex = 41;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn12, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19
			});
			this->dataGridView3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView3->Location = System::Drawing::Point(75, 60);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 26;
			this->dataGridView3->Size = System::Drawing::Size(1054, 637);
			this->dataGridView3->TabIndex = 36;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Username";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Age";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Last Donation";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 125;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Have Any Disease";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 125;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Name";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 125;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Gender";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->Width = 125;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Blood Type";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->Width = 125;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Donation Date";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->Width = 125;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Transparent;
			this->panel18->Controls->Add(this->panel19);
			this->panel18->Location = System::Drawing::Point(342, 14);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(1228, 239);
			this->panel18->TabIndex = 42;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Transparent;
			this->panel19->Controls->Add(this->button25);
			this->panel19->Controls->Add(this->button22);
			this->panel19->Controls->Add(this->button24);
			this->panel19->Location = System::Drawing::Point(7, 24);
			this->panel19->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(1235, 200);
			this->panel19->TabIndex = 41;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button25->FlatAppearance->BorderSize = 2;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(71, 58);
			this->button25->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(325, 53);
			this->button25->TabIndex = 38;
			this->button25->Text = L"Display Donations Data";
			this->button25->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Admin::button25_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->BorderSize = 2;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(827, 58);
			this->button22->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(325, 53);
			this->button22->TabIndex = 32;
			this->button22->Text = L"Delete Donation";
			this->button22->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Admin::button22_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->BorderSize = 2;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(449, 58);
			this->button24->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(325, 53);
			this->button24->TabIndex = 6;
			this->button24->Text = L"Add New Donation";
			this->button24->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Admin::button24_Click);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Transparent;
			this->panel20->Controls->Add(this->textBox20);
			this->panel20->Controls->Add(this->button26);
			this->panel20->Location = System::Drawing::Point(351, 250);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(1215, 796);
			this->panel20->TabIndex = 43;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::Black;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->ForeColor = System::Drawing::Color::White;
			this->textBox20->Location = System::Drawing::Point(241, 277);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(603, 47);
			this->textBox20->TabIndex = 45;
			this->textBox20->Text = L"Username";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox20->Click += gcnew System::EventHandler(this, &Admin::textBox20_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button26->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(392, 399);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(298, 73);
			this->button26->TabIndex = 44;
			this->button26->Text = L"Delete Donations";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Admin::button26_Click);
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::Transparent;
			this->panel21->Controls->Add(this->label17);
			this->panel21->Controls->Add(this->button23);
			this->panel21->Controls->Add(this->checkBox1);
			this->panel21->Controls->Add(this->comboBox4);
			this->panel21->Controls->Add(this->comboBox5);
			this->panel21->Controls->Add(this->label18);
			this->panel21->Controls->Add(this->textBox18);
			this->panel21->Controls->Add(this->textBox19);
			this->panel21->Location = System::Drawing::Point(340, 154);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(1208, 884);
			this->panel21->TabIndex = 44;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(280, 55);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(421, 62);
			this->label17->TabIndex = 40;
			this->label17->Text = L"Donation Request";
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->button23->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(291, 449);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(594, 93);
			this->button23->TabIndex = 39;
			this->button23->Text = L"Place Your Request";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Admin::button23_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(291, 367);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(201, 28);
			this->checkBox1->TabIndex = 38;
			this->checkBox1->Text = L"Have any Diseases";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::Black;
			this->comboBox4->DisplayMember = L"1";
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::White;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"January", L"February", L"March", L"April", L"May",
					L"June", L"August", L"September", L"October", L"November", L"December"
			});
			this->comboBox4->Location = System::Drawing::Point(380, 320);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(133, 30);
			this->comboBox4->TabIndex = 37;
			this->comboBox4->Text = L"Month";
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::Black;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::Color::White;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox5->Location = System::Drawing::Point(291, 320);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(83, 30);
			this->comboBox5->TabIndex = 36;
			this->comboBox5->Text = L"Day";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(277, 293);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(236, 24);
			this->label18->TabIndex = 35;
			this->label18->Text = L" Your Last Donation Date";
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::Black;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::White;
			this->textBox18->Location = System::Drawing::Point(291, 238);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(222, 35);
			this->textBox18->TabIndex = 34;
			this->textBox18->Text = L"Age";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->Click += gcnew System::EventHandler(this, &Admin::textBox18_Click);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::Black;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::Color::White;
			this->textBox19->Location = System::Drawing::Point(291, 168);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(349, 35);
			this->textBox19->TabIndex = 33;
			this->textBox19->Text = L"Username";
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->Click += gcnew System::EventHandler(this, &Admin::textBox19_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1582, 1055);
			this->Controls->Add(this->DashBoard);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel20);
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->DashBoard->ResumeLayout(false);
			this->DashBoard->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   void readData(string fileName, vector<string>&v) {
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
	panel9->Hide();
	panel10->Hide();
	panel17->Hide();
	panel14->Hide();
	panel13->Show();
	panel3->Hide();
	panel8->Show();
	dataGridView1->Show();
	dataGridView1->Rows->Clear();
	vector<string>Don;
	readData("Donor.txt",Don);
		for (int i = 0; i < Don.size(); i+=10) {
			String^ donor_info1 = msclr::interop::marshal_as<String^>(Don.at(i));
			String^ donor_info2 = msclr::interop::marshal_as<String^>(Don.at(i + 1));
			String^ donor_info3 = msclr::interop::marshal_as<String^>(Don.at(i + 2));
			String^ donor_info4 = msclr::interop::marshal_as<String^>(Don.at(i + 3));
			String^ donor_info5 = msclr::interop::marshal_as<String^>(Don.at(i + 4));
			String^ donor_info6 = msclr::interop::marshal_as<String^>(Don.at(i+5));
			String^ donor_info7 = msclr::interop::marshal_as<String^>(Don.at(i+6));
			String^ donor_info8 = msclr::interop::marshal_as<String^>(Don.at(i+7));
			String^ donor_info9 = msclr::interop::marshal_as<String^>(Don.at(i+8));
			String^ donor_info10 = msclr::interop::marshal_as<String^>(Don.at(i+9));
			dataGridView1->Rows->Add(donor_info1, donor_info2, donor_info3, donor_info4,
				donor_info5, donor_info6, donor_info7, donor_info8, donor_info9, donor_info10);
		}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Hide();
	panel3->Hide();
	DashBoard->Show();
	panel14->Hide();
	dataGridView2->Hide();
	panel13->Hide();
	panel12->Hide();
	panel18->Hide();
	panel11->Hide();
	panel20->Hide();
	panel21->Hide();
	dataGridView3->Hide();
	int m, n,z;
	//Donors count
	vector<string>c;
	readData("DonorUsernames.txt",c);
		m = c.size();
		string b = to_string(m);
		String^ quantity;
		quantity = gcnew String(b.c_str());
		label10->Text = quantity;
		c.clear();
	//Recepient count
	readData("RecipientUsernames.txt", c);
		n = c.size();
	    b = to_string(n);
		quantity = gcnew String(b.c_str());
		label7->Text = quantity;
		c.clear();
		int sum = m + n;
		b = to_string(sum);
		quantity = gcnew String(b.c_str());
		label4->Text = quantity;
	readData("DonorUiData.txt", c);	
		z = c.size() / 14;
		b = to_string(z);
		quantity = gcnew String(b.c_str());
		label13->Text = quantity;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	DashBoard->Hide();
	panel8->Show();
	panel9->Hide();
	panel10->Hide();
	panel3->Hide();
	dataGridView1->Hide();
	panel14->Hide();
	dataGridView2->Hide();
	panel13->Hide();
	panel12->Hide();
	panel18->Hide();
	panel11->Hide();
	panel20->Hide();
	panel21->Hide();
	dataGridView3->Hide();
	//Add_a_New_Users->Show();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//DataGridView^ dataGridView1 = gcnew DataGridView();
	//dataGridView1.
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Name";
		textBox4->Text = "Username";
		textBox3->Text = "Email";
		textBox7->Text = "Password";
		textBox2->Text = "Age";
		textBox6->Text = "Any disease ?";
		comboBox3->Text = "  Blood Type";
		comboBox1->Text = " if you suffer from these";
	panel3->Show();
	panel10->Hide();
	panel9->Show();
	button10->Hide();
	button6->Show();
	panel13->Hide();
	panel17->Hide();
	
	dataGridView1->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
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
	String^ UserName = textBox4->Text;
	String^ Email = textBox3->Text;
	String^ PassWord = textBox7->Text;
	String^ Age = textBox2->Text;
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
			MessageBox::Show("Success! :The account has been Added", " Added Success ", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
		
	}
	else {
			MessageBox::Show("Error! :You Should Choose your gender ", "Register Fail", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Handle Cursor
	if (textBox1->Text == "Name")
	{
		textBox1->Text = "";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
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
		comboBox1->Text = " if you suffer from these";
	}
}
private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "Username")
	{
		textBox4->Text = "";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
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
		comboBox1->Text = " if you suffer from these";
	}
}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "Email")
	{
		textBox3->Text = "";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
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
		comboBox1->Text = " if you suffer from these";
	}
}
private: System::Void textBox7_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "Password")
	{
		textBox7->Text = "";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
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
		comboBox1->Text = " if you suffer from these";
	}
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "Age")
	{
		textBox2->Text = "";
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
		comboBox1->Text = " if you suffer from these";
	}
}
private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == " if you suffer from these")
	{
		comboBox1->Text = "";
	}
}
private: System::Void textBox6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
	}
	if (textBox6->Text == "Any disease ?")
	{
		textBox6->Text = "";
	}
	if (comboBox3->Text == "")
	{
		comboBox3->Text = "  Blood Type";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from these";
	}
}
private: System::Void comboBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Name";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Username";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Email";
	}
	if (textBox7->Text == "")
	{
		textBox7->Text = "Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Age";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Any disease ?";
	}
	if (comboBox3->Text == "  Blood Type")
	{
		comboBox3->Text = "";
	}
	if (comboBox1->Text == "")
	{
		comboBox1->Text = " if you suffer from these";
	}
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "Name";
	textBox4->Text = "Username";
	textBox3->Text = "Email";
	textBox7->Text = "Password";
	textBox2->Text = "Age";
	textBox6->Text = "Any disease ?";
	comboBox3->Text = "  Blood Type";
	comboBox1->Text = " if you suffer from these";
		textBox12->Text = "Username";
		textBox8->Text = "Password";
	panel3->Show();
	panel10->Show();
	button10->Show();
	button6->Hide();
	panel13->Hide();
	panel9->Show();
	dataGridView1->Hide();
	button11->Hide();
	button9->Show();
}
	   int tmp = 0;
	   bool b = false;
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	bool succeed = false;
	String^ username = textBox12->Text;
	string UserName = msclr::interop::marshal_as<string>(username);
	String^ password = textBox8->Text;
	string PassWord = msclr::interop::marshal_as<string>(password);
	vector<string> DonorData;
	//Read form Donor file
	readData("Donor.txt", DonorData);
		//Check if the entered username is correct or not
		for (int j = 1; j < DonorData.size() - 1; j = j + 10) {
			if (DonorData.at(j) == UserName) {
				if (DonorData.at(j + 2) == PassWord) {
					succeed = true;
					MessageBox::Show("Success! :You Are logged in", "Login Success", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					tmp = j;
					break;
				}
			}
		}
		if (succeed == true) {
			panel10->Hide();
		}
		if (succeed == false) {

			MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		b = succeed;


	if (succeed == true) {
		String^ Name = msclr::interop::marshal_as<String^>(DonorData[tmp - 1]);
		textBox1->Text = Name;

		String^ uName = msclr::interop::marshal_as<String^>(DonorData[tmp]);
		textBox4->Text = uName;

		String^ mail = msclr::interop::marshal_as<String^>(DonorData[tmp + 1]);
		textBox3->Text = mail;

		String^ pas = msclr::interop::marshal_as<String^>(DonorData[tmp + 2]);
		textBox7->Text = pas;

		String^ age = msclr::interop::marshal_as<String^>(DonorData[tmp + 4]);
		textBox2->Text = age;

		String^ any = msclr::interop::marshal_as<String^>(DonorData[tmp + 5]);
		textBox6->Text = any;

		String^ blood = msclr::interop::marshal_as<String^>(DonorData[tmp + 7]);
		comboBox3->Text = blood;

		String^ suff = msclr::interop::marshal_as<String^>(DonorData[tmp + 6]);
		comboBox1->Text = suff;

		//String^ date = msclr::interop::marshal_as<String^>(DonorData[tmp + 8]);
		//dateTimePicker1->Text = date;
	}
	DonorData.clear();
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
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b == true) {
		if (checkBox2->Checked || checkBox3->Checked) {
			String^ username = textBox12->Text;
			string UserName = msclr::interop::marshal_as<string>(username);
			String^ password = textBox8->Text;
			string PassWord = msclr::interop::marshal_as<string>(password);
			vector<string> ArrDonorData;
			//Read form Donor file
			readData("Donor.txt", ArrDonorData);
				remove("Donor.txt");
				remove("DonorLogIn.txt");
				remove("DonorUsernames.txt");
			for (int j = 0; j < 10; j++) {
				ArrDonorData.erase(ArrDonorData.begin() + tmp - 1);
			}

			String^ Name = textBox1->Text;
			String^ UserNamee = textBox4->Text;
			String^ Email = textBox3->Text;
			String^ PassWordd = textBox7->Text;
			String^ Age = textBox2->Text;
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
			string name = msclr::interop::marshal_as<string>(Name);
			string usernamee = msclr::interop::marshal_as<string>(UserNamee);
			string email = msclr::interop::marshal_as<string>(Email);
			string passwordd = msclr::interop::marshal_as<string>(PassWordd);
			string age = msclr::interop::marshal_as<string>(Age);
			string disease = msclr::interop::marshal_as<string>(Disease);
			string arr_disease = msclr::interop::marshal_as<string>(ArrDisease);
			string date_of_last_donation = msclr::interop::marshal_as<string>(DateOfLastDonation);
			string blood_type = msclr::interop::marshal_as<string>(BloodType);
			string gender = msclr::interop::marshal_as<string>(Gender);

			ArrDonorData.push_back(name);
			ArrDonorData.push_back(usernamee);
			ArrDonorData.push_back(email);
			ArrDonorData.push_back(passwordd);
			ArrDonorData.push_back(gender);
			ArrDonorData.push_back(age);
			ArrDonorData.push_back(disease);
			ArrDonorData.push_back(arr_disease);
			ArrDonorData.push_back(blood_type);
			ArrDonorData.push_back(date_of_last_donation);

			ofstream edit;
			edit.open("Donor.txt", ios::app);
			for (int i = 0; i < ArrDonorData.size(); i++) {
				if (i % 10 != 9 || i == 0) {
					edit << ArrDonorData.at(i) << ",";
				}
				else {
					edit << ArrDonorData.at(i);
					edit << "\n";
				}
			}

			ofstream usern;
			usern.open("DonorUsernames.txt", ios::app);
			for (int i = 1; i < ArrDonorData.size(); i += 10) {
				usern << ArrDonorData.at(i) << "\n";
			}

			ofstream loginn;
			loginn.open("DonorLogIn.txt", ios::app);
			for (int i = 1; i < ArrDonorData.size(); i += 10) {
				loginn << ArrDonorData.at(i) + "," + ArrDonorData.at(i + 2) << "\n";
			}


			loginn.close();
			edit.close();
			usern.close();
			ArrDonorData.clear();
			MessageBox::Show("Done! :The account is updated", "Update Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Error! :You Must choose The Gender", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Error! : You must Log in first ", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox12->Text = "Username";
	textBox8->Text = "Password";
	panel10->Show();
	button11->Show();
	button9->Hide();
	panel13->Hide();
	panel9->Hide();
    dataGridView1->Hide();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int tmp = 0;
	bool success = false;
	bool b = false;
	String^ username = textBox12->Text;
	string UserName = msclr::interop::marshal_as<string>(username);
	String^ password = textBox8->Text;
	string PassWord = msclr::interop::marshal_as<string>(password);
	vector<string> DonorData;
	//Read form Donor file
	 readData("Donor.txt",DonorData);
		//Check if the entered username is correct or not
		for (int j = 1; j < DonorData.size(); j = j + 10) {
			if (DonorData.at(j) == UserName) {
				if (DonorData.at(j + 2) == PassWord) {
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
		MessageBox::Show("Success! :The account has been Deleted", " Delete Success ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Hide();
	panel3->Hide();
	panel12->Show();
	panel8->Hide();
	DashBoard->Hide();
	panel18->Hide();
	panel11->Hide();
	panel20->Hide();
	panel21->Hide();
	dataGridView3->Hide();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView2->Rows->Clear();
	panel17->Show();
	panel3->Hide();
	panel14->Hide();
	dataGridView2->Show();
	dataGridView1->Hide();
	panel13->Hide();
	DashBoard->Hide();
	vector <string> r;
	readData("Recipient.txt", r);
		for (int i = 0; i < r.size(); i += 9) {
			String^ donor_info1 = msclr::interop::marshal_as<String^>(r.at(i));
			String^ donor_info2 = msclr::interop::marshal_as<String^>(r.at(i + 1));
			String^ donor_info3 = msclr::interop::marshal_as<String^>(r.at(i + 2));
			String^ donor_info4 = msclr::interop::marshal_as<String^>(r.at(i + 3));
			String^ donor_info5 = msclr::interop::marshal_as<String^>(r.at(i + 4));
			String^ donor_info6 = msclr::interop::marshal_as<String^>(r.at(i + 5));
			String^ donor_info7 = msclr::interop::marshal_as<String^>(r.at(i + 6));
			String^ donor_info8 = msclr::interop::marshal_as<String^>(r.at(i + 7));
			String^ donor_info9 = msclr::interop::marshal_as<String^>(r.at(i + 8));
			dataGridView2->Rows->Add(donor_info1, donor_info2, donor_info3, donor_info4,
				donor_info5, donor_info6, donor_info7, donor_info8, donor_info9);
		}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox10->Text = "Name";
		textBox11->Text = "Username";
		textBox14->Text = "Email";
		textBox15->Text = "Password";
		textBox13->Text = "Age";
		textBox9->Text = "Hospital";
		textBox5->Text = "Doctor of the case";
		comboBox2->Text = "  Blood Type";
	panel14->Show();
	panel16->Hide();
	dataGridView2->Hide();
	panel15->Show();
	button16->Show();
	button20->Hide();
	dataGridView1->Hide();
	DashBoard->Hide();
	panel3->Hide();
	panel13->Hide();
	panel17->Hide();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox16->Text = "Username";
		textBox17->Text = "Password";
	textBox10->Text = "Name";
	textBox11->Text = "Username";
	textBox14->Text = "Email";
	textBox15->Text = "Password";
	textBox13->Text = "Age";
	textBox9->Text = "Hospital";
	textBox5->Text = "Doctor of the case";
	comboBox2->Text = "  Blood Type";
	dataGridView1->Hide();
	DashBoard->Hide();
	panel3->Hide();
	panel13->Hide();
	panel17->Hide();
	panel14->Show();
	panel16->Show();
	panel15->Show();
	dataGridView2->Hide();
	panel15->Show();
	button16->Hide();
	button20->Show();
	button19->Show();
	button17->Hide();
}
private: System::Void panel13_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox16->Text = "Username";
	textBox17->Text = "Password";
	panel14->Show();
	panel15->Hide();
	panel16->Show();
	button19->Hide();
	button17->Show();
}
	   //Delete Recp
   int counter1 = 0;
   bool Login_Success = false;
   bool a = false;
	  // add Recp
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if ( checkBox5->Checked || checkBox4->Checked ) {

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
		String^ Name = textBox10->Text;
		String^ UserName = textBox11->Text;
		String^ Email = textBox14->Text;
		String^ PassWord = textBox15->Text;
		String^ Age = textBox13->Text;
		String^ Hospital = textBox9->Text;
		String^ DocOfCase = textBox5->Text;
		String^ BloodType = comboBox2->Text;
		String^ Gender;
		if (checkBox5->Checked) {
			Gender = "Male";
		}
		else if (checkBox4->Checked) {
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
		if (usernamesArr[usernamesArr.size() - 1] != username) {
			for (int i = 0; i < 9; i++) {
				RecipientData << RecipientArr.at(i) << ",";
			}
			RecipientData << "\n";
			RecipientLogInData << RecipientArr.at(1) << "," << RecipientArr.at(3) << "\n";
			RecipientUsernames << RecipientArr.at(1) << "\n";
			RecipientArr.empty();
			state = true;
			MessageBox::Show("Success! :The account has been Added", " Added Success ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("This Username Is Already Used", "Used Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
			state = false;

		}
		//close Recipient form after finishing Registration
		usernamesArr.clear();
		if (state == true) {
			
		}
	}
}
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ username = textBox16->Text;
	string UserName = msclr::interop::marshal_as<string>(username);
	String^ password = textBox17->Text;
	string PassWord = msclr::interop::marshal_as<string>(password);
	vector<string> RecipientData;
	readData("Recipient.txt", RecipientData);
		//Check if the entered username is correct or not
		for (int j = 1; j < RecipientData.size(); j++) {
			if (RecipientData.at(j) == UserName) {
				if (RecipientData.at(j + 2) == PassWord) {
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
		MessageBox::Show("Success! :The account has been Deleted", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
	}
}
private: System::Void textBox16_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox16->Text == "Username") {
		textBox16->Text = "";
	}
	if (textBox17->Text == "") {
		textBox17->Text = "Password";
	}
}
private: System::Void textBox17_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox17->Text == "Password") {
		textBox17->Text = "";
	}
	if (textBox16->Text == "") {
		textBox16->Text = "Username";
	}
}
private: System::Void textBox10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "Name")
	{
		textBox10->Text = "";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void textBox11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "Username")
	{
		textBox11->Text = "";
	}
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void textBox14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "Email")
	{
		textBox14->Text = "";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void textBox15_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "Password")
	{
		textBox15->Text = "";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void textBox13_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "Age")
	{
		textBox13->Text = "";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void textBox9_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "Hospital")
	{
		textBox9->Text = "";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void textBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "Doctor of the case")
	{
		textBox5->Text = "";
	}
	if (comboBox2->Text == "")
	{
		comboBox2->Text = "  Blood Type";
	}
}
private: System::Void comboBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "")
	{
		textBox10->Text = "Name";
	}
	if (textBox11->Text == "")
	{
		textBox11->Text = "Username";
	}
	if (textBox14->Text == "")
	{
		textBox14->Text = "Email";
	}
	if (textBox15->Text == "")
	{
		textBox15->Text = "Password";
	}
	if (textBox13->Text == "")
	{
		textBox13->Text = "Age";
	}
	if (textBox9->Text == "")
	{
		textBox9->Text = "Hospital";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Doctor of the case";
	}
	if (comboBox2->Text == "  Blood Type")
	{
		comboBox2->Text = "";
	}
}   
int counterb = 0;
bool bb = false;
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	bool passing = false;
	String^ username = textBox16->Text;
	string UserName = msclr::interop::marshal_as<string>(username);
	String^ password = textBox17->Text;
	string PassWord = msclr::interop::marshal_as<string>(password);
	vector<string> RecipientData;
	readData("Recipient.txt", RecipientData);
		//Check if the entered username is correct or not
		for (int j = 1; j < RecipientData.size(); j++) {
			if (RecipientData.at(j) == UserName) {
				if (RecipientData.at(j + 2) == PassWord) {
					passing = true;
					MessageBox::Show("Success! :You Are logged in", "Login Success", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					counterb = j;
					break;
				}
			}
		}
		if (passing == true) {
			panel16->Hide();
		}
		else {
			MessageBox::Show("Error! : Wrong Username or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		bb = passing;
	if (passing) {
		String^ Name = msclr::interop::marshal_as<String^>(RecipientData[counterb - 1]);
		textBox10->Text = Name;
		String^ uName = msclr::interop::marshal_as<String^>(RecipientData[counterb]);
		textBox11->Text = uName;
		String^ em = msclr::interop::marshal_as<String^>(RecipientData[counterb + 1]);
		textBox14->Text = em;
		String^ pas = msclr::interop::marshal_as<String^>(RecipientData[counterb + 2]);
		textBox15->Text = pas;
		String^ age = msclr::interop::marshal_as<String^>(RecipientData[counterb + 4]);
		textBox13->Text = age;
		String^ blood = msclr::interop::marshal_as<String^>(RecipientData[counterb + 6]);
		comboBox2->Text = blood;
		String^ hos = msclr::interop::marshal_as<String^>(RecipientData[counterb + 5]);
		textBox9->Text = hos;
		String^ doc = msclr::interop::marshal_as<String^>(RecipientData[counterb + 7]);
		textBox5->Text = doc;
	}
	RecipientData.clear();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bb) {
		if (checkBox5->Checked || checkBox4->Checked) {
			String^ username = textBox16->Text;
			string UserName = msclr::interop::marshal_as<string>(username);
			String^ password = textBox17->Text;
			string PassWord = msclr::interop::marshal_as<string>(password);
			vector<string> ArrRecipientData;
			//Read form Donor file
			readData("Recipient.txt", ArrRecipientData);
				remove("Recipient.txt");
				remove("RecipientLogIn.txt");
				remove("RecipientUsernames.txt");

			for (int j = 0; j < 9; j++) {
				ArrRecipientData.erase(ArrRecipientData.begin() + counterb - 1);
			}

			String^ Name = textBox10->Text;
			String^ UserNamee = textBox11->Text;
			String^ Email = textBox14->Text;
			String^ PassWordd = textBox15->Text;
			String^ Age = textBox13->Text;
			String^ Hospital = textBox9->Text;
			String^ Doctor = textBox5->Text;
			String^ BloodType = comboBox2->Text;
			String^ Gender;
			if (checkBox5->Checked) {
				Gender = "Male";
			}
			else if (checkBox4->Checked) {
				Gender = "Female";
			}


			string name = msclr::interop::marshal_as<string>(Name);
			string usernamee = msclr::interop::marshal_as<string>(UserNamee);
			string email = msclr::interop::marshal_as<string>(Email);
			string passwordd = msclr::interop::marshal_as<string>(PassWordd);
			string age = msclr::interop::marshal_as<string>(Age);
			string hospital = msclr::interop::marshal_as<string>(Hospital);
			string doctor = msclr::interop::marshal_as<string>(Doctor);
			string blood_type = msclr::interop::marshal_as<string>(BloodType);
			string gender = msclr::interop::marshal_as<string>(Gender);

			ArrRecipientData.push_back(name);
			ArrRecipientData.push_back(usernamee);
			ArrRecipientData.push_back(email);
			ArrRecipientData.push_back(passwordd);
			ArrRecipientData.push_back(gender);
			ArrRecipientData.push_back(age);
			ArrRecipientData.push_back(hospital);
			ArrRecipientData.push_back(blood_type);
			ArrRecipientData.push_back(doctor);

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
			MessageBox::Show("Done! :The account is updated", "Update Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
		}
		else {
			MessageBox::Show("Error! :You Must choose Your Gender", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Error! : You must Log in first ", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Hide();
	panel3->Hide();
	panel12->Hide();
	panel8->Hide();
	DashBoard->Hide();
	panel18->Show();
	panel11->Hide();
	panel20->Hide();
	panel21->Hide();
	dataGridView3->Hide();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Rows->Clear();
	panel17->Hide();
	panel3->Hide();
	panel21->Hide();
	panel20->Hide();
	panel14->Hide();
	dataGridView2->Hide();
	panel11->Show();
	dataGridView1->Hide();
	panel13->Hide();
	DashBoard->Hide();
	panel18->Show();
	dataGridView3->Show();
	vector <string> r;
	readData("DonorUiData.txt", r);
		for (int i = 0; i < r.size(); i += 11) {
			String^ donor_info1 = msclr::interop::marshal_as<String^>(r.at(i));
			String^ donor_info2 = msclr::interop::marshal_as<String^>(r.at(i + 1));
			String^ donor_info3 = msclr::interop::marshal_as<String^>(r.at(i + 2));
			String^ donor_info4 = msclr::interop::marshal_as<String^>(r.at(i + 3));
			String^ donor_info5 = msclr::interop::marshal_as<String^>(r.at(i + 4));
			String^ donor_info6 = msclr::interop::marshal_as<String^>(r.at(i + 5));
			String^ donor_info7 = msclr::interop::marshal_as<String^>(r.at(i + 6));
			String^ donor_info8 = msclr::interop::marshal_as<String^>(r.at(i + 7));
			String^ donor_info9 = msclr::interop::marshal_as<String^>(r.at(i + 8));
			dataGridView3->Rows->Add(donor_info1, donor_info2, donor_info3, donor_info4,
				donor_info5, donor_info6, donor_info7, donor_info8+" - "+donor_info9);
		}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox19->Text = "Username";
		textBox18->Text = "Age";
		comboBox5->Text = "Day";
		comboBox4->Text = "Month";
	panel21->Show();
	panel14->Hide();
	panel20->Hide();
	panel16->Hide();
	dataGridView2->Hide();
	panel15->Hide();
	dataGridView1->Hide();
	DashBoard->Hide();
	panel3->Hide();
	panel13->Hide();
	panel17->Hide();
	dataGridView3->Hide();
	panel11->Hide();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox20->Text = "Username";
	panel20->Show();
	panel21->Hide();
	panel14->Hide();
	panel16->Hide();
	dataGridView2->Hide();
	panel15->Hide();
	dataGridView1->Hide();
	DashBoard->Hide();
	panel3->Hide();
	panel13->Hide();
	panel17->Hide();
	dataGridView3->Hide();
	panel11->Hide();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {

	//flage for check age 
	bool Check_Age = false;
	//convert from String^ to string 
	String^ x = textBox18->Text;
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

	int g = comboBox4->SelectedIndex + 1;

	//calculate the difrence between selection month and date now

	int validation = month - g;

	//check if the duration grater than 3 monthes or not (error message if not grater than 3 )

	if (validation < 3 || comboBox4->Text == "Month")
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
	String^ UserName = textBox19->Text;
	string Username = msclr::interop::marshal_as<string>(UserName);
	String^ Age = textBox18->Text;
	string age = msclr::interop::marshal_as<string>(Age);
	String^ LastDate = comboBox4->Text;
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
			MessageBox::Show("success : Your Donoation Request has been successfully added", " successful operation", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		//check falg state (if false it's mean Username is wrong ) to show error and it can't save data in the file
		if (Username_exist == false)
		{
			MessageBox::Show("Error! : Wrong UserName", " You can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void textBox19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox19->Text == "Username")
	{
		textBox19->Text = "";
	}
	if (textBox18->Text == "")
	{
		textBox18->Text = "Age";
	}
}
private: System::Void textBox18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox18->Text == "Age")
	{
		textBox18->Text = "";
	}
	if (textBox19->Text == "")
	{
		textBox19->Text = "Username";
	}
}
private: System::Void textBox20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox20->Text == "Username")
	{
		textBox20->Text = "";
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	int tmp = 0;
	bool success = false;
	bool b = false;
	String^ username = textBox20->Text;
	string UserName = msclr::interop::marshal_as<string>(username);
	vector<string> DonorData;
	//Read form Donor file
	readData("DonorUiData.txt", DonorData);
		//Check if the entered username is correct or not
		for (int j = 0; j < DonorData.size(); j += 11) {
			if (DonorData.at(j) == UserName) {
					success = true;
					tmp = j;
					break;
			}
		}
		if (success == false) {

			MessageBox::Show("Error! : Wrong Username", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		b = success;
	if (success == true) {
		remove("DonorUiData.txt");
		for (int j = 0; j < 11; j++) {
			DonorData.erase(DonorData.begin() + tmp );
		}

		ofstream edit;
		edit.open("DonorUiData.txt", ios::app);
		for (int i = 0; i < DonorData.size(); i++) {
			if (i % 11 != 10 || i == 0) {
				edit << DonorData.at(i) << ",";
			}
			else {
				edit << DonorData.at(i);
				edit << "\n";
			}
		}
		edit.close();
		DonorData.clear();
		MessageBox::Show("Success! :The account has been Deleted", " Delete Success ", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
