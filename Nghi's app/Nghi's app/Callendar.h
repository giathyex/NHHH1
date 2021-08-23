#pragma once
#include <iostream> 
#include <time.h>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "CallendarADD.h"
#include "CallendarDetail.h"
#include "CallendarALL.h"

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Callendar
	/// </summary>
	public ref class Callendar : public System::Windows::Forms::Form
	{
	public:
		Form ^ sf2;
		Callendar(void)
		{
			InitializeComponent();
		}
		Callendar(Form ^ cll)
		{
			sf2 = cll;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Callendar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonN;
	private: System::Windows::Forms::Button^  buttonP;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelm;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  labelc;

	private: System::Windows::Forms::Label^  labelb;


	private: System::Windows::Forms::Label^  labela;
	private: System::Windows::Forms::Label^  labeld;
	private: System::Windows::Forms::Label^  labele;
	private: System::Windows::Forms::Label^  labelf;
	private: System::Windows::Forms::Label^  labelg;
	private: array<System::Windows::Forms::Label^> ^labelarr;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		int kk2x, monthx, yearx, loopx;
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Callendar::typeid));
			this->buttonN = (gcnew System::Windows::Forms::Button());
			this->buttonP = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelm = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelc = (gcnew System::Windows::Forms::Label());
			this->labelb = (gcnew System::Windows::Forms::Label());
			this->labela = (gcnew System::Windows::Forms::Label());
			this->labeld = (gcnew System::Windows::Forms::Label());
			this->labele = (gcnew System::Windows::Forms::Label());
			this->labelf = (gcnew System::Windows::Forms::Label());
			this->labelg = (gcnew System::Windows::Forms::Label());
			this->labelarr = gcnew array<System::Windows::Forms::Label^>(42);
			this->labelarr[0] = (gcnew System::Windows::Forms::Label());
			this->labelarr[1] = (gcnew System::Windows::Forms::Label());
			this->labelarr[2] = (gcnew System::Windows::Forms::Label());
			this->labelarr[3] = (gcnew System::Windows::Forms::Label());
			this->labelarr[4] = (gcnew System::Windows::Forms::Label());
			this->labelarr[5] = (gcnew System::Windows::Forms::Label());
			this->labelarr[6] = (gcnew System::Windows::Forms::Label());
			this->labelarr[7] = (gcnew System::Windows::Forms::Label());
			this->labelarr[8] = (gcnew System::Windows::Forms::Label());
			this->labelarr[9] = (gcnew System::Windows::Forms::Label());
			this->labelarr[10] = (gcnew System::Windows::Forms::Label());
			this->labelarr[11] = (gcnew System::Windows::Forms::Label());
			this->labelarr[12] = (gcnew System::Windows::Forms::Label());
			this->labelarr[13] = (gcnew System::Windows::Forms::Label());
			this->labelarr[14] = (gcnew System::Windows::Forms::Label());
			this->labelarr[15] = (gcnew System::Windows::Forms::Label());
			this->labelarr[16] = (gcnew System::Windows::Forms::Label());
			this->labelarr[17] = (gcnew System::Windows::Forms::Label());
			this->labelarr[18] = (gcnew System::Windows::Forms::Label());
			this->labelarr[19] = (gcnew System::Windows::Forms::Label());
			this->labelarr[20] = (gcnew System::Windows::Forms::Label());
			this->labelarr[21] = (gcnew System::Windows::Forms::Label());
			this->labelarr[22] = (gcnew System::Windows::Forms::Label());
			this->labelarr[23] = (gcnew System::Windows::Forms::Label());
			this->labelarr[24] = (gcnew System::Windows::Forms::Label());
			this->labelarr[25] = (gcnew System::Windows::Forms::Label());
			this->labelarr[26] = (gcnew System::Windows::Forms::Label());
			this->labelarr[27] = (gcnew System::Windows::Forms::Label());
			this->labelarr[28] = (gcnew System::Windows::Forms::Label());
			this->labelarr[29] = (gcnew System::Windows::Forms::Label());
			this->labelarr[30] = (gcnew System::Windows::Forms::Label());
			this->labelarr[31] = (gcnew System::Windows::Forms::Label());
			this->labelarr[32] = (gcnew System::Windows::Forms::Label());
			this->labelarr[33] = (gcnew System::Windows::Forms::Label());
			this->labelarr[34] = (gcnew System::Windows::Forms::Label());
			this->labelarr[35] = (gcnew System::Windows::Forms::Label());
			this->labelarr[36] = (gcnew System::Windows::Forms::Label());
			this->labelarr[37] = (gcnew System::Windows::Forms::Label());
			this->labelarr[38] = (gcnew System::Windows::Forms::Label());
			this->labelarr[39] = (gcnew System::Windows::Forms::Label());
			this->labelarr[40] = (gcnew System::Windows::Forms::Label());
			this->labelarr[41] = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonN
			// 
			this->buttonN->BackColor = System::Drawing::Color::LightCyan;
			this->buttonN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonN->ForeColor = System::Drawing::Color::Maroon;
			this->buttonN->Location = System::Drawing::Point(438, 74);
			this->buttonN->Margin = System::Windows::Forms::Padding(4);
			this->buttonN->Name = L"buttonN";
			this->buttonN->Size = System::Drawing::Size(90, 34);
			this->buttonN->TabIndex = 10;
			this->buttonN->Text = L"Tiếp";
			this->buttonN->UseVisualStyleBackColor = false;
			this->buttonN->Click += gcnew System::EventHandler(this, &Callendar::buttonN_Click);
			// 
			// buttonP
			// 
			this->buttonP->BackColor = System::Drawing::Color::LightCyan;
			this->buttonP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonP->ForeColor = System::Drawing::Color::Maroon;
			this->buttonP->Location = System::Drawing::Point(438, 114);
			this->buttonP->Margin = System::Windows::Forms::Padding(4);
			this->buttonP->Name = L"buttonP";
			this->buttonP->Size = System::Drawing::Size(90, 34);
			this->buttonP->TabIndex = 11;
			this->buttonP->Text = L"Trước";
			this->buttonP->UseVisualStyleBackColor = false;
			this->buttonP->Click += gcnew System::EventHandler(this, &Callendar::buttonP_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(418, -76);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 621);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(533, 373);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 50);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Callendar::button1_Click);
			// 
			// labelm
			// 
			this->labelm->AutoSize = true;
			this->labelm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelm->ForeColor = System::Drawing::Color::Maroon;
			this->labelm->Location = System::Drawing::Point(40, 22);
			this->labelm->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelm->Name = L"labelm";
			this->labelm->Size = System::Drawing::Size(351, 29);
			this->labelm->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(77, 373);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 50);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Tất cả sự kiện";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Callendar::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(244, 373);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 50);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Thêm sự kiện";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Callendar::button3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::MistyRose;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.54128F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.45872F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				54)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				53)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				54)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				53)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->labelarr[41], 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[40], 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[39], 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[38], 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[37], 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[36], 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[35], 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[34], 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[33], 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[32], 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[31], 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[30], 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[29], 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[28], 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[27], 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[26], 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[25], 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[24], 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[23], 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[22], 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[21], 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[20], 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[19], 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[18], 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[17], 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[16], 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[15], 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[14], 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[13], 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[12], 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[11], 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[10], 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[9], 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[8], 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[7], 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[6], 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[5], 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[4], 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[3], 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[2], 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[1], 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelc, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelb, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->labela, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labeld, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->labele, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelf, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelg, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelarr[0], 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(37, 76);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 43)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37.52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37.52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37.52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37.52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37.52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37.52)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(379, 274);
			this->tableLayoutPanel1->TabIndex = 17;
			// 
			// labelc
			// 
			this->labelc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelc->AutoSize = true;
			this->labelc->ForeColor = System::Drawing::Color::DarkCyan;
			this->labelc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelc->Location = System::Drawing::Point(113, 1);
			this->labelc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelc->Name = "labelc";
			this->labelc->Size = System::Drawing::Size(46, 37);
			this->labelc->TabIndex = 2;
			this->labelc->Text = "Tue";
			this->labelc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelb
			// 
			this->labelb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelb->AutoSize = true;
			this->labelb->ForeColor = System::Drawing::Color::DarkCyan;
			this->labelb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelb->Location = System::Drawing::Point(59, 1);
			this->labelb->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelb->Name = "labelb";
			this->labelb->Size = System::Drawing::Size(45, 37);
			this->labelb->TabIndex = 1;
			this->labelb->Text = "Mon";
			this->labelb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labela
			// 
			this->labela->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labela->AutoSize = true;
			this->labela->ForeColor = System::Drawing::Color::DarkCyan;
			this->labela->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labela->Location = System::Drawing::Point(5, 1);
			this->labela->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labela->Name = "labela";
			this->labela->Size = System::Drawing::Size(45, 37);
			this->labela->TabIndex = 0;
			this->labela->Text = "Sun";
			this->labela->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labeld
			// 
			this->labeld->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labeld->AutoSize = true;
			this->labeld->ForeColor = System::Drawing::Color::DarkCyan;
			this->labeld->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeld->Location = System::Drawing::Point(167, 1);
			this->labeld->Name = "labeld";
			this->labeld->Size = System::Drawing::Size(47, 37);
			this->labeld->TabIndex = 3;
			this->labeld->Text = "Wed";
			this->labeld->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labele
			// 
			this->labele->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labele->AutoSize = true;
			this->labele->ForeColor = System::Drawing::Color::DarkCyan;
			this->labele->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labele->Location = System::Drawing::Point(221, 1);
			this->labele->Name = "labele";
			this->labele->Size = System::Drawing::Size(48, 37);
			this->labele->TabIndex = 4;
			this->labele->Text = "Thu";
			this->labele->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelf
			// 
			this->labelf->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelf->AutoSize = true;
			this->labelf->ForeColor = System::Drawing::Color::DarkCyan;
			this->labelf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelf->Location = System::Drawing::Point(276, 1);
			this->labelf->Name = "labelf";
			this->labelf->Size = System::Drawing::Size(47, 37);
			this->labelf->TabIndex = 5;
			this->labelf->Text = "Fri";
			this->labelf->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelg
			// 
			this->labelg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelg->AutoSize = true;
			this->labelg->ForeColor = System::Drawing::Color::DarkCyan;
			this->labelg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelg->Location = System::Drawing::Point(330, 1);
			this->labelg->Name = "labelg";
			this->labelg->Size = System::Drawing::Size(45, 37);
			this->labelg->TabIndex = 6;
			this->labelg->Text = "Sat";
			this->labelg->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelarr[0]
			// 
			this->labelarr[0]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[0]->AutoSize = true;
			this->labelarr[0]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[0]->Location = System::Drawing::Point(4, 39);
			this->labelarr[0]->Name = L"labelArr[0]";
			this->labelarr[0]->Size = System::Drawing::Size(47, 44);
			this->labelarr[0]->TabIndex = 7;
			this->labelarr[0]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[0]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[1]
			// 
			this->labelarr[1]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[1]->AutoSize = true;
			this->labelarr[1]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[1]->Location = System::Drawing::Point(58, 39);
			this->labelarr[1]->Name = L"labelarr[1]";
			this->labelarr[1]->Size = System::Drawing::Size(47, 44);
			this->labelarr[1]->TabIndex = 8;
			this->labelarr[1]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[1]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[2]
			// 
			this->labelarr[2]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[2]->AutoSize = true;
			this->labelarr[2]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[2]->Location = System::Drawing::Point(112, 39);
			this->labelarr[2]->Name = L"labelarr[2]";
			this->labelarr[2]->Size = System::Drawing::Size(48, 44);
			this->labelarr[2]->TabIndex = 9;
			this->labelarr[2]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[2]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[3]
			// 
			this->labelarr[3]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[3]->AutoSize = true;
			this->labelarr[3]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[3]->Location = System::Drawing::Point(167, 39);
			this->labelarr[3]->Name = L"labelarr[3]";
			this->labelarr[3]->Size = System::Drawing::Size(47, 44);
			this->labelarr[3]->TabIndex = 10;
			this->labelarr[3]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[3]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[4]
			// 
			this->labelarr[4]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[4]->AutoSize = true;
			this->labelarr[4]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[4]->Location = System::Drawing::Point(221, 39);
			this->labelarr[4]->Name = L"labelarr[4]";
			this->labelarr[4]->Size = System::Drawing::Size(48, 44);
			this->labelarr[4]->TabIndex = 11;
			this->labelarr[4]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[4]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[5]
			// 
			this->labelarr[5]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[5]->AutoSize = true;
			this->labelarr[5]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[5]->Location = System::Drawing::Point(276, 39);
			this->labelarr[5]->Name = L"labelarr[5]";
			this->labelarr[5]->Size = System::Drawing::Size(47, 44);
			this->labelarr[5]->TabIndex = 12;
			this->labelarr[5]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[5]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[6]
			// 
			this->labelarr[6]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[6]->AutoSize = true;
			this->labelarr[6]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[6]->Location = System::Drawing::Point(330, 39);
			this->labelarr[6]->Name = L"labelarr[6]";
			this->labelarr[6]->Size = System::Drawing::Size(45, 44);
			this->labelarr[6]->TabIndex = 13;
			this->labelarr[6]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[6]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[7]
			// 
			this->labelarr[7]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[7]->AutoSize = true;
			this->labelarr[7]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[7]->Location = System::Drawing::Point(4, 84);
			this->labelarr[7]->Name = L"labelarr[7]";
			this->labelarr[7]->Size = System::Drawing::Size(47, 49);
			this->labelarr[7]->TabIndex = 14;
			this->labelarr[7]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[7]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[8]
			// 
			this->labelarr[8]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[8]->AutoSize = true;
			this->labelarr[8]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[8]->Location = System::Drawing::Point(58, 84);
			this->labelarr[8]->Name = L"labelarr[8]";
			this->labelarr[8]->Size = System::Drawing::Size(47, 49);
			this->labelarr[8]->TabIndex = 15;
			this->labelarr[8]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[8]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[9]
			// 
			this->labelarr[9]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[9]->AutoSize = true;
			this->labelarr[9]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[9]->Location = System::Drawing::Point(112, 84);
			this->labelarr[9]->Name = L"labelarr[9]";
			this->labelarr[9]->Size = System::Drawing::Size(48, 49);
			this->labelarr[9]->TabIndex = 16;
			this->labelarr[9]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[9]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[10]
			// 
			this->labelarr[10]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[10]->AutoSize = true;
			this->labelarr[10]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[10]->Location = System::Drawing::Point(167, 84);
			this->labelarr[10]->Name = L"labelarr[10]";
			this->labelarr[10]->Size = System::Drawing::Size(47, 49);
			this->labelarr[10]->TabIndex = 17;
			this->labelarr[10]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[10]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[11]
			// 
			this->labelarr[11]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[11]->AutoSize = true;
			this->labelarr[11]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[11]->Location = System::Drawing::Point(221, 84);
			this->labelarr[11]->Name = L"labelarr[11]";
			this->labelarr[11]->Size = System::Drawing::Size(48, 49);
			this->labelarr[11]->TabIndex = 18;
			this->labelarr[11]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[11]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[12]
			// 
			this->labelarr[12]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[12]->AutoSize = true;
			this->labelarr[12]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[12]->Location = System::Drawing::Point(276, 84);
			this->labelarr[12]->Name = L"labelarr[12]";
			this->labelarr[12]->Size = System::Drawing::Size(47, 49);
			this->labelarr[12]->TabIndex = 19;
			this->labelarr[12]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[12]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[13]
			// 
			this->labelarr[13]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[13]->AutoSize = true;
			this->labelarr[13]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[13]->Location = System::Drawing::Point(330, 84);
			this->labelarr[13]->Name = L"labelarr[13]";
			this->labelarr[13]->Size = System::Drawing::Size(45, 49);
			this->labelarr[13]->TabIndex = 20;
			this->labelarr[13]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[13]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[14]
			// 
			this->labelarr[14]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[14]->AutoSize = true;
			this->labelarr[14]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[14]->Location = System::Drawing::Point(4, 134);
			this->labelarr[14]->Name = L"labelarr[14]";
			this->labelarr[14]->Size = System::Drawing::Size(47, 46);
			this->labelarr[14]->TabIndex = 21;
			this->labelarr[14]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[14]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[15]
			// 
			this->labelarr[15]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[15]->AutoSize = true;
			this->labelarr[15]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[15]->Location = System::Drawing::Point(58, 134);
			this->labelarr[15]->Name = L"labelarr[15]";
			this->labelarr[15]->Size = System::Drawing::Size(47, 46);
			this->labelarr[15]->TabIndex = 22;
			this->labelarr[15]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[15]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[16]
			// 
			this->labelarr[16]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[16]->AutoSize = true;
			this->labelarr[16]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[16]->Location = System::Drawing::Point(112, 134);
			this->labelarr[16]->Name = L"labelarr[16]";
			this->labelarr[16]->Size = System::Drawing::Size(48, 46);
			this->labelarr[16]->TabIndex = 23;
			this->labelarr[16]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[16]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[17]
			// 
			this->labelarr[17]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[17]->AutoSize = true;
			this->labelarr[17]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[17]->Location = System::Drawing::Point(167, 134);
			this->labelarr[17]->Name = L"labelarr[17]";
			this->labelarr[17]->Size = System::Drawing::Size(47, 46);
			this->labelarr[17]->TabIndex = 24;
			this->labelarr[17]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[17]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[18]
			// 
			this->labelarr[18]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[18]->AutoSize = true;
			this->labelarr[18]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[18]->Location = System::Drawing::Point(221, 134);
			this->labelarr[18]->Name = L"labelarr[18]";
			this->labelarr[18]->Size = System::Drawing::Size(48, 46);
			this->labelarr[18]->TabIndex = 25;
			this->labelarr[18]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[18]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[19]
			// 
			this->labelarr[19]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[19]->AutoSize = true;
			this->labelarr[19]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[19]->Location = System::Drawing::Point(276, 134);
			this->labelarr[19]->Name = L"labelarr[19]";
			this->labelarr[19]->Size = System::Drawing::Size(47, 46);
			this->labelarr[19]->TabIndex = 26;
			this->labelarr[19]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[19]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[20]
			// 
			this->labelarr[20]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[20]->AutoSize = true;
			this->labelarr[20]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[20]->Location = System::Drawing::Point(330, 134);
			this->labelarr[20]->Name = L"labelarr[20]";
			this->labelarr[20]->Size = System::Drawing::Size(45, 46);
			this->labelarr[20]->TabIndex = 27;
			this->labelarr[20]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[20]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[21]
			// 
			this->labelarr[21]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[21]->AutoSize = true;
			this->labelarr[21]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[21]->Location = System::Drawing::Point(4, 181);
			this->labelarr[21]->Name = L"labelarr[21]";
			this->labelarr[21]->Size = System::Drawing::Size(47, 47);
			this->labelarr[21]->TabIndex = 28;
			this->labelarr[21]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[21]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[22]
			// 
			this->labelarr[22]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[22]->AutoSize = true;
			this->labelarr[22]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[22]->Location = System::Drawing::Point(58, 181);
			this->labelarr[22]->Name = L"labelarr[22]";
			this->labelarr[22]->Size = System::Drawing::Size(47, 47);
			this->labelarr[22]->TabIndex = 29;
			this->labelarr[22]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[22]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[23]
			// 
			this->labelarr[23]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[23]->AutoSize = true;
			this->labelarr[23]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[23]->Location = System::Drawing::Point(112, 181);
			this->labelarr[23]->Name = L"labelarr[23]";
			this->labelarr[23]->Size = System::Drawing::Size(48, 47);
			this->labelarr[23]->TabIndex = 30;
			this->labelarr[23]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[23]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[24]
			// 
			this->labelarr[24]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[24]->AutoSize = true;
			this->labelarr[24]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[24]->Location = System::Drawing::Point(167, 181);
			this->labelarr[24]->Name = L"labelarr[24]";
			this->labelarr[24]->Size = System::Drawing::Size(47, 47);
			this->labelarr[24]->TabIndex = 31;
			this->labelarr[24]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[24]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[25]
			// 
			this->labelarr[25]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[25]->AutoSize = true;
			this->labelarr[25]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[25]->Location = System::Drawing::Point(221, 181);
			this->labelarr[25]->Name = L"labelarr[25]";
			this->labelarr[25]->Size = System::Drawing::Size(48, 47);
			this->labelarr[25]->TabIndex = 32;
			this->labelarr[25]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[25]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[26]
			// 
			this->labelarr[26]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[26]->AutoSize = true;
			this->labelarr[26]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[26]->Location = System::Drawing::Point(276, 181);
			this->labelarr[26]->Name = L"labelarr[26]";
			this->labelarr[26]->Size = System::Drawing::Size(47, 47);
			this->labelarr[26]->TabIndex = 33;
			this->labelarr[26]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[26]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[27]
			// 
			this->labelarr[27]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[27]->AutoSize = true;
			this->labelarr[27]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[27]->Location = System::Drawing::Point(330, 181);
			this->labelarr[27]->Name = L"labelarr[27]";
			this->labelarr[27]->Size = System::Drawing::Size(45, 47);
			this->labelarr[27]->TabIndex = 34;
			this->labelarr[27]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[27]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[28]
			// 
			this->labelarr[28]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[28]->AutoSize = true;
			this->labelarr[28]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[28]->Location = System::Drawing::Point(4, 229);
			this->labelarr[28]->Name = L"labelarr[28]";
			this->labelarr[28]->Size = System::Drawing::Size(47, 44);
			this->labelarr[28]->TabIndex = 35;
			this->labelarr[28]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[28]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[29]
			// 
			this->labelarr[29]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[29]->AutoSize = true;
			this->labelarr[29]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[29]->Location = System::Drawing::Point(58, 229);
			this->labelarr[29]->Name = L"labelarr[29]";
			this->labelarr[29]->Size = System::Drawing::Size(47, 44);
			this->labelarr[29]->TabIndex = 36;
			this->labelarr[29]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[29]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[30]
			// 
			this->labelarr[30]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[30]->AutoSize = true;
			this->labelarr[30]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[30]->Location = System::Drawing::Point(112, 229);
			this->labelarr[30]->Name = L"labelarr[30]";
			this->labelarr[30]->Size = System::Drawing::Size(48, 44);
			this->labelarr[30]->TabIndex = 37;
			this->labelarr[30]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[30]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[31]
			// 
			this->labelarr[31]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[31]->AutoSize = true;
			this->labelarr[31]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[31]->Location = System::Drawing::Point(167, 229);
			this->labelarr[31]->Name = L"labelarr[31]";
			this->labelarr[31]->Size = System::Drawing::Size(47, 44);
			this->labelarr[31]->TabIndex = 38;
			this->labelarr[31]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[31]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[32]
			// 
			this->labelarr[32]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[32]->AutoSize = true;
			this->labelarr[32]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[32]->Location = System::Drawing::Point(221, 229);
			this->labelarr[32]->Name = L"labelarr[32]";
			this->labelarr[32]->Size = System::Drawing::Size(48, 44);
			this->labelarr[32]->TabIndex = 39;
			this->labelarr[32]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[32]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[33]
			// 
			this->labelarr[33]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[33]->AutoSize = true;
			this->labelarr[33]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[33]->Location = System::Drawing::Point(276, 229);
			this->labelarr[33]->Name = L"labelarr[33]";
			this->labelarr[33]->Size = System::Drawing::Size(47, 44);
			this->labelarr[33]->TabIndex = 40;
			this->labelarr[33]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[33]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[34]
			// 
			this->labelarr[34]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[34]->AutoSize = true;
			this->labelarr[34]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[34]->Location = System::Drawing::Point(330, 229);
			this->labelarr[34]->Name = L"labelarr[34]";
			this->labelarr[34]->Size = System::Drawing::Size(45, 44);
			this->labelarr[34]->TabIndex = 41;
			this->labelarr[34]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[34]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[35]
			// 
			this->labelarr[35]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[35]->AutoSize = true;
			this->labelarr[35]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[35]->Location = System::Drawing::Point(330, 229);
			this->labelarr[35]->Name = L"labelarr[35]";
			this->labelarr[35]->Size = System::Drawing::Size(45, 44);
			this->labelarr[35]->TabIndex = 42;
			this->labelarr[35]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[35]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[36]
			// 
			this->labelarr[36]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[36]->AutoSize = true;
			this->labelarr[36]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[36]->Location = System::Drawing::Point(330, 229);
			this->labelarr[36]->Name = L"labelarr[36]";
			this->labelarr[36]->Size = System::Drawing::Size(45, 44);
			this->labelarr[36]->TabIndex = 43;
			this->labelarr[36]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[36]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[37]
			// 
			this->labelarr[37]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[37]->AutoSize = true;
			this->labelarr[37]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[37]->Location = System::Drawing::Point(330, 229);
			this->labelarr[37]->Name = L"labelarr[37]";
			this->labelarr[37]->Size = System::Drawing::Size(45, 44);
			this->labelarr[37]->TabIndex = 44;
			this->labelarr[37]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[37]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[38]
			// 
			this->labelarr[38]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[38]->AutoSize = true;
			this->labelarr[38]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[38]->Location = System::Drawing::Point(330, 229);
			this->labelarr[38]->Name = L"labelarr[38]";
			this->labelarr[38]->Size = System::Drawing::Size(45, 44);
			this->labelarr[38]->TabIndex = 45;
			this->labelarr[38]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[38]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[39]
			// 
			this->labelarr[39]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[39]->AutoSize = true;
			this->labelarr[39]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[39]->Location = System::Drawing::Point(330, 229);
			this->labelarr[39]->Name = L"labelarr[39]";
			this->labelarr[39]->Size = System::Drawing::Size(45, 44);
			this->labelarr[39]->TabIndex = 46;
			this->labelarr[39]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[39]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[40]
			// 
			this->labelarr[40]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[40]->AutoSize = true;
			this->labelarr[40]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[40]->Location = System::Drawing::Point(330, 229);
			this->labelarr[40]->Name = L"labelarr[40]";
			this->labelarr[40]->Size = System::Drawing::Size(45, 44);
			this->labelarr[40]->TabIndex = 47;
			this->labelarr[40]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[40]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			// 
			// labelarr[41]
			// 
			this->labelarr[41]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelarr[41]->AutoSize = true;
			this->labelarr[41]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelarr[41]->Location = System::Drawing::Point(330, 229);
			this->labelarr[41]->Name = L"labelarr[41]";
			this->labelarr[41]->Size = System::Drawing::Size(45, 44);
			this->labelarr[41]->TabIndex = 48;
			this->labelarr[41]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelarr[41]->Click += gcnew System::EventHandler(this, &Callendar::labelarr_Click);
			//
			// Day date
			//
			time_t theTime = time(0);
			struct tm *aTime = localtime(&theTime);
			int day = aTime->tm_mday;
			int monthc = aTime->tm_mon + 1;
			int year, month;
			std::ifstream cal("Data\\cal.txt");
			cal >> month >> year;
			cal.close();
			yearx = year;
			int dayNumber = 0;
			int day1 = 1;
			monthx = month;
			int days = 0;
			dayNumber = (day1 + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
				(365 * (year + 4800 - ((14 - month) / 12))) +
				((year + 4800 - ((14 - month) / 12)) / 4) -
				((year + 4800 - ((14 - month) / 12)) / 100) +
				((year + 4800 - ((14 - month) / 12)) / 400) - 32045) % 7;
			// Day number in month
			// January 
			if (month == 1)
				days = 31;
			// February 
			if (month == 2)
			{
				// If the year is leap then February has 29 days 
				if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
					days = 29;
				else
					days = 28;
			}
			// March 
			if (month == 3)
				days = 31;
			// April 
			if (month == 4)
				days = 30;
			// May 
			if (month == 5)
				days = 31;
			// June 
			if (month == 6)
				days = 30;
			// July 
			if (month == 7)
				days = 31;
			// August 
			if (month == 8)
				days = 31;
			// September 
			if (month == 9)
				days = 30;
			// October 
			if (month == 10)
				days = 31;
			// November 
			if (month == 11)
				days = 30;
			// December 
			if (month == 12)
				days = 31;
			// Print callendar
			int dd = 1;
			int k, j;
			for (k = 1; k < dayNumber; k++)
			{
				this->labelarr[k]->Text = L" ";
			}
			kk2x = k;
			// Print date at appropriate week day
			for (j = 1; j <= days; j++)
			{
				this->labelarr[k + j]->Text = Convert::ToString(dd);
				if ((day == dd) && (monthc == month)) this->labelarr[k + j]->BackColor = System::Drawing::Color::PeachPuff;
				dd++;
			}
			// 
			// Callendar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(705, 443);
			this->ControlBox = false;
			this->Controls->Add(this->buttonN);
			this->Controls->Add(this->buttonP);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelm);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Callendar";
			this->Text = L"NHHH1 - Lịch";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
			//
			// Event input
			//
			int rows = 0;
			std::ifstream rc("Data\\rc.txt");
			rc >> rows;
			rc.close();
			std::ifstream file("Data\\t.txt");
			int** a = new int*[rows];
			for (int h = 0; h < rows; ++h)
				a[h] = new int[3];

			for (int q = 0; q < rows; ++q)
			{
				for (int m = 0; m < 3; ++m)
				{
					file >> a[q][m];
					file.get(); // Throw away the comma
				}
			}
			file.close();
			//
			// Memor Input
			//
			int rows2 = 0;
			std::ifstream rc2("Data\\rc2.txt");
			rc2 >> rows2;
			rc2.close();
			std::ifstream file2("Data\\t2.txt");
			int** a2 = new int*[rows2];
			for (int h2 = 0; h2 < rows2; ++h2)
				a2[h2] = new int[3];

			for (int q2 = 0; q2 < rows; ++q2)
			{
				for (int m2 = 0; m2 < 3; ++m2)
				{
					file2 >> a2[q2][m2];
					file2.get(); // Throw away the comma
				}
			}
			file2.close();
			//
			// Event show
			//
			int tempx[42];
			int ddd = 1;
			for (int j = 1; j <= days; j++)
			{
				tempx[j] = 0;
				for (int q = 0; q < rows2; ++q)
				{
					if ((j == a2[q][0]) && (month == a2[q][1]))
					{
						tempx[j] = tempx[j] + 1;
					}
				}
				for (int q = 0; q < rows; ++q)
				{
					if ((j == a[q][0]) && (month == a[q][1]))
					{
						tempx[j] = tempx[j] + 2;
					}
				}
			}
			for (int j = 1; j <= days; j++)
			{
				if (tempx[j] == 3)
				{
					this->labelarr[k + j]->ForeColor = System::Drawing::Color::Red;
				}
				else if (tempx[j] == 2)
				{
					this->labelarr[k + j]->ForeColor = System::Drawing::Color::DodgerBlue;
				}
				else if (tempx[j] == 1)
				{
					this->labelarr[k + j]->ForeColor = System::Drawing::Color::LimeGreen;
				}
			}
			this->labelm->Text = "Tháng " + month + ", " + year;
		}
