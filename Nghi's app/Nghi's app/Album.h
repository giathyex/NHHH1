#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "MemorADD1.h"
#include "MemorADD2.h"
#pragma once

namespace Nghisapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Album
	/// </summary>
	public ref class Album : public System::Windows::Forms::Form
	{
	ImageList ^ imgs = gcnew ImageList();
	int item;
	public:
		Form ^ sf4;
		Album(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Album(Form ^ alb)
		{
			sf4 = alb;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Album()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Album::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(795, 184);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 505);
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
			this->button1->Location = System::Drawing::Point(881, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 41);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Trở lại";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Album::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(22, 28);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(517, 371);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MistyRose;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(553, 28);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(238, 371);
			this->textBox1->TabIndex = 11;
			// 
			// listView1
			// 
			this->listView1->Alignment = System::Windows::Forms::ListViewAlignment::SnapToGrid;
			this->listView1->BackColor = System::Drawing::Color::MistyRose;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Location = System::Drawing::Point(22, 419);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(768, 166);
			this->listView1->TabIndex = 999999999;
			this->listView1->TileSize = System::Drawing::Size(90, 90);
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Album::listView1_SelectedIndexChanged);
			imgs->ColorDepth = ColorDepth::Depth16Bit;
			imgs->ImageSize = System::Drawing::Size(80, 80);
			array<String^> ^paths = {};
			paths = System::IO::Directory::GetFiles("Picture\\");
			try
			{
				for each (String ^ path in paths)
				{
					imgs->Images->Add(Image::FromFile(path));
				}
			}
			catch (Exception ^ e) {}
			this->listView1->LargeImageList = imgs;
			for (int j = 0; j < imgs->Images->Count; j++)
			{
				ListViewItem ^ item = gcnew ListViewItem();
				item->ImageIndex = j;
				this->listView1->Items->Add(item);
			}
			paths = System::IO::Directory::GetFiles("Picture\\Temp\\");
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(805, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 49);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Thêm ảnh";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Album::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightCyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(805, 85);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 49);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Sửa";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Album::button3_Click);
			// 
			// Album
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1010, 609);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = gcnew System::Drawing::Icon(L"Picture/Main/nhhh.ico");
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Album";
			this->Text = L"NHHH1 - Album ảnh";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Trở lại
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 this->Hide();
				 sf4->Show();
				 std::ofstream ediae("Picture\\Data\\temp2.txt");
				 ediae << "999999999";
				 ediae.close();
	}
	// Sửa
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 MemorADD2 ^ aa2 = gcnew MemorADD2();
				 aa2->ShowDialog();
				 std::ofstream edia("Picture\\Data\\temp2.txt");
				 edia << item;
				 edia.close();
				 
	}
	// Thêm
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 MemorADD1 ^ aa1 = gcnew MemorADD1();
				 aa1->ShowDialog();
    }
	// Image list click
    private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
				 if (listView1->SelectedItems->Count == 0)
					 return;
				 item = listView1->SelectedIndices[0];
				 String ^ filename;
				 std::ofstream ediax("Picture\\Data\\temp2.txt");
				 ediax << item;
				 ediax.close();
				 std::string c = std::to_string(item);
				 String ^ cc = msclr::interop::marshal_as<String^>(c);
				 String ^ a = "Picture\\" + cc + ".png";
				 pictureBox2->Load(a);
				 // Show detail
				 int rowsa;
				 std::ifstream rca("Picture\\Data\\rc.txt");
				 rca >> rowsa;
				 rca.close();
				 std::wstring* da = new std::wstring[rowsa];
				 std::wifstream ta(L"Picture\\Data\\t.txt");
				 for (int i = 0; i < rowsa; i++)
				 {
					 std::getline(ta, da[i]);
				 }
				 ta.close();
				 std::wstring* ga = new std::wstring[rowsa];
				 std::wifstream gea(L"Picture\\Data\\g.txt");
				 for (int i = 0; i < rowsa; i++)
				 {
					 std::getline(gea, ga[i]);
				 }
				 std::wstring filemm = L"Picture\\Data\\" + std::to_wstring(item) + L".txt";
				 String ^ filemxx = msclr::interop::marshal_as<String^>(filemm);
				 String ^ ear;
				 using namespace System::IO;
				 StreamReader^ reax = gcnew StreamReader(filemxx, System::Text::Encoding::Default);
				 ear = reax->ReadToEnd();
				 reax->Close();
				 std::wstring earx = msclr::interop::marshal_as<std::wstring>(ear);
				 std::wstring alla;
				 alla = da[item] + L"\r\n\r\n" + ga[item] + L"\r\n\r\n" + earx;
				 //
				 std::wofstream ala(L"Picture\\Data\\temp.txt");
				 std::locale mylocale("");
				 ala.imbue(mylocale);
				 ala << alla << "\r\n";
				 ala.close();
				 this->textBox1->Text = System::IO::File::ReadAllText(L"Picture\\Data\\temp.txt");
    }
};
}
