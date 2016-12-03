#pragma once
#include <string>
#include "MyForm.cpp"
#include <msclr\marshal_cppstd.h>

namespace Проект2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  depature_point;
	private: System::Windows::Forms::TextBox^  arrival_point;

	private: System::Windows::Forms::TextBox^  time_arrival;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;






	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->depature_point = (gcnew System::Windows::Forms::TextBox());
			this->arrival_point = (gcnew System::Windows::Forms::TextBox());
			this->time_arrival = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(618, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 336);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(722, 197);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введіть інформацію про рейси";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Номер рейсу";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Пункт відправлення";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Пункт прибуття";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Час відправлення";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Час прибуття";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Тривалість подорожі";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 283);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Додати запис";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// depature_point
			// 
			this->depature_point->Location = System::Drawing::Point(126, 94);
			this->depature_point->Name = L"depature_point";
			this->depature_point->Size = System::Drawing::Size(100, 20);
			this->depature_point->TabIndex = 11;
			this->depature_point->TextChanged += gcnew System::EventHandler(this, &MyForm::depature_point_TextChanged);
			// 
			// arrival_point
			// 
			this->arrival_point->Location = System::Drawing::Point(126, 130);
			this->arrival_point->Name = L"arrival_point";
			this->arrival_point->Size = System::Drawing::Size(100, 20);
			this->arrival_point->TabIndex = 12;
			this->arrival_point->TextChanged += gcnew System::EventHandler(this, &MyForm::arrival_point_TextChanged);
			// 
			// time_arrival
			// 
			this->time_arrival->Location = System::Drawing::Point(126, 201);
			this->time_arrival->Name = L"time_arrival";
			this->time_arrival->ReadOnly = true;
			this->time_arrival->Size = System::Drawing::Size(100, 20);
			this->time_arrival->TabIndex = 14;
			this->time_arrival->TextChanged += gcnew System::EventHandler(this, &MyForm::time_arrival_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(126, 164);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 17;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(126, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 18;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(746, 545);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->time_arrival);
			this->Controls->Add(this->arrival_point);
			this->Controls->Add(this->depature_point);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 Close();
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void depature_point_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void arrival_point_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void time_depature_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void time_arrival_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void duration_trip_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void number_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
			 }
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
					 e->Handled = true;
			 }
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar == '.')
				 {
					 if(this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
						 e->Handled = true;
				 }
				 // Accept only digits "." and the Backspace character
				 else if(!Char::IsDigit(e->KeyChar)&& e->KeyChar != 0x08)
					 e->Handled = true;
			 }
	private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 // Only allow 1 decimal point
				 if(e->KeyChar == '.')
				 {
					 if(this->textBox3->Text->Contains(".") && !this->textBox3->SelectedText->Contains("."))
						 e->Handled = true;
				 }
				 // Accept only digits "." and the Backspace character
				 else if(!Char::IsDigit(e->KeyChar)&& e->KeyChar != 0x08)
					 e->Handled = true;
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context context;

				 DataBaseTrips::getList().push_back(Trip(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text), 
					 Convert::ToInt32(textBox3->Text), context.marshal_as<std::string>(depature_point->Text), context.marshal_as<std::string>(arrival_point->Text)));
			 }
};
};