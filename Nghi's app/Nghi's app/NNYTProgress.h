#pragma once
#include "Any.h"
#include <iostream>
#include <fstream>

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NNYTProgress
	/// </summary>
	public ref class NNYTProgress : public System::Windows::Forms::Form
	{
		String ^ dayp;
	private: System::Windows::Forms::PictureBox^  Tho;
	public:
		Form ^ nnyt;
		NNYTProgress(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		NNYTProgress(Form ^ nnytp)
		{
			nnyt = nnytp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NNYTProgress()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picture;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  Badge;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  Nha1;
	private: System::Windows::Forms::PictureBox^  Nha2;
	private: System::Windows::Forms::PictureBox^  Nha3;
	private: System::Windows::Forms::PictureBox^  Nha10;

	private: System::Windows::Forms::PictureBox^  Nha4;
	private: System::Windows::Forms::PictureBox^  Nha5;
	private: System::Windows::Forms::PictureBox^  Nha6;
	private: System::Windows::Forms::PictureBox^  Nha7;
	private: System::Windows::Forms::PictureBox^  Nha8;
	private: System::Windows::Forms::PictureBox^  Nha9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NNYTProgress::typeid));
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Badge = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Nha1 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha2 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha3 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha10 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha4 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha5 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha6 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha7 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha8 = (gcnew System::Windows::Forms::PictureBox());
			this->Nha9 = (gcnew System::Windows::Forms::PictureBox());
			this->Tho = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Badge))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tho))->BeginInit();
			this->SuspendLayout();
			// 
			// picture
			// 
			this->picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->picture->Location = System::Drawing::Point(463, -42);
			this->picture->Margin = System::Windows::Forms::Padding(4);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(314.25, 465.75);
			this->picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture->TabIndex = 11;
			this->picture->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(548, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 41);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NNYTProgress::button1_Click);
			// 
			// Badge
			// 
			this->Badge->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Badge.Image")));
			this->Badge->Location = System::Drawing::Point(10, 0);
			this->Badge->Name = L"Badge";
			this->Badge->Size = System::Drawing::Size(317, 69);
			this->Badge->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Badge->TabIndex = 13;
			this->Badge->TabStop = false;
			// 
			// label1 - Day Counter
			// 
			int dayp1;
			std::ifstream filep;
			filep.open("Uploader\\ProgressUpload\\Progressp.txt");
			filep >> dayp1;
			filep.close();
			dayp = dayp1.ToString();
			this->label1->Text = dayp;
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(333, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 14;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(335, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"DAYS";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// Home Counter and Page Counter (In Future)
			//
			int dayp2, daypp;
			std::ifstream filepp;
			filepp.open("Data\\Progress.txt");
			filepp >> daypp >> dayp2;
			filepp.close();
			// 
			// Nha1
			// 
			this->Nha1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha1.Image")));
			this->Nha1->Location = System::Drawing::Point(10, 86);
			this->Nha1->Name = L"Nha1";
			this->Nha1->Size = System::Drawing::Size(94, 66);
			this->Nha1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha1->TabIndex = 16;
			this->Nha1->TabStop = false;
			this->Nha1->Visible = false;
			if (dayp2 == 1)
				this->Nha1->Visible = true;
			// 
			// Nha2
			// 
			this->Nha2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha2.Image")));
			this->Nha2->Location = System::Drawing::Point(110, 86);
			this->Nha2->Name = L"Nha2";
			this->Nha2->Size = System::Drawing::Size(94, 66);
			this->Nha2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha2->TabIndex = 17;
			this->Nha2->TabStop = false;
			this->Nha2->Visible = false;
			if (dayp2 == 2)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
			}
			// 
			// Nha3
			// 
			this->Nha3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha3.Image")));
			this->Nha3->Location = System::Drawing::Point(210, 86);
			this->Nha3->Name = L"Nha3";
			this->Nha3->Size = System::Drawing::Size(94, 66);
			this->Nha3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha3->TabIndex = 18;
			this->Nha3->TabStop = false;
			this->Nha3->Visible = false;
			if (dayp2 == 3)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
			}
			// 
			// Nha4
			// 
			this->Nha4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha4.Image")));
			this->Nha4->Location = System::Drawing::Point(10, 174);
			this->Nha4->Name = L"Nha4";
			this->Nha4->Size = System::Drawing::Size(94, 66);
			this->Nha4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha4->TabIndex = 20;
			this->Nha4->TabStop = false;
			this->Nha4->Visible = false;
			if (dayp2 == 4)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
			}

			// 
			// Nha5
			// 
			this->Nha5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha5.Image")));
			this->Nha5->Location = System::Drawing::Point(110, 174);
			this->Nha5->Name = L"Nha5";
			this->Nha5->Size = System::Drawing::Size(94, 66);
			this->Nha5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha5->TabIndex = 21;
			this->Nha5->TabStop = false;
			this->Nha5->Visible = false;
			if (dayp2 == 5)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
				this->Nha5->Visible = true;
			}

			// 
			// Nha6
			// 
			this->Nha6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha6.Image")));
			this->Nha6->Location = System::Drawing::Point(210, 174);
			this->Nha6->Name = L"Nha6";
			this->Nha6->Size = System::Drawing::Size(94, 66);
			this->Nha6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha6->TabIndex = 22;
			this->Nha6->TabStop = false;
			this->Nha6->Visible = false;
			if (dayp2 == 6)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
				this->Nha5->Visible = true;
				this->Nha6->Visible = true;
			}

			// 
			// Nha7
			// 
			this->Nha7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha7.Image")));
			this->Nha7->Location = System::Drawing::Point(10, 262);
			this->Nha7->Name = L"Nha7";
			this->Nha7->Size = System::Drawing::Size(94, 66);
			this->Nha7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha7->TabIndex = 23;
			this->Nha7->TabStop = false;
			this->Nha7->Visible = false;
			if (dayp2 == 7)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
				this->Nha5->Visible = true;
				this->Nha6->Visible = true;
				this->Nha7->Visible = true;
			}
			// 
			// Nha8
			// 
			this->Nha8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha8.Image")));
			this->Nha8->Location = System::Drawing::Point(110, 262);
			this->Nha8->Name = L"Nha8";
			this->Nha8->Size = System::Drawing::Size(94, 66);
			this->Nha8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha8->TabIndex = 24;
			this->Nha8->TabStop = false;
			this->Nha8->Visible = false;
			if (dayp2 == 8)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
				this->Nha5->Visible = true;
				this->Nha6->Visible = true;
				this->Nha7->Visible = true;
				this->Nha8->Visible = true;
			}
			// 
			// Nha9
			// 
			this->Nha9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha9.Image")));
			this->Nha9->Location = System::Drawing::Point(210, 262);
			this->Nha9->Name = L"Nha9";
			this->Nha9->Size = System::Drawing::Size(94, 66);
			this->Nha9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha9->TabIndex = 25;
			this->Nha9->TabStop = false;
			this->Nha9->Visible = false;
			if (dayp2 == 9)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
				this->Nha5->Visible = true;
				this->Nha6->Visible = true;
				this->Nha7->Visible = true;
				this->Nha8->Visible = true;
				this->Nha9->Visible = true;
			}
			// 
			// Tho
			// 
			this->Tho->BackColor = System::Drawing::Color::Transparent;
			this->Tho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tho.Image")));
			this->Tho->Location = System::Drawing::Point(333, 86);
			this->Tho->Name = L"Tho";
			this->Tho->Size = System::Drawing::Size(174, 163);
			this->Tho->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Tho->TabIndex = 26;
			this->Tho->TabStop = false;
			this->Tho->Visible = false;
			// 
			// Nha10
			// 
			this->Nha10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Nha10.Image")));
			this->Nha10->Location = System::Drawing::Point(345, 241);
			this->Nha10->Name = L"Nha10";
			this->Nha10->Size = System::Drawing::Size(115, 88);
			this->Nha10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Nha10->TabIndex = 19;
			this->Nha10->TabStop = false;
			this->Nha10->Visible = false;
			if (dayp2 == 10)
			{
				this->Nha1->Visible = true;
				this->Nha2->Visible = true;
				this->Nha3->Visible = true;
				this->Nha4->Visible = true;
				this->Nha5->Visible = true;
				this->Nha6->Visible = true;
				this->Nha7->Visible = true;
				this->Nha8->Visible = true;
				this->Nha9->Visible = true;
				this->Nha10->Visible = true;
				this->Tho->Visible = true;
			}
			// 
			// NNYTProgress
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(677, 360);
			this->ControlBox = false;
			this->Controls->Add(this->Nha10);
			this->Controls->Add(this->Tho);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Nha9);
			this->Controls->Add(this->Nha8);
			this->Controls->Add(this->Nha7);
			this->Controls->Add(this->Nha6);
			this->Controls->Add(this->Nha5);
			this->Controls->Add(this->Nha4);
			this->Controls->Add(this->Nha3);
			this->Controls->Add(this->Nha2);
			this->Controls->Add(this->Nha1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Badge);
			this->Controls->Add(this->picture);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"NNYTProgress";
			this->Text = L"Software for Tú - Ngôi nhà yêu thương - Quá trình";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Badge))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nha9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tho))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			//
			// Any
			//
			if (dayp2 == 10)
			{
				Any ^ an = gcnew Any();
				an->Show();
			}

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 nnyt->Show();
	}
	};
}
