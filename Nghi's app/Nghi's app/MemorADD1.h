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
	/// Summary for MemorADD1
	/// </summary>
	public ref class MemorADD1 : public System::Windows::Forms::Form
	{
	String ^ filedialog;
	private: System::Windows::Forms::Label^  label4;



			 String ^ filedialog2;
	public:
		MemorADD1(void)
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
		~MemorADD1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MemorADD1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(314, -62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 505);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd, MM, yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(29, 86);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(278, 23);
			this->dateTimePicker1->TabIndex = 20;
			this->dateTimePicker1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(86, 59);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 18);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Chọn ngày của bức ảnh:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(84, 119);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 18);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Chọn nơi ảnh được chụp:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(116, 180);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 18);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Nhập nội dung:";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(29, 208);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(277, 89);
			this->textBox2->TabIndex = 24;
			this->textBox2->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Tây Ninh", L"Sài Gòn", L"Đà Lạt" });
			this->comboBox1->Location = System::Drawing::Point(29, 145);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(278, 25);
			this->comboBox1->TabIndex = 9999999;
			this->comboBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(325, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 41);
			this->button1->TabIndex = 10000000;
			this->button1->Text = L"Xong";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MemorADD1::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox1->Location = System::Drawing::Point(71, 309);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(207, 22);
			this->checkBox1->TabIndex = 10000001;
			this->checkBox1->Text = L"Gửi dữ liệu ảnh này cho tui\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(29, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(277, 29);
			this->button2->TabIndex = 10000002;
			this->button2->Text = L"Chọn file ảnh";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MemorADD1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(58, 138);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(233, 60);
			this->label4->TabIndex = 10000003;
			this->label4->Text = L"Thêm ảnh thành công. Thay đổi\r\nsẽ được cập nhật sau khi bà mở\r\nlại cửa sổ Album Ả"
				L"nh";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// MemorADD1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(529, 360);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MemorADD1";
			this->Text = L"NHHH1 - Album ảnh - Thêm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Chọn file ảnh
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 OpenFileDialog ^ add = gcnew OpenFileDialog();
			 add->ShowDialog();
			 filedialog = add->SafeFileName;
			 filedialog2 = add->FileName;
			 this->button2->Text = filedialog;
}
// Xong
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 String^ DPA = this->dateTimePicker1->Text;
			 String^ CBA = this->comboBox1->Text;
			 // Check rows
			 using namespace std;
			 int checkc;
			 std::ifstream check("Picture\\Data\\rc.txt");
			 check >> checkc;
			 checkc = checkc + 1;
			 check.close();
			 std::ofstream check2("Picture\\Data\\rc.txt");
			 check2 << checkc;
			 check2.close();
			 // Copy Image
			 String ^ dialog3 = filedialog2;
			 String ^ dialog4 = filedialog;
			 std::wstring a = msclr::interop::marshal_as<std::wstring>(dialog3);
			 std::wstring b = msclr::interop::marshal_as<std::wstring>(dialog4);
			 std::wstring b1 = L"Picture\\" + b;
			 std::wstring b2 = L"Picture\\" + b;
			 std::wstring c = L"Picture\\" + std::to_wstring(checkc - 1) + L".png";
			 LPCWSTR ax = a.c_str();
			 LPCWSTR b1x = b1.c_str();
			 LPCWSTR b2x = b2.c_str();
			 LPCWSTR bx = b.c_str();
			 LPCWSTR cx = c.c_str();
			 CopyFileW(ax, b1x, 0);
			 _wrename(b2x, cx);
			 // Export info
			 using namespace System::IO;
			 StreamWriter^ wrdate = gcnew StreamWriter("Picture\\Data\\t.txt", true);
			 wrdate->WriteLine(DPA);
			 wrdate->Close();
			 using namespace System::IO;
			 StreamWriter^ wrgeo = gcnew StreamWriter("Picture\\Data\\g.txt", true);
			 wrgeo->WriteLine(CBA);
			 wrgeo->Close();
			 std::wstring filem = L"Picture\\Data\\" + std::to_wstring(checkc - 1) + L".txt";
			 String ^ filemx = msclr::interop::marshal_as<String^>(filem);
			 using namespace System::IO;
			 StreamWriter^ wreax = gcnew StreamWriter(filemx, true);
			 wreax->WriteLine(textBox2->Text);
			 wreax->Close();
			 // Hide
			 this->label4->Visible = true;
			 this->button2->Visible = false;
			 this->label2->Visible = false;
			 this->label3->Visible = false;
			 this->dateTimePicker1->Visible = false;
			 this->textBox2->Visible = false;
			 this->label1->Visible = false;
			 this->comboBox1->Visible = false;
			 this->checkBox1->Visible = false;
			 this->button1->Visible = false;
			 // Checkbox gửi dữ liệu
			 if (checkBox1->Checked)
			 {
			 }
}
};
}
