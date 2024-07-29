#pragma once
#include <string>
#include <tuple>
#include "links.h"
#include "costs.h"


namespace progr {

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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			CostsIni();
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(522, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(600, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(673, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(522, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(600, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(673, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(522, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(600, 97);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(673, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(522, 127);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 16);
			this->label10->TabIndex = 10;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(600, 127);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(673, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 16);
			this->label12->TabIndex = 12;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(522, 159);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 16);
			this->label13->TabIndex = 13;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(600, 159);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 16);
			this->label14->TabIndex = 14;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(673, 159);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 16);
			this->label15->TabIndex = 15;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(522, 190);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 16);
			this->label16->TabIndex = 16;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(600, 190);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 16);
			this->label17->TabIndex = 17;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(673, 190);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 16);
			this->label18->TabIndex = 18;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(462, 37);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 16);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Рубин";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(455, 66);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 16);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Янтарь";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(478, 97);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(32, 16);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Око";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(444, 127);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(66, 16);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Изумруд";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(462, 159);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(48, 16);
			this->label23->TabIndex = 23;
			this->label23->Text = L"Топаз";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(451, 190);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 16);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Сапфир";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(522, 9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 16);
			this->label25->TabIndex = 25;
			this->label25->Text = L"Золото";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(600, 9);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(64, 16);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Серебро";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(673, 9);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 16);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Медь";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(649, 415);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 605);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void cpp_web_urlInput(std::string data);
		void webresOpen();
		std::string MyForm::webresOutput(void);
		std::tuple<int, int, int> findMetals(std::string text);
		void CostsIni();
		void FresultsIni(std::array<std::tuple<int, int, int>, 6> resultsIni);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::array<std::tuple<int, int, int>, 6> resultsIni;
		for (size_t i = 0; i < data.size(); ++i) {
			cpp_web_urlInput(data[i]);
			webresOpen();
			std::string text = webresOutput();
			resultsIni[i] = findMetals(text);
		};
		FresultsIni(resultsIni);
		CostsIni();
		//Рубин
		label1->Text = gold1.ToString();
		label2->Text = silver1.ToString();
		label3->Text = copper1.ToString();
		//Янтарь
		label4->Text = gold2.ToString();
		label5->Text = silver2.ToString();
		label6->Text = copper2.ToString();
		//Око
		label7->Text = gold3.ToString();
		label8->Text = silver3.ToString();
		label9->Text = copper3.ToString();
		//Изумруд
		label10->Text = gold4.ToString();
		label11->Text = silver4.ToString();
		label12->Text = copper4.ToString();
		//Топаз
		label13->Text = gold5.ToString();
		label14->Text = silver5.ToString();
		label15->Text = copper5.ToString();
		//Сапфир
		label16->Text = gold6.ToString();
		label17->Text = silver6.ToString();
		label18->Text = copper6.ToString();
	}
};
}
