#pragma once
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	long long mod(long long n, long long m)
	{
		return (n - ((n / m)*m));
	}
	double Fixed(double x)
	{
		double  persison = 0.0000000001;
		if ((x - int(x)) <= persison)
		{
		return(int(x));

		}
		else if (((int(x) + 1) - x) <= persison)
		{
			return(int(x) + 1);

		}
		else
		{
			return(x);

		}
	}
	double Fixed2(double x)
	{
		double  persison = 0.1;
		if ((x - int(x)) <= persison)
		{
			return(int(x));

		}
		else if (((int(x) + 1) - x) <= persison)
		{
			return(int(x) + 1);

		}
		else
		{
			return(x);

		}
	}
	double sqrt(double num)
	{
		double start = 0, endi = num, persison = 0.0000000001;
		while (endi - start > persison)
		{
			double mid = (start + endi) / 2;

			double ans = mid*mid;
			if (ans == num)
			{
				return (Fixed(mid));
				break;
			}
			else if (ans < num)
			{
				start = mid;
			}
			else
			{
				endi = mid;
			}
		}
		double x = ((start + endi) / 2);
		return Fixed(x);
	}
	double  pow(double  base, long long  power)
	{
		double ans = 1;
		if (base == 1) { return 1; }
		for (int i = 0; i < power; i++)
		{
			ans *= base;
		}
		return ans;
	}
	void swap(int&x, int&y)
	{
		int rem = x;
		x = y;
		y = rem;
	}
	void swap(char&x, char&y)
	{
		char rem = x;
		x = y;
		y = rem;
	}
	void swap(double&x, double&y)
	{
		double rem = x;
		x = y;
		y = rem;
	}
	bool Check_int_num(String^s)
	{
		bool b1 = 0;
		for (int i = 0; i < s->Length; i++)
		{
			if (s[i] == '.')
			{
				b1 = 1;
			}

		}
		return b1;
	}
	bool Check_int_num(double d)
	{

		return (long long(d) != (d));
	}
	double TheFibonacciNumbers(long long n)
	{
		n--;
		return ((pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / ((pow(2, n)*sqrt(5)))) ;
	}

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;





	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;





	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(73, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(310, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Evaluate an Equation";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(171, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Please Select The Operation";
			this->label1->Click += gcnew System::EventHandler(this, &Calculator::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(538, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(310, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculate Factorial.";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(73, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(310, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Convert to Binary";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(689, 246);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(148, 45);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Check Even or Odd";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(765, 124);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 116);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Check prime or not prime.";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(73, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(310, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Convert to Decimal";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->BackColor = System::Drawing::Color::Silver;
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(277, 124);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(370, 38);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"Please Enter integer numbers";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Calculator::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->AcceptsTab = true;
			this->richTextBox2->AutoWordSelection = true;
			this->richTextBox2->BackColor = System::Drawing::Color::Silver;
			this->richTextBox2->EnableAutoDragDrop = true;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(417, 195);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(71, 28);
			this->richTextBox2->TabIndex = 13;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->AcceptsTab = true;
			this->richTextBox3->AutoWordSelection = true;
			this->richTextBox3->BackColor = System::Drawing::Color::Silver;
			this->richTextBox3->EnableAutoDragDrop = true;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(538, 195);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(71, 28);
			this->richTextBox3->TabIndex = 14;
			this->richTextBox3->Text = L"";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(460, 229);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 39);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Power";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click_2);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(460, 280);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 39);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Mod";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(69, 449);
			this->label2->MaximumSize = System::Drawing::Size(1290, 335);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 22);
			this->label2->TabIndex = 10;
			this->label2->Click += gcnew System::EventHandler(this, &Calculator::label2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(689, 124);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 49);
			this->button9->TabIndex = 17;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Silver;
			this->button10->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(320, 325);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(310, 47);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Solve Quadratic Equation";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->AcceptsTab = true;
			this->richTextBox4->AutoWordSelection = true;
			this->richTextBox4->BackColor = System::Drawing::Color::Silver;
			this->richTextBox4->EnableAutoDragDrop = true;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(312, 408);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(71, 28);
			this->richTextBox4->TabIndex = 19;
			this->richTextBox4->Text = L"a";
			// 
			// richTextBox5
			// 
			this->richTextBox5->AcceptsTab = true;
			this->richTextBox5->AutoWordSelection = true;
			this->richTextBox5->BackColor = System::Drawing::Color::Silver;
			this->richTextBox5->EnableAutoDragDrop = true;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(439, 408);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(71, 28);
			this->richTextBox5->TabIndex = 20;
			this->richTextBox5->Text = L"b";
			// 
			// richTextBox6
			// 
			this->richTextBox6->AcceptsTab = true;
			this->richTextBox6->AutoWordSelection = true;
			this->richTextBox6->BackColor = System::Drawing::Color::Silver;
			this->richTextBox6->EnableAutoDragDrop = true;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(559, 408);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(71, 28);
			this->richTextBox6->TabIndex = 21;
			this->richTextBox6->Text = L"c";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(375, 375);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 30);
			this->label3->TabIndex = 22;
			this->label3->Text = L"ax^2+bx+c.";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(689, 310);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(148, 45);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Fibonacci";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Silver;
			this->button12->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button12->Location = System::Drawing::Point(73, 101);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(198, 88);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Evaluate an Equation";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button12_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(904, 524);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkRed;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Calculator";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calculator_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		label2->Text = ("");

		String^s = richTextBox1->Text;
		s = s->Trim();
		bool b = 0;
		for (int i = 0; i < s->Length - 1; i++)
		{
			if ((s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') && (s[i + 1] == '+' || s[i + 1] == '-' || s[i + 1] == '*' || s[i + 1] == '/'))
			{
				b = 1;
				break;
			}
		}
		if ((s[0] == '*' || s[0] == '/') || (s[s->Length - 1] == '+' || s[s->Length - 1] == '-' || s[s->Length - 1] == '*' || s[s->Length - 1] == '/'))
		{
			b = 1;
		}
		if (b)
		{
			label2->Text = ("Invalid Input");
		}
		else {
			int  new_size = 0, x = 10, size_operator = 0;
			for (int i = 0; i < s->Length; i++)
			{
				if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
				{
					size_operator++;
				}
			}

			char *operator_ = new char[size_operator];
			for (int i = 0, j = 0; i < s->Length; i++)
			{
				if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
				{
					operator_[j++] = char(s[i]);
				}
			}
			new_size = size_operator + 1;
			double *arr = new double[new_size];
			for (int i = 0; i < new_size; i++)
			{
				arr[i] = 0;
			}

			for (int i = 0, j = 0; i < s->Length; i++)
			{
				if (s[i] >= '0'&&s[i] <= '9')
				{
					arr[j] *= x;
					arr[j] += double(s[i] - '0');
				}
				else if (s[i] == '.')
				{
					int power = 10;
					for (int k = i + 1; k < s->Length; k++)
					{
						if (s[k] >= '0'&&s[k] <= '9')
						{
							arr[j] += (double(s[k] - '0') / power);
						}
						else
						{
							i = k;
							break;
						}
						power *= 10;
					}
					j++;
					x = 10;
				}
				else
				{
					x = 10;
					j++;
				}
			}
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < size_operator; j++)
				{
					if (i)
					{
						if (operator_[j] == '+' || operator_[j] == '-')
						{
							double res = 0;

							if (operator_[j] == '+')
							{
								res = arr[j] + arr[j + 1];
							}
							else
							{
								res = arr[j] - arr[j + 1];
							}
							arr[j] = res;
							for (int z = j; z < size_operator - 1; z++)
							{
								swap(operator_[z], operator_[z + 1]);
							}
							size_operator--;
							arr[j + 1] = 0;
							for (int z = j + 1; z < new_size - 1; z++)
							{
								swap(arr[z], arr[z + 1]);
							}
							j--;

						}

					}
					else
					{
						if (operator_[j] == '*' || operator_[j] == '/')
						{
							double res = 0;

							if (operator_[j] == '*')
							{
								res = arr[j] * arr[j + 1];
							}
							else
							{
								res = arr[j] / arr[j + 1];
							}
							arr[j] = res;
							for (int z = j; z < size_operator - 1; z++)
							{
								swap(operator_[z], operator_[z + 1]);
							}
							size_operator--;
							arr[j + 1] = 0;
							for (int z = j + 1; z < new_size - 1; z++)
							{
								swap(arr[z], arr[z + 1]);
							}
							j--;

						}

					}
				}
			}
			String^res = System::Convert::ToString(arr[0]);
			label2->Text = ("(" + s + ") = " + res);
			delete[] operator_;
			
		
}

	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^s = richTextBox1->Text;
		s = s->Trim();
		double  c = System::Convert::ToDouble(s);
		if (Check_int_num(c))
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");

		}
		else
		{
			int f = int(c);
			String^s = System::Convert::ToString(f);
			long long res = 1;

			int T = 0, X = 0, n = 0, index_ = 0, m = 0, temp = 0;
			int *arr = new int[100000];
			for (int i = 0; i < 100000; i++)
			{
				arr[i] = 0;
			}
			arr[0] = 1; m = 0;
			for (int i = f; i >= 1; i--)
			{
				for (index_ = 0; index_ <= m; index_++)
				{
					X = arr[index_] * i + temp;
					arr[index_] = X % 10;
					temp = X / 10;
				}
				while (temp != 0)
				{
					m += 1;
					arr[m] = temp % 10;
					temp = temp / 10;
				}
			}
			String^z;
			int i = int(m);
			for (i = m; i >= 0; i--)
			{

				z += System::Convert::ToString(*(arr + i));

			}
			label2->Text = ("Factorial (" + s + "): " + z);
			delete[]arr;
		}
	};
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^s = richTextBox1->Text;
		s = s->Trim();
		if (Check_int_num(s))
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");

		}
		else
		{
			String^x;
			int n = s[s->Length - 1];
			if (n % 2)
			{
				x = "Odd";
			}
			else
			{
				x = "Even";
			}
			label2->Text = ("number (" + s + ") is :" + x);
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		label2->Text = ("");

		String^s = richTextBox1->Text;
		s = s->Trim();
		double d = System::Convert::ToDouble(s);
		if (Check_int_num(d))
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");
		}
		else
		{
			s = System::Convert::ToString(long long(d));
			bool decimal = 0;
			for (int i = 0; i < s->Length; i++)
			{
				if (s[i] <= '9'&&s[i] > '1')
				{
					decimal = 1;
				}
			}
			if (decimal)
			{
				label2->Text = " (" + s + ")  Decimal number without conversion.";
			}

			else
			{
				int f = s->Length - 1;
				long long  ans = 0;
				for (int i = 0; i < s->Length; i++)
				{
					int num = s[i] - '0';
					ans += long long(num*pow(2, f));
					f--;
				}

				String^x = System::Convert::ToString(ans);
				label2->Text = ("number (" + s + ") in" + " Decimal = " + x);
			}
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		String^s = richTextBox1->Text;
		s = s->Trim();
		double  c = System::Convert::ToDouble(s);
		if (Check_int_num(c))
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");

		}
		else
		{
			long long n = long long(c);
			String^s = System::Convert::ToString(n);
			String^x;
			long long  res = 1;

			int counter = 0;
			if (n == 1 || n == 0) { x = "Neither Prime Nor Not Prime"; }
			else
			{
				for (long long i = 1; i*i <= n; i++)
				{
					if (n%i == 0)
					{
						counter++;
						if (i*i != n)
						{
							counter++;
						}
					}
				}

				if (counter == 2) { x = "Prime"; }
				else { x = "Not Prime"; }
			}
			label2->Text = ("number (" + s + ") " + x);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


		String^s = richTextBox1->Text;
		s = s->Trim();

		double  num = System::Convert::ToDouble(s);
		if (Check_int_num(num))
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");

		}
		else {

			int *arr = new int[50], i = 0;
			long long n = long long(num);
			while (n)
			{
				int mod = n % 2;
				arr[i] = mod;
				n /= 2;
				i++;
			}
			String^x;
			while (i--)
			{
				x += System::Convert::ToString(arr[i]);

			}
			label2->Text = ("number (" + s + ") in" + " Binary = " + x);
			delete[]arr;
		}

	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{


	}
	private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e)
	{


	}
	private: System::Void button7_Click_2(System::Object^  sender, System::EventArgs^  e)
	{



		String^s = richTextBox2->Text;
		String^x = richTextBox3->Text;
		s = s->Trim();
		x = x->Trim();
		double  Base = System::Convert::ToDouble(s);
		double  P = System::Convert::ToDouble(x);

		if (Check_int_num(P))
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");

		}
		else
		{
			long long Power = long long(P);
			if (Power < 0)
			{
				label2->Text = ("Invalid Input Please Enter Positive numbers");
			}
			else
			{
				label2->Text = ("Power (" + s + ") :" + System::Convert::ToString((pow(Base, Power))));
			}
		}

	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
	{


		String^s = richTextBox2->Text;
		String^x = richTextBox3->Text;
		s = s->Trim();
		x = x->Trim();
		double  a = System::Convert::ToDouble(s);
		double  n = System::Convert::ToDouble(x);
			if (n <= 0) 
			{
				label2->Text = "invalid input";
			}
			else
			{
				long long  k=long long(mod(mod(a, n) + n, n));
				label2->Text = System::Convert::ToString(k);
			}
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
	{

		String ^s = richTextBox1->Text;
		double num = System::Convert::ToDouble(s);
		if (num < 0)
		{
			label2->Text = ("Invalid Input Please Enter integer numbers");
		}
		else
		{
			double start = 0, endi = num, persison = 0.0000000001;
			while (endi - start > persison)
			{
				double mid = (start + endi) / 2;

				double ans = mid*mid;
				if (ans == num)
				{
					label2->Text = System::Convert::ToString(mid);
					break;
				}
				else if (ans < num)
				{
					start = mid;
				}
				else
				{
					endi = mid;
				}
			}
			double x = ((start + endi) / 2);
			if ((x - int(x)) <= persison)
			{
				label2->Text = "Square root (" + s + ") : " + System::Convert::ToString(int(x));

			}
			else if (((int(x) + 1) - x) <= persison)
			{
				label2->Text = "Square root (" + s + ") : " + System::Convert::ToString(int(x) + 1);

			}
			else
			{
				label2->Text = "Square root (" + s + ") : " + System::Convert::ToString(x);

			}

		}


	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
	{


		double a, b, c, res1, res2;
		int num_of_the_roots = 0;
		String ^s = richTextBox1->Text;
		String ^z;
		String ^y;
		String ^Input_a = richTextBox4->Text;
		String ^Input_b = richTextBox5->Text;
		String ^Input_c = richTextBox6->Text;
		a = System::Convert::ToDouble(Input_a);
		b = System::Convert::ToDouble(Input_b);
		c = System::Convert::ToDouble(Input_c);
		if (a == 0)
		{
			if (b == 0)
			{
				if (c == 0)
				{
					num_of_the_roots = 1;
					z = System::Convert::ToString(-1);
				}
				else
				{
					num_of_the_roots = 0;
				}
			}
			else
			{
				num_of_the_roots = 1;
				z = System::Convert::ToString((-c / b));
			}
		}
		else
		{
			if (b * b - 4 * a * c < 0)
			{
				num_of_the_roots = 0;
			}
			else if (b * b - 4 * a * c == 0)
			{
				res1 = (-b) * 1.0 / (2 * a);
				num_of_the_roots = 1;
				z = System::Convert::ToString(res1);
			}
			else
			{
				res1 = (-b + sqrt(b * b - 4 * a * c)) * 1.0 / (2 * a);
				res2 = (-b - sqrt(b * b - 4 * a * c)) * 1.0 / (2 * a);

				num_of_the_roots = 2;
				z = System::Convert::ToString(res1);
				y = System::Convert::ToString(res2);
			}
		}
		if (num_of_the_roots == 2)
		{
			label2->Text = ("First Root= " + z + "     Second Root" + y);
		}
		else if (num_of_the_roots)
		{
			label2->Text = ("The Root= " + z);
		}
		else
		{
			label2->Text = "Answer Does Not Exsit ";
		}
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^s = richTextBox1->Text;
	long long x = System::Convert::ToInt32(s);
	label2->Text = System::Convert::ToString(Fixed2(TheFibonacciNumbers(x)));
}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^s = richTextBox1->Text;
		s = s->Trim();
		bool b = 0;
		for (int i = 0; i < s->Length - 1; i++)
		{
			if ((s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') && (s[i + 1] == '+' || s[i + 1] == '-' || s[i + 1] == '*' || s[i + 1] == '/'))
			{
				b = 1;
				break;
			}
		}
		if ((s[0] == '*' || s[0] == '/') || (s[s->Length - 1] == '+' || s[s->Length - 1] == '-' || s[s->Length - 1] == '*' || s[s->Length - 1] == '/'))
		{
			b = 1;
		}
		if (b)
		{
			label2->Text = ("Invalid Input");
		}
		else {
			int  new_size = 0, x = 10, size_operator = 0;
			for (int i = 0; i < s->Length; i++)
			{
				if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
				{
					size_operator++;
				}
			}

			char *operator_ = new char[size_operator];
			for (int i = 0, j = 0; i < s->Length; i++)
			{
				if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
				{
					operator_[j++] = char(s[i]);
				}
			}
			new_size = size_operator + 1;
			double *arr = new double[new_size];
			for (int i = 0; i < new_size; i++)
			{
				arr[i] = 0;
			}
			for (int i = 0, j = 0; i < s->Length; i++)
			{
				if (s[i] >= '0'&&s[i] <= '9')
				{
					arr[j] *= x;
					arr[j] += double(s[i] - '0');
				}
				else if (s[i] == '.')
				{
					int power = 10;
					for (int k = i + 1; k < s->Length; k++)
					{
						if (s[k] >= '0'&&s[k] <= '9')
						{
							arr[j] += (double(s[k] - '0') / power);
						}
						else
						{
							i = k;
							break;
						}
						power *= 10;
					}
					j++;
					x = 10;
				}
				else
				{
					x = 10;
					j++;
				}
			}

			for (int j = size_operator - 1; j >= 0; j--)
			{

				double res = 0;
				if (operator_[j] == '+')
				{
					res = arr[j] + arr[j + 1];
				}
				else if (operator_[j] == '-')
				{
					res = arr[j] - arr[j + 1];
				}
				else if (operator_[j] == '*')
				{
					res = arr[j] * arr[j + 1];
				}
				else if (operator_[j] == '/')
				{
					res = arr[j] / arr[j + 1];
				}
				arr[j] = res;
				for (int z = j; z < size_operator - 1; z++)
				{
					swap(operator_[z], operator_[z + 1]);
				}
			}
			String^res = System::Convert::ToString(arr[0]);
			label2->Text = ("(" + s + ") = " + res);
			delete[] operator_;
		}
	}
}
	; }
