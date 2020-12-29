#include <iostream>
#include <fstream>
#include <string>
#include <io.h>
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
	/// Summary for CallendarEdit
	/// </summary>
	public ref class CallendarEdit : public System::Windows::Forms::Form
	{
	public:
		CallendarEdit(void)
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
		~CallendarEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CallendarEdit::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(48, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 41);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Xóa";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CallendarEdit::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(169, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 41);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Sửa";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CallendarEdit::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(44, 90);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Nhập STT của sự kiện:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MistyRose;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(48, 127);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 26);
			this->textBox1->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(49, 124);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(235, 60);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Chỉnh sửa dữ liệu thành công\r\nThay đổi sẽ cập nhật sau khi bà \r\nđóng cửa sổ Tất c"
				L"ả và mở lại";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(49, 115);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 46);
			this->textBox2->TabIndex = 27;
			this->textBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(44, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Nhập tên của sự kiện:";
			this->label3->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox1->Location = System::Drawing::Point(50, 245);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(246, 24);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"Gửi dữ liệu sự kiện này cho tui\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->AllowDrop = true;
			this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::Maroon;
			this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::Azure;
			this->dateTimePicker2->Checked = false;
			this->dateTimePicker2->CustomFormat = L"hh:mm tt";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(49, 201);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->RightToLeftLayout = true;
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(220, 22);
			this->dateTimePicker2->TabIndex = 24;
			this->dateTimePicker2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(45, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Chọn giờ của sự kiện:";
			this->label2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(46, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Chọn ngày của sự kiện:";
			this->label5->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->AllowDrop = true;
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::Maroon;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Azure;
			this->dateTimePicker1->CustomFormat = L"dd,MM,yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(48, 54);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeftLayout = true;
			this->dateTimePicker1->Size = System::Drawing::Size(222, 23);
			this->dateTimePicker1->TabIndex = 21;
			this->dateTimePicker1->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(110, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 41);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Hoàn tất";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &CallendarEdit::button3_Click);
			// 
			// CallendarEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(529, 360);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CallendarEdit";
			this->Text = L"NHHH1 - Lịch - Chỉnh sửa";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Xóa
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 this->label1->Visible = false;
			 this->textBox1->Visible = false;
			 this->label4->Visible = true;
			 this->button1->Visible = false;
			 this->button2->Visible = false;
			 int a = Convert::ToInt32(textBox1->Text);
			 a = a - 1;
			 //
			 // Edit rows total number
			 //
			 int rows;
			 std::ifstream rc("Data\\rc.txt");
			 rc >> rows;
			 rc.close();
			 int rows2 = rows - 1;
			 std::ofstream rc2("Data\\rc.txt");
			 rc2 << rows2;
			 rc2.close();
			 //
			 // Edit day
			 //
			 std::string* d = new std::string[rows];
			 std::ifstream t("Data\\t.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(t, d[i]);
			 }
			 t.close();
			 std::ofstream to("Data\\t.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 if (i != a)
				 {
					 to << d[i] << "\n";
				 }
			 }
			 to.close();
			 //
			 // Edit time
			 //
			 std::string* h = new std::string[rows];
			 std::ifstream tt("Data\\tt.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(tt, h[i]);
			 }
			 tt.close();
			 std::ofstream tto("Data\\tt.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 if (i != a)
				 {
					 tto << h[i] << "\n";
				 }
			 }
			 tto.close();
			 //
			 // Edit event
			 //
			 std::wstring* ev = new std::wstring[rows];
			 std::wifstream evg(L"Data\\e.txt");
			 std::locale utf8(std::locale(), ::new std::codecvt_utf8<wchar_t>);
			 evg.imbue(utf8);
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(evg, ev[i]);
			 }
			 evg.close();
			 std::wofstream evgo("Data\\e.txt");
			 evgo.imbue(utf8);
			 for (int i = 0; i < rows; i++)
			 {
				 if (i != a)
				 {
					 evgo << ev[i] << "\n";
				 }
			 }
			 evgo.close();	 
}
// Sửa
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 this->label3->Visible = true;
			 this->label2->Visible = true;
			 this->button3->Visible = true;
			 this->dateTimePicker1->Visible = true;
			 this->dateTimePicker2->Visible = true;
			 this->textBox2->Visible = true;
			 this->label5->Visible = true;
			 this->label1->Visible = false;
			 this->textBox1->Visible = false;
			 this->checkBox1->Visible = true;
			 this->button1->Visible = false;
			 this->button2->Visible = false;
			 //
			 int a = Convert::ToInt32(textBox1->Text);
			 a = a - 1;
			 int rows;
			 std::ifstream rc("Data\\rc.txt");
			 rc >> rows;
			 std::wstring e0;
			 std::wstring* ev0 = new std::wstring[rows];
			 std::wifstream evg0(L"Data\\e.txt");
			 std::locale utf8(std::locale(), ::new std::codecvt_utf8<wchar_t>);
			 evg0.imbue(utf8);
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(evg0, ev0[i]);
				 if (i == a) e0 = ev0[i];
			 }
			 evg0.close();
			 String^ textboxx0 = msclr::interop::marshal_as<System::String^>(e0);
			 this->textBox2->Text = textboxx0;
			 std::string* d = new std::string[rows];
			 std::ifstream t0("Data\\t.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(t0, d[i]);
				 if (i == a)
				 {
					 String^ d0 = msclr::interop::marshal_as<System::String^>(d[i]);
					 this->dateTimePicker1->Value = DateTime::ParseExact(d0, "dd,MM,yyyy", nullptr);
				 }
			 }
			 t0.close();
			 std::string* h = new std::string[rows];
			 std::ifstream tt0("Data\\tt.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(tt0, h[i]);
				 if (i == a)
				 {
					 String^ h0 = msclr::interop::marshal_as<System::String^>(h[i]);
					 this->dateTimePicker2->Value = DateTime::ParseExact(h0, "hh:mm tt", nullptr);
				 }
			 }
			 tt0.close();
}
// Hoàn tất
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 this->label3->Visible = false;
			 this->label2->Visible = false;
			 this->button3->Visible = false;
			 this->dateTimePicker1->Visible = false;
			 this->dateTimePicker2->Visible = false;
			 this->textBox2->Visible = false;
			 this->label5->Visible = false;
			 this->checkBox1->Visible = false;
			 this->label4->Visible = true;
			 int a = Convert::ToInt32(textBox1->Text);
			 a = a - 1;
			 int rows;
			 std::ifstream rc("Data\\rc.txt");
			 rc >> rows;
			 //
			 // Edit day
			 //
			 String^ DP = this->dateTimePicker1->Text;
			 std::string datepicker = msclr::interop::marshal_as<std::string>(DP);
			 std::string* d = new std::string[rows];
			 std::ifstream t("Data\\t.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(t, d[i]);
			 }
			 t.close();
			 std::ofstream to("Data\\t.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 if (i == a)
				 {
					 d[i] = datepicker;
				 }
				 to << d[i] << "\n";
			 }
			 to.close();
			 //
			 // Edit time
			 //
			 String^ DP2 = this->dateTimePicker2->Text;
			 std::string timepicker = msclr::interop::marshal_as<std::string>(DP2);
			 std::string* h = new std::string[rows];
			 std::ifstream tt("Data\\tt.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(tt, h[i]);
			 }
			 tt.close();
			 std::ofstream tto("Data\\tt.txt");
			 for (int i = 0; i < rows; i++)
			 {
				 if (i == a)
				 {
					 h[i] = timepicker;
				 }
				 tto << h[i] << "\n";
			 }
			 tto.close();
			 //
			 // Edit event
			 //
			 String^ EV = this->textBox2->Text;
			 std::wstring ev2 = msclr::interop::marshal_as<std::wstring>(EV);
			 std::wstring* ev = new std::wstring[rows];
			 std::wifstream evg(L"Data\\e.txt");
			 std::locale utf8(std::locale(), ::new std::codecvt_utf8<wchar_t>);
			 evg.imbue(utf8);
			 for (int i = 0; i < rows; i++)
			 {
				 std::getline(evg, ev[i]);
			 }
			 evg.close();
			 std::wofstream evgo("Data\\e.txt");
			 evgo.imbue(utf8);
			 for (int i = 0; i < rows; i++)
			 {
				 if (i == a)
				 {
					 ev[i] = ev2;
				 }
				 evgo << ev[i] << "\n";
			 }
			 evgo.close();
}
};
}
