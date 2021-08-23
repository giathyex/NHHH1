#include <iostream> 
#include <time.h>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "MemorADD.h"
#pragma once

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Memor
	/// </summary>
	public ref class Memor : public System::Windows::Forms::Form
	{
	public:
		Form ^ sf3;
		Memor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Memor(Form ^ mm)
		{
			sf3 = mm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Memor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Memor::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(773, -76);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 621);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(888, 373);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Memor::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(782, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 25);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Ngày bên nhau:";
			// 
			// label2 - COUNTDAY
			// 
			int d1, m1, y1, d2, m2, y2;
			const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			time_t theTime = time(0);
			struct tm *aTime = localtime(&theTime);
			d2 = aTime->tm_mday;
			m2 = aTime->tm_mon + 1;
			y2 = aTime->tm_year + 1900;
			d1 = 4; m1 = 10; y1 = 2019;
			//
			// Day 1
			//
			int years1 = y1;
			// Check if the current year needs to be considered for the count of leap years or not 
			if (m1 <= 2) years1--;
			// An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100. 
			int ly1 = years1 / 4 - years1 / 100 + years1 / 400;
			//
			// Day 2
			//
			int years2 = y2;
			// Check if the current year needs to be considered for the count of leap years or not 
			if (m2 <= 2) years2--;
			// An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100. 
			int ly2 = years2 / 4 - years2 / 100 + years2 / 400;
			//
			// COUNT
			//
			// Count total number of day before day1 
			// initialize count using years and day 
			long int n1 = y1 * 365 + d1;

			// Add days for months in given date 
			for (int i = 0; i<m1 - 1; i++) n1 += monthDays[i];
			// Since every leap year is of 366 days, add a day for every leap year 
			n1 += ly1;
			// Count total number of day before day1  
			long int n2 = y2 * 365 + d2;
			for (int i = 0; i<m2 - 1; i++)
				n2 += monthDays[i];
			n2 += ly2;
			// return difference between two counts 
			int n = (n2 - n1);
			std::string nn = std::to_string(n);
			String^ nns = msclr::interop::marshal_as<System::String^>(nn);
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(782, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 61);
			this->label2->TabIndex = 13;
			this->label2->Text = nns;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackBar1
			// 
			int yt = y2 - 2019;
			this->trackBar1->BackColor = System::Drawing::Color::Azure;
			this->trackBar1->Location = System::Drawing::Point(-5, 27);
			this->trackBar1->Maximum = yt;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->trackBar1->RightToLeftLayout = true;
			this->trackBar1->Size = System::Drawing::Size(56, 390);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Memor::trackBar1_Scroll);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(159, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(484, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Năm 2019";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(888, 315);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 50);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Thêm";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Memor::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MistyRose;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(74, 70);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(682, 334);
			this->textBox1->TabIndex = 17;
			this->textBox1->TabStop = false;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			// Declare
			int rows;
			int d1x, m1x, y1x, d2x, m2x, y2x;
			d2x = aTime->tm_mday;
			m2x = aTime->tm_mon + 1;
			y2x = aTime->tm_year + 1900;
			int y2xx;
			std::ifstream getcy("Data\\temp2.txt");
			getcy >> y2xx;
			getcy.close();
			// Get rows
			std::ifstream rc("Data\\rc2.txt");
			rc >> rows;
			rc.close();
			// Get day-month-year respectively
			std::ifstream ce("Data\\t2.txt");
			int** a = new int*[rows];
			for (int h = 0; h < rows; ++h)
				a[h] = new int[3];

			for (int q = 0; q < rows; ++q)
			{
				for (int m = 0; m < 3; ++m)
				{
					ce >> a[q][m];
					ce.get(); // Throw away the comma
				}
			}
			ce.close();
			//
			std::wstring* d = new std::wstring[rows];
			std::wifstream t("Data\\t2.txt");
			for (int i = 0; i < rows; i++)
			{
				std::getline(t, d[i]);
			}
			t.close();
			// Get event
			std::wstring* ev = new std::wstring[rows];
			std::wifstream evg(L"Data\\e2.txt");
			for (int i = 0; i < rows; i++)
			{
				std::getline(evg, ev[i]);
			}
			evg.close();
			// Day count
			std::wstring* nx = new std::wstring[rows];
			for (int i = 0; i < rows; i++)
			{
				const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
				d1x = a[i][0]; m1x = a[i][1]; y1x = a[i][2];
				//
				// Day 1
				//
				int yearsx1 = y1x;
				// Check if the current year needs to be considered for the count of leap years or not 
				if (m1x <= 2) yearsx1--;
				// An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100. 
				int ly1x = yearsx1 / 4 - yearsx1 / 100 + yearsx1 / 400;
				//
				// Day 2
				//
				int yearsx2 = y2x;
				// Check if the current year needs to be considered for the count of leap years or not 
				if (m2x <= 2) yearsx2--;
				// An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100. 
				int ly2x = yearsx2 / 4 - yearsx2 / 100 + yearsx2 / 400;
				//
				// COUNT
				//
				// Count total number of day before day1 
				// initialize count using years and day 
				long int n1x = y1x * 365 + d1x;

				// Add days for months in given date 
				for (int i = 0; i < m1x - 1; i++) n1x += monthDays[i];
				// Since every leap year is of 366 days, add a day for every leap year 
				n1x += ly1x;
				// Count total number of day before day1  
				long int n2x = y2x * 365 + d2x;
				for (int i = 0; i < m2x - 1; i++)
					n2x += monthDays[i];
				n2x += ly2x;
				// return difference between two counts 
				int ne = n2x - n1x;
				if (ne < 10) nx[i] = L"0000" + std::to_wstring(ne);
				else if (ne < 100) nx[i] = L"000" + std::to_wstring(ne);
				else if (ne < 1000) nx[i] = L"00" + std::to_wstring(ne);
				else if (ne < 10000) nx[i] = L"0" + std::to_wstring(ne);
				else nx[i] = std::to_wstring(ne);
			}
			std::wstring* all = new std::wstring[rows];
			for (int i = 0; i < rows; i++)
			{
				all[i] = d[i] + L"      " + nx[i] + L"      " + ev[i];
			}
			//
			std::wofstream al(L"Data\\temp.txt");
			for (int i = 0; i < rows; i++)
			{
				if (a[i][2] == y2xx) al << all[i] << "\r\n";
				else continue;
			}
			al.close();
			this->textBox1->Text = System::IO::File::ReadAllText("Data\\temp.txt");
			// 
			// Memor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1060, 443);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->Name = L"Memor";
			this->Text = L"NHHH1 - Kỷ niệm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Trở lại
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 time_t theTime = time(0);
				 struct tm *aTime = localtime(&theTime);
				 int ye = aTime->tm_year + 1900;
				 std::ofstream ee("Data\\temp2.txt");
				 ee << ye;
				 ee.close();
				 this->Hide();
				 sf3->Show();
	}
			 // Thêm/Sửa
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Hide();
				 MemorADD ^ mma = gcnew MemorADD(this);
				 mma->ShowDialog();
	}
			 // Trackbar
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
				 int tb = trackBar1->Value;
				 tb = tb + 2019;
				 std::ofstream tbe("Data\\temp2.txt");
				 tbe << tb;
				 tbe.close();
				 std::wstring tbx = L"Năm " + std::to_wstring(tb);
				 String^ tbxs = msclr::interop::marshal_as<System::String^>(tbx);
				 label4->Text = tbxs;
				 // Declare
				 int rows;
				 int d1x, m1x, y1x, d2x, m2x, y2x;
				 time_t theTime = time(0);
				 struct tm *aTime = localtime(&theTime);
				 d2x = aTime->tm_mday;
				 m2x = aTime->tm_mon + 1;
				 y2x = aTime->tm_year + 1900;
				 int y2xx;
				 std::ifstream getcy("Data\\temp2.txt");
				 getcy >> y2xx;
				 getcy.close();
				 // Get rows
				 std::ifstream rc("Data\\rc2.txt");
				 rc >> rows;
				 rc.close();
				 // Get day-month-year respectively
				 std::ifstream ce("Data\\t2.txt");
				 int** a = new int*[rows];
				 for (int h = 0; h < rows; ++h)
					 a[h] = new int[3];

				 for (int q = 0; q < rows; ++q)
				 {
					 for (int m = 0; m < 3; ++m)
					 {
						 ce >> a[q][m];
						 ce.get(); // Throw away the comma
					 }
				 }
				 ce.close();
				 //
				 std::wstring* d = new std::wstring[rows];
				 std::wifstream t("Data\\t2.txt");
				 for (int i = 0; i < rows; i++)
				 {
					 std::getline(t, d[i]);
				 }
				 t.close();
				 // Get event
				 std::wstring* ev = new std::wstring[rows];
				 std::wifstream evg(L"Data\\e2.txt");
				 for (int i = 0; i < rows; i++)
				 {
					 std::getline(evg, ev[i]);
				 }
				 evg.close();
				 // Day count
				 std::wstring* nx = new std::wstring[rows];
				 for (int i = 0; i < rows; i++)
				 {
					 const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
					 d1x = a[i][0]; m1x = a[i][1]; y1x = a[i][2];
					 //
					 // Day 1
					 //
					 int yearsx1 = y1x;
					 // Check if the current year needs to be considered for the count of leap years or not 
					 if (m1x <= 2) yearsx1--;
					 // An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100. 
					 int ly1x = yearsx1 / 4 - yearsx1 / 100 + yearsx1 / 400;
					 //
					 // Day 2
					 //
					 int yearsx2 = y2x;
					 // Check if the current year needs to be considered for the count of leap years or not 
					 if (m2x <= 2) yearsx2--;
					 // An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100. 
					 int ly2x = yearsx2 / 4 - yearsx2 / 100 + yearsx2 / 400;
					 //
					 // COUNT
					 //
					 // Count total number of day before day1 
					 // initialize count using years and day 
					 long int n1x = y1x * 365 + d1x;

					 // Add days for months in given date 
					 for (int i = 0; i < m1x - 1; i++) n1x += monthDays[i];
					 // Since every leap year is of 366 days, add a day for every leap year 
					 n1x += ly1x;
					 // Count total number of day before day1  
					 long int n2x = y2x * 365 + d2x;
					 for (int i = 0; i < m2x - 1; i++)
						 n2x += monthDays[i];
					 n2x += ly2x;
					 // return difference between two counts 
					 int ne = n2x - n1x;
					 if (ne < 10) nx[i] = L"0000" + std::to_wstring(ne);
					 else if (ne < 100) nx[i] = L"000" + std::to_wstring(ne);
					 else if (ne < 1000) nx[i] = L"00" + std::to_wstring(ne);
					 else if (ne < 10000) nx[i] = L"0" + std::to_wstring(ne);
					 else nx[i] = std::to_wstring(ne);
				 }
				 std::wstring* all = new std::wstring[rows];
				 for (int i = 0; i < rows; i++)
				 {
					 all[i] = d[i] + L"      " + nx[i] + L"      " + ev[i];
				 }
				 //
				 std::wofstream al(L"Data\\temp.txt");
				 for (int i = 0; i < rows; i++)
				 {
					 if (a[i][2] == y2xx) al << all[i] << "\r\n";
					 else continue;
				 }
				 al.close();
				 this->textBox1->Text = System::IO::File::ReadAllText("Data\\temp.txt");
	}
	};
}
