#pragma once
#include <fstream>
#include <time.h>
#include <string>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <codecvt>
#include <msclr\marshal_cppstd.h>

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CallendarDetail
	/// </summary>
	public ref class CallendarDetail : public System::Windows::Forms::Form
	{
	public:
		CallendarDetail(void)
		{
			InitializeComponent();
			_setmode(_fileno(stdout), _O_U16TEXT);
			_setmode(_fileno(stdin), _O_U16TEXT);
			// Event input
			int rows = 0;
			std::string e;
			std::ifstream rc("Data\\rc.txt");
			rc >> rows;
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
			std::wifstream file2(L"Data\\e.txt");
			std::wstring* event = new std::wstring[rows];
			for (int b = 0; b < rows; b++)
			{
				std::getline(file2, event[b]);
			}
			// Memor input
			int rows2 = 0;
			std::string e2;
			std::ifstream rc2("Data\\rc2.txt");
			rc2 >> rows2;
			std::ifstream file22("Data\\t2.txt");
			int** a2 = new int*[rows];
			for (int h2 = 0; h2 < rows; ++h2)
				a2[h2] = new int[3];

			for (int q2 = 0; q2 < rows2; ++q2)
			{
				for (int m2 = 0; m2 < 3; ++m2)
				{
					file22 >> a2[q2][m2];
					file22.get(); // Throw away the comma
				}
			}
			std::wifstream file222(L"Data\\e2.txt");
			std::wstring* event2 = new std::wstring[rows];
			for (int b2 = 0; b2 < rows2; b2++)
			{
				std::getline(file222, event2[b2]);
			}
			// Check clicked day and output
			int daycl, monthcl, yearcl, rr;
			std::ifstream rcd("Data\\temp.txt");
			rcd >> daycl >> monthcl >> yearcl;
			std::string d = std::to_string(daycl);
			std::string m = std::to_string(monthcl);
			std::string y = std::to_string(yearcl);
			std::string dmy = "\r\n" + d + " - " + m + " - " + y;
			String^ textboxx = msclr::interop::marshal_as<System::String^>(dmy);
			this->textBox2->Text = textboxx;
			for (int q = 0; q < rows; ++q)
			{
				if ((daycl == a[q][0]) && (monthcl == a[q][1]))
				{
					std::wstring e = L"\r\n" + event[q];
					std::wofstream fileo(L"Data\\temp.txt");
					fileo << e;
					fileo.close();
					this->textBox1->Text = System::IO::File::ReadAllText("Data\\temp.txt");
					rr = q;
				}
				if ((daycl == a2[q][0]) && (monthcl == a2[q][1]))
				{
					std::wstring e2 = L"\r\n" + event2[q];
					std::wofstream fileo2(L"Data\\temp2.txt");
					fileo2 << e2;
					fileo2.close();
					this->textBox4->Text = System::IO::File::ReadAllText("Data\\temp2.txt");
				}
			}
			// Output time of event
			std::string line, line2;
			std::ifstream timett("Data\\tt.txt");
			for (int lineno = 0; lineno < rows; lineno++)
			{
				getline(timett, line);
				if (lineno != rr)
				{
					this->textBox3->Text = L"\r\nKhông có sự kiện";
				}
				else if (lineno == rr)
				{
					line2 = "\r\n" + line;
					String^ textboxxx = msclr::interop::marshal_as<System::String^>(line2);
					this->textBox3->Text = textboxxx;
					break;
				}
			}
			timett.close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CallendarDetail()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CallendarDetail::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MistyRose;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->textBox1->Location = System::Drawing::Point(34, 110);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(244, 129);
			this->textBox1->TabIndex = 2;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"\r\nKhông có sự kiện";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::MistyRose;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(34, 29);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(114, 57);
			this->textBox2->TabIndex = 3;
			this->textBox2->TabStop = false;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::MistyRose;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(164, 29);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(114, 57);
			this->textBox3->TabIndex = 4;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L"\r\n";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::MistyRose;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(34, 253);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(244, 78);
			this->textBox4->TabIndex = 5;
			this->textBox4->TabStop = false;
			this->textBox4->Text = L"\r\nKhông có kỷ niệm";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CallendarDetail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(529, 360);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CallendarDetail";
			this->Text = L"NHHH1 - Lịch - Chi tiết";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
