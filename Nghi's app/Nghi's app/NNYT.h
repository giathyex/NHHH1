#pragma once
#include "NNYTProgress.h"
#include <fstream>
#include <iostream>
#include <ctime>

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for NNYT
	/// </summary>
	public ref class NNYT : public System::Windows::Forms::Form
	{


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureHome11;
	private: System::Windows::Forms::PictureBox^  pictureHome12;
	private: System::Windows::Forms::PictureBox^  pictureHome13;
	private: System::Windows::Forms::PictureBox^  pictureHome14;
	private: System::Windows::Forms::PictureBox^  pictureHome15;
	private: System::Windows::Forms::PictureBox^  pictureHome16;
	private: System::Windows::Forms::PictureBox^  pictureHome17;
	private: System::Windows::Forms::PictureBox^  pictureHome18;
	private: System::Windows::Forms::PictureBox^  pictureHome19;
	private: System::Windows::Forms::PictureBox^  pictureHome110;
	private: System::Windows::Forms::PictureBox^  pictureHome111;
	private: System::Windows::Forms::PictureBox^  pictureHome112;
	private: System::Windows::Forms::PictureBox^  pictureHome113;
	private: System::Windows::Forms::PictureBox^  pictureHome114;
	private: System::Windows::Forms::PictureBox^  pictureHome115;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	public:
		Form ^ sf;
		NNYT(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NNYT(Form ^ nnyt)
		{
			sf = nnyt;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NNYT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picture;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NNYT::typeid));
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureHome11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome110 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome111 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome112 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome113 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome114 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureHome115 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome112))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome113))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome114))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome115))->BeginInit();
			this->SuspendLayout();
			// 
			// picture
			// 
			this->picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture.Image")));
			this->picture->Location = System::Drawing::Point(315, -42);
			this->picture->Margin = System::Windows::Forms::Padding(4);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(314.25, 465.75);
			this->picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture->TabIndex = 10;
			this->picture->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(400, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 41);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NNYT::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(27, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 22);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Hôm nay bà có buồn gì tui không\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(28, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 41);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Không";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &NNYT::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(184, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 41);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Có";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &NNYT::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(34, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(281, 44);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Tui xin lỗi, tui có làm bà buồn thì \r\nnói tui nha. Đừng bơ tui :(";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(57, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 44);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Bà biết tui yêu bà nhiều mà\r\nBà vui là tui vui :>";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightCyan;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(400, 250);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 41);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Quá trình";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &NNYT::button4_Click);
			// 
			// pictureHome11
			// 
			this->pictureHome11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome11.Image")));
			this->pictureHome11->Location = System::Drawing::Point(28, 94);
			this->pictureHome11->Name = L"pictureHome11";
			this->pictureHome11->Size = System::Drawing::Size(293, 264);
			this->pictureHome11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome11->TabIndex = 19;
			this->pictureHome11->TabStop = false;
			this->pictureHome11->Visible = false;
			// 
			// pictureHome12
			// 
			this->pictureHome12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome12.Image")));
			this->pictureHome12->Location = System::Drawing::Point(28, 94);
			this->pictureHome12->Name = L"pictureHome12";
			this->pictureHome12->Size = System::Drawing::Size(293, 264);
			this->pictureHome12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome12->TabIndex = 20;
			this->pictureHome12->TabStop = false;
			this->pictureHome12->Visible = false;
			// 
			// pictureHome13
			// 
			this->pictureHome13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome13.Image")));
			this->pictureHome13->Location = System::Drawing::Point(28, 94);
			this->pictureHome13->Name = L"pictureHome13";
			this->pictureHome13->Size = System::Drawing::Size(293, 264);
			this->pictureHome13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome13->TabIndex = 21;
			this->pictureHome13->TabStop = false;
			this->pictureHome13->Visible = false;
			// 
			// pictureHome14
			// 
			this->pictureHome14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome14.Image")));
			this->pictureHome14->Location = System::Drawing::Point(28, 94);
			this->pictureHome14->Name = L"pictureHome14";
			this->pictureHome14->Size = System::Drawing::Size(293, 264);
			this->pictureHome14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome14->TabIndex = 22;
			this->pictureHome14->TabStop = false;
			this->pictureHome14->Visible = false;
			// 
			// pictureHome15
			// 
			this->pictureHome15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome15.Image")));
			this->pictureHome15->Location = System::Drawing::Point(28, 94);
			this->pictureHome15->Name = L"pictureHome15";
			this->pictureHome15->Size = System::Drawing::Size(293, 264);
			this->pictureHome15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome15->TabIndex = 23;
			this->pictureHome15->TabStop = false;
			this->pictureHome15->Visible = false;
			// 
			// pictureHome16
			// 
			this->pictureHome16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome16.Image")));
			this->pictureHome16->Location = System::Drawing::Point(28, 94);
			this->pictureHome16->Name = L"pictureHome16";
			this->pictureHome16->Size = System::Drawing::Size(293, 264);
			this->pictureHome16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome16->TabIndex = 24;
			this->pictureHome16->TabStop = false;
			this->pictureHome16->Visible = false;
			// 
			// pictureHome17
			// 
			this->pictureHome17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome17.Image")));
			this->pictureHome17->Location = System::Drawing::Point(28, 94);
			this->pictureHome17->Name = L"pictureHome17";
			this->pictureHome17->Size = System::Drawing::Size(293, 264);
			this->pictureHome17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome17->TabIndex = 25;
			this->pictureHome17->TabStop = false;
			this->pictureHome17->Visible = false;
			// 
			// pictureHome18
			// 
			this->pictureHome18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome18.Image")));
			this->pictureHome18->Location = System::Drawing::Point(28, 94);
			this->pictureHome18->Name = L"pictureHome18";
			this->pictureHome18->Size = System::Drawing::Size(293, 264);
			this->pictureHome18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome18->TabIndex = 26;
			this->pictureHome18->TabStop = false;
			this->pictureHome18->Visible = false;
			// 
			// pictureHome19
			// 
			this->pictureHome19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome19.Image")));
			this->pictureHome19->Location = System::Drawing::Point(28, 94);
			this->pictureHome19->Name = L"pictureHome19";
			this->pictureHome19->Size = System::Drawing::Size(293, 264);
			this->pictureHome19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome19->TabIndex = 27;
			this->pictureHome19->TabStop = false;
			this->pictureHome19->Visible = false;
			// 
			// pictureHome110
			// 
			this->pictureHome110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome110.Image")));
			this->pictureHome110->Location = System::Drawing::Point(28, 94);
			this->pictureHome110->Name = L"pictureHome110";
			this->pictureHome110->Size = System::Drawing::Size(293, 264);
			this->pictureHome110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome110->TabIndex = 28;
			this->pictureHome110->TabStop = false;
			this->pictureHome110->Visible = false;
			// 
			// pictureHome111
			// 
			this->pictureHome111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome111.Image")));
			this->pictureHome111->Location = System::Drawing::Point(28, 94);
			this->pictureHome111->Name = L"pictureHome111";
			this->pictureHome111->Size = System::Drawing::Size(293, 264);
			this->pictureHome111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome111->TabIndex = 29;
			this->pictureHome111->TabStop = false;
			this->pictureHome111->Visible = false;
			// 
			// pictureHome112
			// 
			this->pictureHome112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome112.Image")));
			this->pictureHome112->Location = System::Drawing::Point(28, 94);
			this->pictureHome112->Name = L"pictureHome112";
			this->pictureHome112->Size = System::Drawing::Size(293, 264);
			this->pictureHome112->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome112->TabIndex = 30;
			this->pictureHome112->TabStop = false;
			this->pictureHome112->Visible = false;
			// 
			// pictureHome113
			// 
			this->pictureHome113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome113.Image")));
			this->pictureHome113->Location = System::Drawing::Point(28, 94);
			this->pictureHome113->Name = L"pictureHome113";
			this->pictureHome113->Size = System::Drawing::Size(293, 264);
			this->pictureHome113->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome113->TabIndex = 31;
			this->pictureHome113->TabStop = false;
			this->pictureHome113->Visible = false;
			// 
			// pictureHome114
			// 
			this->pictureHome114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome114.Image")));
			this->pictureHome114->Location = System::Drawing::Point(28, 94);
			this->pictureHome114->Name = L"pictureHome114";
			this->pictureHome114->Size = System::Drawing::Size(293, 264);
			this->pictureHome114->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome114->TabIndex = 32;
			this->pictureHome114->TabStop = false;
			this->pictureHome114->Visible = false;
			// 
			// pictureHome115
			// 
			this->pictureHome115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureHome115.Image")));
			this->pictureHome115->Location = System::Drawing::Point(28, 94);
			this->pictureHome115->Name = L"pictureHome115";
			this->pictureHome115->Size = System::Drawing::Size(293, 264);
			this->pictureHome115->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureHome115->TabIndex = 33;
			this->pictureHome115->TabStop = false;
			this->pictureHome115->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(35, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(279, 72);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Cảm ơn bà, tui mừng vì bà vui :>\r\nNhưng ngày hôm nay bà \r\nđã xây nhà một lần rồi";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(56, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(235, 72);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Tui xin lỗi vì làm bà buồn :(\r\nNhưng ngày hôm nay \r\nbà đã dỡ nhà một lần rồi";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			//
			// Show current progress
			//
			int clickcountc, homecountc;
			std::ifstream file1;
			file1.open("Data\\Progress.txt");
			file1 >> clickcountc >> homecountc;
			file1.close();
			if (clickcountc == 0)
			{
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome11->Visible = false;
			}
			if (clickcountc == 1)
			{
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome11->Visible = true;
			}
			else if (clickcountc == 2)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome12->Visible = true;
			}
			else if (clickcountc == 3)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome13->Visible = true;
			}
			else if (clickcountc == 4)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome13->Visible = true;
			}
			else if (clickcountc == 5)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome15->Visible = true;
			}
			else if (clickcountc == 6)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome16->Visible = true;
			}
			else if (clickcountc == 7)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome17->Visible = true;
			}
			else if (clickcountc == 8)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome18->Visible = true;
			}
			else if (clickcountc == 9)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome19->Visible = true;
			}
			else if (clickcountc == 10)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome110->Visible = true;
			}
			else if (clickcountc == 11)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome111->Visible = true;
			}
			else if (clickcountc == 12)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome112->Visible = true;
			}
			else if (clickcountc == 13)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome113->Visible = true;
			}
			else if (clickcountc == 14)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome115->Visible = false;
				this->pictureHome114->Visible = true;
			}
			else if (clickcountc == 15)
			{
				this->pictureHome11->Visible = false;
				this->pictureHome12->Visible = false;
				this->pictureHome13->Visible = false;
				this->pictureHome14->Visible = false;
				this->pictureHome15->Visible = false;
				this->pictureHome16->Visible = false;
				this->pictureHome17->Visible = false;
				this->pictureHome18->Visible = false;
				this->pictureHome19->Visible = false;
				this->pictureHome110->Visible = false;
				this->pictureHome111->Visible = false;
				this->pictureHome112->Visible = false;
				this->pictureHome113->Visible = false;
				this->pictureHome114->Visible = false;
				this->pictureHome115->Visible = true;
			}
			// 
			// NNYT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(529, 360);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureHome115);
			this->Controls->Add(this->pictureHome114);
			this->Controls->Add(this->pictureHome113);
			this->Controls->Add(this->pictureHome112);
			this->Controls->Add(this->pictureHome111);
			this->Controls->Add(this->pictureHome110);
			this->Controls->Add(this->pictureHome19);
			this->Controls->Add(this->pictureHome18);
			this->Controls->Add(this->pictureHome17);
			this->Controls->Add(this->pictureHome16);
			this->Controls->Add(this->pictureHome15);
			this->Controls->Add(this->pictureHome14);
			this->Controls->Add(this->pictureHome13);
			this->Controls->Add(this->pictureHome12);
			this->Controls->Add(this->pictureHome11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->picture);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"NNYT";
			this->Text = L"Software for Tú - Ngôi nhà yêu thương";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome112))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome113))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome114))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureHome115))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//
		// Trở lại clicked
		//
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 sf->Show();
	}
			 //
			 // Không clicked
			 //
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //
				 // Only clickable once a day
				 //
				 int Daye1;
				 std::ifstream filepe1;
				 filepe1.open("Data\\Clickable.txt");
				 filepe1 >> Daye1;
				 filepe1.close();
				 struct tm newtime;
				 time_t now = time(0);
				 localtime_s(&newtime, &now);
				 int Daye = newtime.tm_mday;
				 std::ofstream filepe;
				 filepe.open("Data\\Clickable.txt");
				 filepe << Daye;
				 filepe.close();
				 if (Daye1 == Daye)
				 {
					 this->label1->Visible = false;
					 this->button2->Visible = false;
					 this->button3->Visible = false;
					 this->label4->Visible = true;
				 }
				 else
				 {
					 int clickcount, clickcount1, homecount;
					 this->label1->Visible = false;
					 this->button2->Visible = false;
					 this->button3->Visible = false;
					 this->label3->Visible = true;
					 //
					 // Day counter
					 //
					 std::ifstream filep1;
					 filep1.open("Uploader\\ProgressUpload\\Progressp.txt");
					 filep1 >> clickcount1;
					 filep1.close();
					 clickcount1 = clickcount1++;
					 std::ofstream filep2;
					 filep2.open("Uploader\\ProgressUpload\\Progressp.txt");
					 filep2 << clickcount1;
					 filep2.close();
					 //
					 // Home construction
					 //
					 std::ifstream file1;
					 file1.open("Data\\Progress.txt");
					 file1 >> clickcount >> homecount;
					 file1.close();
					 clickcount = clickcount++;
					 std::ofstream file;
					 file.open("Data\\Progress.txt");
					 file << clickcount << " " << homecount;
					 file.close();
					 if (clickcount == 0)
					 {
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome11->Visible = false;
					 }
					 if (clickcount == 1)
					 {
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome11->Visible = true;
					 }
					 else if (clickcount == 2)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome12->Visible = true;
					 }
					 else if (clickcount == 3)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome13->Visible = true;
					 }
					 else if (clickcount == 4)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome13->Visible = true;
					 }
					 else if (clickcount == 5)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome15->Visible = true;
					 }
					 else if (clickcount == 6)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome16->Visible = true;
					 }
					 else if (clickcount == 7)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome17->Visible = true;
					 }
					 else if (clickcount == 8)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome18->Visible = true;
					 }
					 else if (clickcount == 9)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome19->Visible = true;
					 }
					 else if (clickcount == 10)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome110->Visible = true;
					 }
					 else if (clickcount == 11)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome111->Visible = true;
					 }
					 else if (clickcount == 12)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome112->Visible = true;
					 }
					 else if (clickcount == 13)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome113->Visible = true;
					 }
					 else if (clickcount == 14)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome114->Visible = true;
					 }
					 else if (clickcount == 15)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = true;
						 clickcount = clickcount - 15;
						 if (homecount == 10)
							 homecount = homecount - 10;
						 homecount = homecount++;
						 std::ofstream file;
						 file.open("Data\\Progress.txt");
						 file << clickcount << " " << homecount;
						 file.close();
					 }
				 }
	}
			 //
			 // Có clicked
			 //
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 //
				 // Only clickable once a day
				 //
				 int Daye2;
				 std::ifstream filepe2;
				 filepe2.open("Data\\Clickable.txt");
				 filepe2 >> Daye2;
				 filepe2.close();
				 struct tm newtime;
				 time_t now = time(0);
				 localtime_s(&newtime, &now);
				 int Daye = newtime.tm_mday;
				 std::ofstream filepe;
				 filepe.open("Data\\Clickable.txt");
				 filepe << Daye;
				 filepe.close();
				 if (Daye2 == Daye)
				 {
					 this->label1->Visible = false;
					 this->button2->Visible = false;
					 this->button3->Visible = false;
					 this->label5->Visible = true;
				 }
				 else
				 {
					 int clickcount, clickcount1, homecount;
					 this->label1->Visible = false;
					 this->button2->Visible = false;
					 this->button3->Visible = false;
					 this->label2->Visible = true;
					 //
					 // Day counter
					 //
					 std::ifstream filep1;
					 filep1.open("Uploader\\ProgressUpload\\Progressp.txt");
					 filep1 >> clickcount1;
					 filep1.close();
					 if (clickcount1 > 0)
						 clickcount1 = clickcount1--;
					 std::ofstream filep2;
					 filep2.open("Uploader\\ProgressUpload\\Progressp.txt");
					 filep2 << clickcount1;
					 filep2.close();
					 //
					 // Home construction
					 //
					 std::ifstream file1;
					 file1.open("Data\\Progress.txt");
					 file1 >> clickcount >> homecount;
					 file1.close();
					 if (clickcount > 0)
						 clickcount = clickcount--;
					 std::ofstream file;
					 file.open("Data\\Progress.txt");
					 file << clickcount << " " << homecount;
					 file.close();
					 if (clickcount == 0)
					 {
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome11->Visible = false;
					 }
					 if (clickcount == 1)
					 {
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome11->Visible = true;
					 }
					 else if (clickcount == 2)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome12->Visible = true;
					 }
					 else if (clickcount == 3)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome13->Visible = true;
					 }
					 else if (clickcount == 4)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome13->Visible = true;
					 }
					 else if (clickcount == 5)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome15->Visible = true;
					 }
					 else if (clickcount == 6)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome16->Visible = true;
					 }
					 else if (clickcount == 7)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome17->Visible = true;
					 }
					 else if (clickcount == 8)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome18->Visible = true;
					 }
					 else if (clickcount == 9)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome19->Visible = true;
					 }
					 else if (clickcount == 10)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome110->Visible = true;
					 }
					 else if (clickcount == 11)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome111->Visible = true;
					 }
					 else if (clickcount == 12)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome112->Visible = true;
					 }
					 else if (clickcount == 13)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome113->Visible = true;
					 }
					 else if (clickcount == 14)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome115->Visible = false;
						 this->pictureHome114->Visible = true;
					 }
					 else if (clickcount == 15)
					 {
						 this->pictureHome11->Visible = false;
						 this->pictureHome12->Visible = false;
						 this->pictureHome13->Visible = false;
						 this->pictureHome14->Visible = false;
						 this->pictureHome15->Visible = false;
						 this->pictureHome16->Visible = false;
						 this->pictureHome17->Visible = false;
						 this->pictureHome18->Visible = false;
						 this->pictureHome19->Visible = false;
						 this->pictureHome110->Visible = false;
						 this->pictureHome111->Visible = false;
						 this->pictureHome112->Visible = false;
						 this->pictureHome113->Visible = false;
						 this->pictureHome114->Visible = false;
						 this->pictureHome115->Visible = true;
						 clickcount = clickcount - 15;
						 if (homecount > 0)
							 homecount = homecount--;
						 std::ofstream file;
						 file.open("Data\\Progress.txt");
						 file << clickcount << " " << homecount;
						 file.close();
					 }
				 }
	}
			 //
			 // Quá trình clicked
			 //
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 NNYTProgress ^ nnytp = gcnew NNYTProgress(this);
				 nnytp->ShowDialog();
	}
	};
}
