#include <iostream>
#include <fstream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <codecvt>
#include <msclr\marshal_cppstd.h>
#include "CallendarEdit.h"
#pragma once

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CallendarALL
	/// </summary>
	public ref class CallendarALL : public System::Windows::Forms::Form
	{
	public:
		Form ^ cll3;
		CallendarALL(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CallendarALL(Form ^ claa)
		{
			cll3 = claa;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CallendarALL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CallendarALL::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(1199, 373);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 50);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CallendarALL::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1084, -76);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 621);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MistyRose;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(31, 54);
			this->textBox1->Multiline = true;
			this->textBox1->ReadOnly = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(1019, 359);
			this->textBox1->TabIndex = 23;
			this->textBox1->TabStop = false;
			int rows;
			std::ifstream rc("Data\\rc.txt");
			rc >> rows;
			rc.close();
			std::wstring* d = new std::wstring[rows];
			std::wifstream t("Data\\t.txt");
			for (int i = 0; i < rows; i++)
			{
				std::getline(t, d[i]);
			}
			t.close();
			std::wstring* h = new std::wstring[rows];
			std::wifstream tt("Data\\tt.txt");
			for (int i = 0; i < rows; i++)
			{
				std::getline(tt, h[i]);
			}
			tt.close();
			std::wstring* ev = new std::wstring[rows];
			std::wifstream evg(L"Data\\e.txt");
			for (int i = 0; i < rows; i++)
			{
				std::getline(evg, ev[i]);
			}
			evg.close();
			std::wstring te;
			std::wstring* all = new std::wstring[rows];
			for (int i = 0; i < rows; i++)
			{
				if (i + 1 < 10) te = L"000" + std::to_wstring(i + 1);
				else if (i + 1 < 100) te = L"00" + std::to_wstring(i + 1);
				else if (i + 1 < 1000) te = L"0" + std::to_wstring(i + 1);
				else te = std::to_wstring(i);
				all[i] = te + L".     " + d[i] + L"        " + h[i] + L"        " + ev[i];
			}
			//
			std::wofstream al(L"Data\\temp.txt");
			for (int i = 0; i < rows; i++)
			{
				al << all[i] << "\r\n";
			}
			al.close();
			this->textBox1->Text = System::IO::File::ReadAllText(L"Data\\temp.txt");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(31, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(609, 25);
			this->label1->TabIndex = 26;
			this->label1->Text = L"STT            Ngày                   Giờ                                            "
				L"            Sự kiện";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightCyan;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(1074, 54);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 46);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Chỉnh sửa";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CallendarALL::button4_Click);
			// 
			// CallendarALL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1372, 443);
			this->ControlBox = false;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->Name = L"CallendarALL";
			this->Text = L"NHHH1 - Lịch - Tất cả";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Trở lại
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 this->Hide();
				 cll3->Show();
	}
			 // Sửa
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 CallendarEdit ^ clde = gcnew CallendarEdit();
				 clde->Show();
				 this->Controls->Clear();
				 this->InitializeComponent();
	}
	};
}
