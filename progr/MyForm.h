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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::Button^ button4;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(241, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(90, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(168, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(241, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(90, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(168, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(241, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(90, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 16);
			this->label10->TabIndex = 10;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(168, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(241, 145);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 16);
			this->label12->TabIndex = 12;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(90, 177);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 16);
			this->label13->TabIndex = 13;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(168, 177);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 16);
			this->label14->TabIndex = 14;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(241, 177);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 16);
			this->label15->TabIndex = 15;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(90, 208);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 16);
			this->label16->TabIndex = 16;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(168, 208);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 16);
			this->label17->TabIndex = 17;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(241, 208);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 16);
			this->label18->TabIndex = 18;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(30, 55);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 16);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Рубин";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(23, 84);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 16);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Янтарь";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(46, 115);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(32, 16);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Око";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(12, 145);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(66, 16);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Изумруд";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(30, 177);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(48, 16);
			this->label23->TabIndex = 23;
			this->label23->Text = L"Топаз";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(19, 208);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 16);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Сапфир";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(90, 27);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 16);
			this->label25->TabIndex = 25;
			this->label25->Text = L"Золото";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(168, 27);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(64, 16);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Серебро";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(241, 27);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 16);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Медь";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(678, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Поиск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(359, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Поиск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(177, 27);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(64, 16);
			this->label28->TabIndex = 31;
			this->label28->Text = L"Серебро";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(22, 115);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(72, 16);
			this->label29->TabIndex = 32;
			this->label29->Text = L"Обсидиан";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(13, 55);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(81, 16);
			this->label30->TabIndex = 33;
			this->label30->Text = L"Элементий";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(23, 84);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(71, 16);
			this->label31->TabIndex = 34;
			this->label31->Text = L"Колчедан";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(247, 27);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(41, 16);
			this->label32->TabIndex = 35;
			this->label32->Text = L"Медь";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(110, 27);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(55, 16);
			this->label33->TabIndex = 36;
			this->label33->Text = L"Золото";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Location = System::Drawing::Point(440, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 270);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Редкие камни";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->label36);
			this->groupBox2->Controls->Add(this->label37);
			this->groupBox2->Controls->Add(this->label38);
			this->groupBox2->Controls->Add(this->label39);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->label42);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Location = System::Drawing::Point(116, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(318, 270);
			this->groupBox2->TabIndex = 38;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Руды";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(110, 55);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(51, 16);
			this->label34->TabIndex = 39;
			this->label34->Text = L"label34";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(177, 55);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(51, 16);
			this->label35->TabIndex = 40;
			this->label35->Text = L"label35";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(247, 55);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(51, 16);
			this->label36->TabIndex = 41;
			this->label36->Text = L"label36";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(110, 84);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(51, 16);
			this->label37->TabIndex = 42;
			this->label37->Text = L"label37";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(177, 84);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(51, 16);
			this->label38->TabIndex = 43;
			this->label38->Text = L"label38";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(247, 84);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(51, 16);
			this->label39->TabIndex = 44;
			this->label39->Text = L"label39";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(110, 115);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 16);
			this->label40->TabIndex = 45;
			this->label40->Text = L"label40";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(177, 115);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(51, 16);
			this->label41->TabIndex = 46;
			this->label41->Text = L"label41";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(247, 115);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(51, 16);
			this->label42->TabIndex = 47;
			this->label42->Text = L"label42";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label52);
			this->groupBox3->Controls->Add(this->label53);
			this->groupBox3->Controls->Add(this->label54);
			this->groupBox3->Controls->Add(this->label55);
			this->groupBox3->Controls->Add(this->label56);
			this->groupBox3->Controls->Add(this->label57);
			this->groupBox3->Controls->Add(this->label58);
			this->groupBox3->Controls->Add(this->label59);
			this->groupBox3->Controls->Add(this->label60);
			this->groupBox3->Controls->Add(this->label61);
			this->groupBox3->Controls->Add(this->label62);
			this->groupBox3->Controls->Add(this->label63);
			this->groupBox3->Controls->Add(this->label64);
			this->groupBox3->Controls->Add(this->label65);
			this->groupBox3->Controls->Add(this->label66);
			this->groupBox3->Controls->Add(this->label67);
			this->groupBox3->Controls->Add(this->label68);
			this->groupBox3->Controls->Add(this->label69);
			this->groupBox3->Controls->Add(this->label51);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Controls->Add(this->label49);
			this->groupBox3->Controls->Add(this->label48);
			this->groupBox3->Controls->Add(this->label47);
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Location = System::Drawing::Point(440, 338);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(313, 276);
			this->groupBox3->TabIndex = 39;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Обычные ками";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(90, 48);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(51, 16);
			this->label52->TabIndex = 40;
			this->label52->Text = L"label52";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(168, 48);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(51, 16);
			this->label53->TabIndex = 41;
			this->label53->Text = L"label53";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(241, 48);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(51, 16);
			this->label54->TabIndex = 42;
			this->label54->Text = L"label54";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(90, 80);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(51, 16);
			this->label55->TabIndex = 43;
			this->label55->Text = L"label55";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(168, 80);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(51, 16);
			this->label56->TabIndex = 44;
			this->label56->Text = L"label56";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(241, 80);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(51, 16);
			this->label57->TabIndex = 45;
			this->label57->Text = L"label57";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(90, 113);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(51, 16);
			this->label58->TabIndex = 46;
			this->label58->Text = L"label58";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(168, 113);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(51, 16);
			this->label59->TabIndex = 47;
			this->label59->Text = L"label59";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(241, 113);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(51, 16);
			this->label60->TabIndex = 48;
			this->label60->Text = L"label60";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(90, 145);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(51, 16);
			this->label61->TabIndex = 49;
			this->label61->Text = L"label61";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(168, 145);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(51, 16);
			this->label62->TabIndex = 50;
			this->label62->Text = L"label62";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(241, 145);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(51, 16);
			this->label63->TabIndex = 51;
			this->label63->Text = L"label63";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(90, 180);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(51, 16);
			this->label64->TabIndex = 52;
			this->label64->Text = L"label64";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(168, 180);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(51, 16);
			this->label65->TabIndex = 53;
			this->label65->Text = L"label65";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(241, 180);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(51, 16);
			this->label66->TabIndex = 54;
			this->label66->Text = L"label66";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(90, 213);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(51, 16);
			this->label67->TabIndex = 55;
			this->label67->Text = L"label67";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(168, 213);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(51, 16);
			this->label68->TabIndex = 56;
			this->label68->Text = L"label68";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(241, 213);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(51, 16);
			this->label69->TabIndex = 57;
			this->label69->Text = L"label69";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(241, 18);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(41, 16);
			this->label51->TabIndex = 8;
			this->label51->Text = L"Медь";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(168, 18);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(64, 16);
			this->label50->TabIndex = 7;
			this->label50->Text = L"Серебро";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(90, 18);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(55, 16);
			this->label49->TabIndex = 6;
			this->label49->Text = L"Золото";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(11, 80);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(67, 16);
			this->label48->TabIndex = 5;
			this->label48->Text = L"Гессонит";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(35, 113);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(43, 16);
			this->label47->TabIndex = 4;
			this->label47->Text = L"Яшма";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(7, 48);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(71, 16);
			this->label46->TabIndex = 3;
			this->label46->Text = L"Сердолик";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(38, 145);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(40, 16);
			this->label45->TabIndex = 2;
			this->label45->Text = L"Ночь";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(23, 180);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(55, 16);
			this->label44->TabIndex = 1;
			this->label44->Text = L"Алицит";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(12, 213);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(66, 16);
			this->label43->TabIndex = 0;
			this->label43->Text = L"Зефирит";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(678, 620);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Поиск";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 677);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void cpp_web_urlInput(std::string data);
		void webresOpen();
		std::string MyForm::webresOutput(void);
		std::tuple<int, int, int> findMetals(std::string text);
		void CostsIni();
		void oreCostsIni();
		void uCostsIni();
		void FresultsIni(std::array<std::tuple<int, int, int>, 6> resultsIni);
		void oreFresultsIni(std::array<std::tuple<int, int, int>, 3> oreresultsIni);
		void uFresultsIni(std::array<std::tuple<int, int, int>, 6> uresultsIni);
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
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	std::array<std::tuple<int, int, int>, 3> oreresultsIni;
	for (size_t i = 0; i < oredata.size(); ++i) {
		cpp_web_urlInput(oredata[i]);
		webresOpen();
		std::string text = webresOutput();
		oreresultsIni[i] = findMetals(text);
	};
	oreFresultsIni(oreresultsIni);
	oreCostsIni();
	//Элементий
	label34->Text = oregold1.ToString();
	label35->Text = oresilver1.ToString();
	label36->Text = orecopper1.ToString();
	//Колчедан
	label37->Text = oregold2.ToString();
	label38->Text = oresilver2.ToString();
	label39->Text = orecopper2.ToString();
	//Обсидиан
	label40->Text = oregold3.ToString();
	label41->Text = oresilver3.ToString();
	label42->Text = orecopper3.ToString();
}
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::array<std::tuple<int, int, int>, 6> uresultsIni;
	for (size_t i = 0; i < udata.size(); ++i) {
		cpp_web_urlInput(udata[i]);
		webresOpen();
		std::string text = webresOutput();
		uresultsIni[i] = findMetals(text);
	};
	uFresultsIni(uresultsIni);
	uCostsIni();
	//Сердолик
	label52->Text = ugold1.ToString();
	label53->Text = usilver1.ToString();
	label54->Text = ucopper1.ToString();
	//Гессонит
	label55->Text = ugold2.ToString();
	label56->Text = usilver2.ToString();
	label57->Text = ucopper2.ToString();
	//Яшма
	label58->Text = ugold3.ToString();
	label59->Text = usilver3.ToString();
	label60->Text = ucopper3.ToString();
	//Ночь
	label61->Text = ugold4.ToString();
	label62->Text = usilver4.ToString();
	label63->Text = ucopper4.ToString();
	//Алицит
	label64->Text = ugold5.ToString();
	label65->Text = usilver5.ToString();
	label66->Text = ucopper5.ToString();
	//Зефирит
	label67->Text = ugold6.ToString();
	label68->Text = usilver6.ToString();
	label69->Text = ucopper6.ToString();
}
};
}
