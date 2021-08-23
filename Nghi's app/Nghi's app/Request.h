#pragma once
#include <iostream>
#include <fstream>

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Request
	/// </summary>
	public ref class Request : public System::Windows::Forms::Form
	{
	public:
		Form ^ sf1;
		Request(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Request(Form ^ rq)
		{
			sf1 = rq;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Request()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Request::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->button1->TabIndex = 9;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Request::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(26, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 40);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Gửi yêu cầu về app hoặc bất cứ điều gì bà\r\nmuốn nhưng ngại nói hoặc nhắn trực tiế"
				L"p\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(124, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 41);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Gửi yêu cầu";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Request::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MistyRose;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Maroon;
			this->textBox1->Location = System::Drawing::Point(34, 104);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(292, 182);
			this->textBox1->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(52, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(234, 80);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Cảm ơn bà đã góp ý cho tui\r\n\r\nTui sẽ phản hồi sớm nhất có thể\r\nYêu bà :>";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(34, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"(Sau khi nhấn gửi bà chờ nó upload xíu nha)\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(314, -62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 505);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(529, 360);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->Name = L"Request";
			this->Text = L"NHHH1 - Yêu cầu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    //
	// Trở lại clicked
	//
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 sf1->Show();
	}
	//
	// Gửi clicked
	//
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->button2->Visible = false;
				 this->textBox1->Visible = false;
				 this->label2->Visible = true;
				 using namespace System::IO;
				 StreamWriter^ rq = gcnew StreamWriter("Uploader\\RequestUpload\\Request.txt");
				 rq->Write(textBox1->Text);
				 rq->Close();
				 Process::Start("Uploader\\RequestUpload\\Uploader.exe");
	}
};
}