#pragma endregion
		//
		// Trở lại clicked
		//
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 time_t theTime2 = time(0);
				 struct tm *aTime2 = localtime(&theTime2);
				 int month2 = aTime2->tm_mon + 1;
				 int year2 = aTime2->tm_year + 1900;
				 std::ofstream calC("Data\\cal.txt");
				 calC << month2 << " " << year2;
				 calC.close();
				 this->Hide();
				 sf2->Show();
	}
			 //
			 // Thêm sự kiện clicked
			 //
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Hide();
				 CallendarADD ^ cll = gcnew CallendarADD(this);
				 cll->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Hide();
				 CallendarALL ^ clla = gcnew CallendarALL(this);
				 clla->ShowDialog();
	}
			 //
			 // Label clicked
			 //
	private: System::Void labelarr_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 int ttt, tttx;
				 String^ labelname = safe_cast<Label^>(sender)->Name;
				 std::string labelname2 = msclr::interop::marshal_as<std::string>(labelname);
				 for (int tt = 0; tt < 42; tt++)
				 {
					 String^ labelname3 = safe_cast<Label^>(labelarr[tt])->Name;
					 std::string labelname4 = msclr::interop::marshal_as<std::string>(labelname3);
					 int cc = labelname4.compare(labelname2);
					 if (cc == 0)
					 {
						 ttt = tt - kk2x;
						 std::ofstream temp("Data\\temp.txt");
						 temp << ttt << " " << monthx << " " << yearx;
						 tttx = tt;
					 }
				 }
				 if (tttx > kk2x)
				 {
					 CallendarDetail ^ cldd = gcnew CallendarDetail();
					 cldd->Show();
				 }
	}
			 // Next/Prev Clicked
	private: System::Void buttonN_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 int year, month;
				 std::ifstream calN("Data\\cal.txt");
				 calN >> month >> year;
				 calN.close();
				 if (month == 12)
				 {
					 year = year + 1;
					 month = 1;
				 }
				 else month = month + 1;
				 std::ofstream calNN("Data\\cal.txt");
				 calNN << month << " " << year;
				 calNN.close();
				 this->Controls->Clear();
				 this->InitializeComponent();
	}
	private: System::Void buttonP_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 int year, month;
				 std::ifstream calP("Data\\cal.txt");
				 calP >> month >> year;
				 calP.close();
				 if (month == 1)
				 {
					 year = year - 1;
					 month = 12;
				 }
				 else month = month - 1;
				 std::ofstream calPP("Data\\cal.txt");
				 calPP << month << " " << year;
				 calPP.close();
				 this->Controls->Clear();
				 this->InitializeComponent();
	}
	};
}
