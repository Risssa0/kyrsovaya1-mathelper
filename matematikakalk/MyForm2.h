#pragma once

namespace matematikakalk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(23, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(359, 32);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(423, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(75, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 50);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Арифметический";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(23, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(84, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 39);
			this->button3->TabIndex = 4;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(147, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 39);
			this->button4->TabIndex = 5;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(23, 225);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 39);
			this->button5->TabIndex = 6;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(84, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 39);
			this->button6->TabIndex = 7;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(147, 225);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 39);
			this->button7->TabIndex = 8;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(84, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 39);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(147, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 39);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(23, 347);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(45, 39);
			this->button11->TabIndex = 12;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(23, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(45, 39);
			this->button10->TabIndex = 13;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(262, 162);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(45, 39);
			this->button12->TabIndex = 14;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(262, 225);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(45, 39);
			this->button13->TabIndex = 15;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(262, 286);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(45, 39);
			this->button14->TabIndex = 16;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(262, 347);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(45, 39);
			this->button15->TabIndex = 17;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(423, 397);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 32);
			this->button16->TabIndex = 18;
			this->button16->Text = L"Назад";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm2::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(84, 347);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(45, 39);
			this->button17->TabIndex = 19;
			this->button17->Text = L",";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm2::button17_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button18);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(520, 31);
			this->panel1->TabIndex = 20;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Red;
			this->button18->Dock = System::Windows::Forms::DockStyle::Right;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(484, 0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(36, 31);
			this->button18->TabIndex = 0;
			this->button18->Text = L"X";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm2::button18_Click_1);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(337, 162);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(45, 39);
			this->button19->TabIndex = 21;
			this->button19->Text = L"С";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm2::button19_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(520, 441);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "+";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "-";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "/";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "*";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ expression = textBox1->Text;
	double result = 0.0;

	// Определяем операцию, которая будет произведена
	char operation;
	int operatorIndex;
	if (!expression->Contains("+") && !expression->Contains("-") && !expression->Contains("*") && !expression->Contains("/")) {
		result = Convert::ToInt32(expression);
	}
	else if (expression->Contains("+")) {
		operation = '+';
		operatorIndex = expression->IndexOf('+');
	}
	else if (expression->Contains("-")) {
		operation = '-';
		operatorIndex = expression->IndexOf('-');
	}
	else if (expression->Contains("*")) {
		operation = '*';
		operatorIndex = expression->IndexOf('*');
	}
	else if (expression->Contains("/")) {
		operation = '/';
		operatorIndex = expression->IndexOf('/');
	}

	// Выполняем вычисление
	double leftOperand = Convert::ToDouble(expression->Substring(0, operatorIndex));
	double rightOperand = Convert::ToDouble(expression->Substring(operatorIndex + 1));

	switch (operation) {
	case '+':
		result = leftOperand + rightOperand;
		break;
	case '-':
		result = leftOperand - rightOperand;
		break;
	case '*':
		result = leftOperand * rightOperand;
		break;
	case '/':
		result = leftOperand / rightOperand;
		break;
	}


	// Отображаем результат на экране
	textBox1->Text = Convert::ToString(result);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Hide();

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ",";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "";

}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
};
}
