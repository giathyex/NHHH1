#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <Windows.h>
#include <fcntl.h>
#include <codecvt>
#include <msclr\marshal_cppstd.h>
#pragma once

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MemorADD2
	/// </summary>
	public ref class MemorADD2 : public System::Windows::Forms::Form
	{
	public:
		MemorADD2(void)
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
		~MemorADD2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MemorADD2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(418, -76);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 621);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(57, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 50);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Bà click vào ảnh muốn sửa \r\nthông tin ở cửa sổ Album trước nha";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(28, 16);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(369, 114);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			long int item2, item3;
			std::ifstream edia2("Picture\\Data\\temp2.txt");
			edia2 >> item2;
			edia2.close();
			std::ifstream edia3("Picture\\Data\\rc.txt");
			edia3 >> item3;
			edia3.close();
			if (item2 <= item3)
			{
				std::string c2 = std::to_string(item2);
				String ^ cc2 = msclr::interop::marshal_as<String^>(c2);
				String ^ a2 = "Picture\\" + cc2 + ".png";
				pictureBox2->Load(a2);
			}
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(89, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 24);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Chọn lại ngày của bức ảnh:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd, MM, yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(28, 169);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(369, 27);
			this->dateTimePicker1->TabIndex = 23;
			this->dateTimePicker1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(86, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 24);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Chọn lại nơi ảnh được chụp:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Tây Ninh", L"Sài Gòn", L"Đà Lạt" });
			this->comboBox1->Location = System::Drawing::Point(28, 235);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(369, 28);
			this->comboBox1->TabIndex = 10000000;
			this->comboBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(129, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 24);
			this->label4->TabIndex = 10000001;
			this->label4->Text = L"Nhập lại nội dung:";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(28, 303);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(369, 109);
			this->textBox2->TabIndex = 10000002;
			this->textBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(433, 27);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 50);
			this->button1->TabIndex = 10000003;
			this->button1->Text = L"Sửa";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MemorADD2::button1_Click);
			// Show item
			if (item2 == 999999999)
			{
				this->pictureBox2->Visible = false;
				this->label2->Visible = false;
				this->dateTimePicker1->Visible = false;
				this->label3->Visible = false;
				this->label4->Visible = false;
				this->textBox2->Visible = false;
				this->button1->Visible = false;
				this->comboBox1->Visible = false;
				this->label1->Visible = true;
			}
			else
			{
				this->pictureBox2->Visible = true;
				this->label2->Visible = true;
				this->dateTimePicker1->Visible = true;
				this->label3->Visible = true;
				this->label4->Visible = true;
				this->textBox2->Visible = true;
				this->button1->Visible = true;
				this->comboBox1->Visible = true;
				this->label1->Visible = false;
				std::wstring da2;
				std::wifstream ta2(L"Picture\\Data\\t.txt");
				for (int i = 0; i < item3; i++)
				{
					if (i == item2)
					{
						std::getline(ta2, da2);
					}
				}
				ta2.close();
				String ^ da2x = msclr::interop::marshal_as<String^>(da2);
				this->dateTimePicker1->Value = DateTime::ParseExact(da2x, "dd, MM, yyyy", nullptr);
				System::Text::Encoding::Default;
				String ^ ga2;
				String ^ ga22;
				using namespace System::IO;
				StreamReader^ gea2 = gcnew StreamReader(L"Picture\\Data\\g.txt", System::Text::Encoding::UTF8);
				for (int j = 0; j < item3; j++)
				{
					ga22 = gea2->ReadLine();
					if (j == item2)
					{
						ga2 = ga22;
					}
				}
				gea2->Close();
				this->comboBox1->Text = ga2;
				std::wstring filemm2 = L"Picture\\Data\\" + std::to_wstring(item2) + L".txt";
				String ^ filemxx2 = msclr::interop::marshal_as<String^>(filemm2);
				String ^ ear2;
				using namespace System::IO;
				StreamReader^ reax = gcnew StreamReader(filemxx2, System::Text::Encoding::Default);
				ear2 = reax->ReadToEnd();
				reax->Close();
				std::wstring earx2 = msclr::interop::marshal_as<std::wstring>(ear2);
				std::wstring alla;
				alla = earx2;
				//
				std::wofstream ala(L"Picture\\Data\\temp.txt");
				std::locale mylocale("");
				ala.imbue(mylocale);
				ala << alla << "\r\n";
				ala.close();
				this->textBox2->Text = System::IO::File::ReadAllText(L"Picture\\Data\\temp.txt");
			}
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(50, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(287, 75);
			this->label5->TabIndex = 10000004;
			this->label5->Text = L"Thực hiện hành công. thay đổi\r\sẽ cập nhật khi bà mở lại Album Ảnh";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// MemorADD2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(705, 443);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MemorADD2";
			this->Text = L"NHHH1 - Album ảnh - Sửa";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Sửa
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->pictureBox2->Visible = false;
				 this->label2->Visible = false;
				 this->dateTimePicker1->Visible = false;
				 this->label3->Visible = false;
				 this->label4->Visible = false;
				 this->textBox2->Visible = false;
				 this->button1->Visible = false;
				 this->comboBox1->Visible = false;
				 this->label1->Visible = false;
				 this->label5->Visible = true;
				 String^ DPAI = this->dateTimePicker1->Text;
				 std::string datepickera = msclr::interop::marshal_as<std::string>(DPAI);
				 long int item2, item3;
				 std::ifstream edia222("Picture\\Data\\temp2.txt");
				 edia222 >> item2;
				 edia222.close();
				 std::ifstream edia33("Picture\\Data\\rc.txt");
				 edia33 >> item3;
				 edia33.close();
				 // Edit day
				 std::string* da2i = new std::string[item3];
				 std::ifstream ta2i("Picture\\Data\\t.txt");
				 for (int i = 0; i < item3; i++)
				 {
					 std::getline(ta2i, da2i[i]);
				 }
				 ta2i.close();
				 std::ofstream wrdate2i("Picture\\Data\\t.txt");
				 for (int i = 0; i < item3; i++)
				 {
					 if (i == item2)
					 {
						 da2i[i] = datepickera;
					 }
					 wrdate2i << da2i[i] << "\n";
				 }
				 wrdate2i.close();
				 // Edit location
				 String^ CBA = this->comboBox1->Text;
				 std::wstring loc = msclr::interop::marshal_as<std::wstring>(CBA);
				 std::wstring* ga22 = new std::wstring[item3];
				 std::wifstream gea22(L"Picture\\Data\\g.txt");
				 std::locale utf8(std::locale(), ::new std::codecvt_utf8<wchar_t>);
				 gea22.imbue(utf8);
				 for (int i = 0; i < item3; i++)
				 {
					 std::getline(gea22, ga22[i]);
				 }
				 gea22.close();
				 std::wofstream gea22o(L"Picture\\Data\\g.txt");
				 gea22o.imbue(utf8);
				 for (int i = 0; i < item3; i++)
				 {
					 if (i == item2)
					 {
						 ga22[i] = loc;
					 }
					 gea22o << ga22[i] << "\n";
				 }
				 gea22o.close();
				 // Edit event
				 std::wstring filem = L"Picture\\Data\\" + std::to_wstring(item2) + L".txt";
				 String ^ filemx = msclr::interop::marshal_as<String^>(filem);
				 using namespace System::IO;
				 StreamWriter^ wreax = gcnew StreamWriter(filemx);
				 wreax->WriteLine(textBox2->Text);
				 wreax->Close();
	}
	};
}
