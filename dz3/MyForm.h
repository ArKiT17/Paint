#pragma once

namespace dz3 {

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
		System::Windows::Forms::PaintEventArgs^ paint;
		Brush^ myBrush = Brushes::White;
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textX;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textY;
	private: System::Windows::Forms::TextBox^ textH;

	private: System::Windows::Forms::TextBox^ textW;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioText;

	private: System::Windows::Forms::TextBox^ textText;

		   Pen^ myPen = Pens::Black;
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioSquare;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::RadioButton^ radioRectangle;
	private: System::Windows::Forms::RadioButton^ radioEllipse;

	private: System::Windows::Forms::RadioButton^ radioCircle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonRedFill;
	private: System::Windows::Forms::Button^ buttonOrangeFill;
	private: System::Windows::Forms::Button^ buttonYellowFill;
	private: System::Windows::Forms::Button^ buttonGreenFill;
	private: System::Windows::Forms::Button^ buttonBlueFill;
	private: System::Windows::Forms::Button^ buttonBlackFill;
	private: System::Windows::Forms::Button^ buttonWhiteFill;
	private: System::Windows::Forms::Button^ buttonwhiteLine;
	private: System::Windows::Forms::Button^ buttonBlackLine;
	private: System::Windows::Forms::Button^ buttonBlueLine;
	private: System::Windows::Forms::Button^ buttonGreenLine;
	private: System::Windows::Forms::Button^ buttonYellowLine;
	private: System::Windows::Forms::Button^ buttonOrangeLine;
	private: System::Windows::Forms::Button^ buttonRedLine;
	private: System::ComponentModel::IContainer^ components;

	private:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioSquare = (gcnew System::Windows::Forms::RadioButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->radioRectangle = (gcnew System::Windows::Forms::RadioButton());
			this->radioEllipse = (gcnew System::Windows::Forms::RadioButton());
			this->radioCircle = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonRedFill = (gcnew System::Windows::Forms::Button());
			this->buttonOrangeFill = (gcnew System::Windows::Forms::Button());
			this->buttonYellowFill = (gcnew System::Windows::Forms::Button());
			this->buttonGreenFill = (gcnew System::Windows::Forms::Button());
			this->buttonBlueFill = (gcnew System::Windows::Forms::Button());
			this->buttonBlackFill = (gcnew System::Windows::Forms::Button());
			this->buttonWhiteFill = (gcnew System::Windows::Forms::Button());
			this->buttonwhiteLine = (gcnew System::Windows::Forms::Button());
			this->buttonBlackLine = (gcnew System::Windows::Forms::Button());
			this->buttonBlueLine = (gcnew System::Windows::Forms::Button());
			this->buttonGreenLine = (gcnew System::Windows::Forms::Button());
			this->buttonYellowLine = (gcnew System::Windows::Forms::Button());
			this->buttonOrangeLine = (gcnew System::Windows::Forms::Button());
			this->buttonRedLine = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textX = (gcnew System::Windows::Forms::TextBox());
			this->textY = (gcnew System::Windows::Forms::TextBox());
			this->textH = (gcnew System::Windows::Forms::TextBox());
			this->textW = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioText = (gcnew System::Windows::Forms::RadioButton());
			this->textText = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(408, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(544, 408);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// radioSquare
			// 
			this->radioSquare->AutoSize = true;
			this->radioSquare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioSquare->ImageKey = L"select_selection_icon_218256.ico";
			this->radioSquare->ImageList = this->imageList1;
			this->radioSquare->Location = System::Drawing::Point(32, 176);
			this->radioSquare->Name = L"radioSquare";
			this->radioSquare->Size = System::Drawing::Size(147, 100);
			this->radioSquare->TabIndex = 1;
			this->radioSquare->TabStop = true;
			this->radioSquare->Text = L"                ";
			this->radioSquare->UseVisualStyleBackColor = true;
			this->radioSquare->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioSquare_CheckedChanged);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"select_selection_icon_218256.ico");
			this->imageList1->Images->SetKeyName(1, L"selection_ellipse_icon_138207.ico");
			this->imageList1->Images->SetKeyName(2, L"software-selection-oval_98356.ico");
			this->imageList1->Images->SetKeyName(3, L"software-selection-rectangle_97727.ico");
			// 
			// radioRectangle
			// 
			this->radioRectangle->AutoSize = true;
			this->radioRectangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioRectangle->ImageKey = L"software-selection-rectangle_97727.ico";
			this->radioRectangle->ImageList = this->imageList1;
			this->radioRectangle->Location = System::Drawing::Point(208, 176);
			this->radioRectangle->Name = L"radioRectangle";
			this->radioRectangle->Size = System::Drawing::Size(147, 100);
			this->radioRectangle->TabIndex = 2;
			this->radioRectangle->TabStop = true;
			this->radioRectangle->Text = L"                ";
			this->radioRectangle->UseVisualStyleBackColor = true;
			this->radioRectangle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioRectangle_CheckedChanged);
			// 
			// radioEllipse
			// 
			this->radioEllipse->AutoSize = true;
			this->radioEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioEllipse->ImageKey = L"software-selection-oval_98356.ico";
			this->radioEllipse->ImageList = this->imageList1;
			this->radioEllipse->Location = System::Drawing::Point(208, 304);
			this->radioEllipse->Name = L"radioEllipse";
			this->radioEllipse->Size = System::Drawing::Size(147, 100);
			this->radioEllipse->TabIndex = 4;
			this->radioEllipse->TabStop = true;
			this->radioEllipse->Text = L"                ";
			this->radioEllipse->UseVisualStyleBackColor = true;
			this->radioEllipse->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioEllipse_CheckedChanged);
			// 
			// radioCircle
			// 
			this->radioCircle->AutoSize = true;
			this->radioCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioCircle->ImageKey = L"selection_ellipse_icon_138207.ico";
			this->radioCircle->ImageList = this->imageList1;
			this->radioCircle->Location = System::Drawing::Point(32, 304);
			this->radioCircle->Name = L"radioCircle";
			this->radioCircle->Size = System::Drawing::Size(147, 100);
			this->radioCircle->TabIndex = 3;
			this->radioCircle->TabStop = true;
			this->radioCircle->Text = L"                ";
			this->radioCircle->UseVisualStyleBackColor = true;
			this->radioCircle->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioCircle_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Заливка";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Контур";
			// 
			// buttonRedFill
			// 
			this->buttonRedFill->BackColor = System::Drawing::Color::Red;
			this->buttonRedFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRedFill->Location = System::Drawing::Point(160, 40);
			this->buttonRedFill->Name = L"buttonRedFill";
			this->buttonRedFill->Size = System::Drawing::Size(32, 32);
			this->buttonRedFill->TabIndex = 7;
			this->buttonRedFill->UseVisualStyleBackColor = false;
			this->buttonRedFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonOrangeFill
			// 
			this->buttonOrangeFill->BackColor = System::Drawing::Color::Orange;
			this->buttonOrangeFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOrangeFill->Location = System::Drawing::Point(192, 40);
			this->buttonOrangeFill->Name = L"buttonOrangeFill";
			this->buttonOrangeFill->Size = System::Drawing::Size(32, 32);
			this->buttonOrangeFill->TabIndex = 8;
			this->buttonOrangeFill->UseVisualStyleBackColor = false;
			this->buttonOrangeFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonYellowFill
			// 
			this->buttonYellowFill->BackColor = System::Drawing::Color::Yellow;
			this->buttonYellowFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonYellowFill->Location = System::Drawing::Point(224, 40);
			this->buttonYellowFill->Name = L"buttonYellowFill";
			this->buttonYellowFill->Size = System::Drawing::Size(32, 32);
			this->buttonYellowFill->TabIndex = 9;
			this->buttonYellowFill->UseVisualStyleBackColor = false;
			this->buttonYellowFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonGreenFill
			// 
			this->buttonGreenFill->BackColor = System::Drawing::Color::Lime;
			this->buttonGreenFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGreenFill->Location = System::Drawing::Point(256, 40);
			this->buttonGreenFill->Name = L"buttonGreenFill";
			this->buttonGreenFill->Size = System::Drawing::Size(32, 32);
			this->buttonGreenFill->TabIndex = 10;
			this->buttonGreenFill->UseVisualStyleBackColor = false;
			this->buttonGreenFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonBlueFill
			// 
			this->buttonBlueFill->BackColor = System::Drawing::Color::Blue;
			this->buttonBlueFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBlueFill->Location = System::Drawing::Point(288, 40);
			this->buttonBlueFill->Name = L"buttonBlueFill";
			this->buttonBlueFill->Size = System::Drawing::Size(32, 32);
			this->buttonBlueFill->TabIndex = 11;
			this->buttonBlueFill->UseVisualStyleBackColor = false;
			this->buttonBlueFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonBlackFill
			// 
			this->buttonBlackFill->BackColor = System::Drawing::Color::Black;
			this->buttonBlackFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBlackFill->Location = System::Drawing::Point(320, 40);
			this->buttonBlackFill->Name = L"buttonBlackFill";
			this->buttonBlackFill->Size = System::Drawing::Size(32, 32);
			this->buttonBlackFill->TabIndex = 12;
			this->buttonBlackFill->UseVisualStyleBackColor = false;
			this->buttonBlackFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonWhiteFill
			// 
			this->buttonWhiteFill->BackColor = System::Drawing::Color::White;
			this->buttonWhiteFill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWhiteFill->Location = System::Drawing::Point(352, 40);
			this->buttonWhiteFill->Name = L"buttonWhiteFill";
			this->buttonWhiteFill->Size = System::Drawing::Size(32, 32);
			this->buttonWhiteFill->TabIndex = 13;
			this->buttonWhiteFill->UseVisualStyleBackColor = false;
			this->buttonWhiteFill->Click += gcnew System::EventHandler(this, &MyForm::buttonFill_Click);
			// 
			// buttonwhiteLine
			// 
			this->buttonwhiteLine->BackColor = System::Drawing::Color::White;
			this->buttonwhiteLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonwhiteLine->Location = System::Drawing::Point(352, 96);
			this->buttonwhiteLine->Name = L"buttonwhiteLine";
			this->buttonwhiteLine->Size = System::Drawing::Size(32, 32);
			this->buttonwhiteLine->TabIndex = 20;
			this->buttonwhiteLine->UseVisualStyleBackColor = false;
			this->buttonwhiteLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// buttonBlackLine
			// 
			this->buttonBlackLine->BackColor = System::Drawing::Color::Black;
			this->buttonBlackLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBlackLine->Location = System::Drawing::Point(320, 96);
			this->buttonBlackLine->Name = L"buttonBlackLine";
			this->buttonBlackLine->Size = System::Drawing::Size(32, 32);
			this->buttonBlackLine->TabIndex = 19;
			this->buttonBlackLine->UseVisualStyleBackColor = false;
			this->buttonBlackLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// buttonBlueLine
			// 
			this->buttonBlueLine->BackColor = System::Drawing::Color::Blue;
			this->buttonBlueLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBlueLine->Location = System::Drawing::Point(288, 96);
			this->buttonBlueLine->Name = L"buttonBlueLine";
			this->buttonBlueLine->Size = System::Drawing::Size(32, 32);
			this->buttonBlueLine->TabIndex = 18;
			this->buttonBlueLine->UseVisualStyleBackColor = false;
			this->buttonBlueLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// buttonGreenLine
			// 
			this->buttonGreenLine->BackColor = System::Drawing::Color::Lime;
			this->buttonGreenLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGreenLine->Location = System::Drawing::Point(256, 96);
			this->buttonGreenLine->Name = L"buttonGreenLine";
			this->buttonGreenLine->Size = System::Drawing::Size(32, 32);
			this->buttonGreenLine->TabIndex = 17;
			this->buttonGreenLine->UseVisualStyleBackColor = false;
			this->buttonGreenLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// buttonYellowLine
			// 
			this->buttonYellowLine->BackColor = System::Drawing::Color::Yellow;
			this->buttonYellowLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonYellowLine->Location = System::Drawing::Point(224, 96);
			this->buttonYellowLine->Name = L"buttonYellowLine";
			this->buttonYellowLine->Size = System::Drawing::Size(32, 32);
			this->buttonYellowLine->TabIndex = 16;
			this->buttonYellowLine->UseVisualStyleBackColor = false;
			this->buttonYellowLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// buttonOrangeLine
			// 
			this->buttonOrangeLine->BackColor = System::Drawing::Color::Orange;
			this->buttonOrangeLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOrangeLine->Location = System::Drawing::Point(192, 96);
			this->buttonOrangeLine->Name = L"buttonOrangeLine";
			this->buttonOrangeLine->Size = System::Drawing::Size(32, 32);
			this->buttonOrangeLine->TabIndex = 15;
			this->buttonOrangeLine->UseVisualStyleBackColor = false;
			this->buttonOrangeLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// buttonRedLine
			// 
			this->buttonRedLine->BackColor = System::Drawing::Color::Red;
			this->buttonRedLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRedLine->Location = System::Drawing::Point(160, 96);
			this->buttonRedLine->Name = L"buttonRedLine";
			this->buttonRedLine->Size = System::Drawing::Size(32, 32);
			this->buttonRedLine->TabIndex = 14;
			this->buttonRedLine->UseVisualStyleBackColor = false;
			this->buttonRedLine->Click += gcnew System::EventHandler(this, &MyForm::buttonLine_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(40, 480);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"X";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(40, 528);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 25);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Y";
			// 
			// textX
			// 
			this->textX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textX->Location = System::Drawing::Point(72, 480);
			this->textX->Name = L"textX";
			this->textX->Size = System::Drawing::Size(64, 30);
			this->textX->TabIndex = 24;
			this->textX->Text = L"0";
			// 
			// textY
			// 
			this->textY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textY->Location = System::Drawing::Point(72, 528);
			this->textY->Name = L"textY";
			this->textY->Size = System::Drawing::Size(64, 30);
			this->textY->TabIndex = 25;
			this->textY->Text = L"0";
			// 
			// textH
			// 
			this->textH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textH->Location = System::Drawing::Point(304, 528);
			this->textH->Name = L"textH";
			this->textH->Size = System::Drawing::Size(64, 30);
			this->textH->TabIndex = 29;
			this->textH->Text = L"0";
			this->textH->Visible = false;
			// 
			// textW
			// 
			this->textW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textW->Location = System::Drawing::Point(304, 480);
			this->textW->Name = L"textW";
			this->textW->Size = System::Drawing::Size(64, 30);
			this->textW->TabIndex = 28;
			this->textW->Text = L"0";
			this->textW->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(200, 528);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 25);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Висота";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(200, 480);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 25);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Ширина";
			this->label7->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(464, 480);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 64);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Побудувати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(712, 480);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 64);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioText
			// 
			this->radioText->AutoSize = true;
			this->radioText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioText->ImageKey = L"(отсутствует)";
			this->radioText->ImageList = this->imageList1;
			this->radioText->Location = System::Drawing::Point(24, 424);
			this->radioText->Name = L"radioText";
			this->radioText->Size = System::Drawing::Size(117, 36);
			this->radioText->TabIndex = 32;
			this->radioText->TabStop = true;
			this->radioText->Text = L"Напис";
			this->radioText->UseVisualStyleBackColor = true;
			this->radioText->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textText
			// 
			this->textText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textText->Location = System::Drawing::Point(152, 432);
			this->textText->Name = L"textText";
			this->textText->Size = System::Drawing::Size(216, 30);
			this->textText->TabIndex = 34;
			this->textText->Text = L"0";
			this->textText->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 593);
			this->Controls->Add(this->textText);
			this->Controls->Add(this->radioText);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textH);
			this->Controls->Add(this->textW);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textY);
			this->Controls->Add(this->textX);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->buttonwhiteLine);
			this->Controls->Add(this->buttonBlackLine);
			this->Controls->Add(this->buttonBlueLine);
			this->Controls->Add(this->buttonGreenLine);
			this->Controls->Add(this->buttonYellowLine);
			this->Controls->Add(this->buttonOrangeLine);
			this->Controls->Add(this->buttonRedLine);
			this->Controls->Add(this->buttonWhiteFill);
			this->Controls->Add(this->buttonBlackFill);
			this->Controls->Add(this->buttonBlueFill);
			this->Controls->Add(this->buttonGreenFill);
			this->Controls->Add(this->buttonYellowFill);
			this->Controls->Add(this->buttonOrangeFill);
			this->Controls->Add(this->buttonRedFill);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioEllipse);
			this->Controls->Add(this->radioCircle);
			this->Controls->Add(this->radioRectangle);
			this->Controls->Add(this->radioSquare);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Paint";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonFill_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (button->Name == "buttonRedFill")
			myBrush = Brushes::Red;
		if (button->Name == "buttonOrangeFill")
			myBrush = Brushes::Orange;
		if (button->Name == "buttonYellowFill")
			myBrush = Brushes::Yellow;
		if (button->Name == "buttonGreenFill")
			myBrush = Brushes::Lime;
		if (button->Name == "buttonBlueFill")
			myBrush = Brushes::Blue;
		if (button->Name == "buttonBlackFill")
			myBrush = Brushes::Black;
		if (button->Name == "buttonWhiteFill")
			myBrush = Brushes::White;
	}
	private: System::Void buttonLine_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (button->Name == "buttonRedLine")
			myPen = Pens::Red;
		if (button->Name == "buttonOrangeLine")
			myPen = Pens::Orange;
		if (button->Name == "buttonYellowLine")
			myPen = Pens::Yellow;
		if (button->Name == "buttonGreenLine")
			myPen = Pens::Lime;
		if (button->Name == "buttonBlueLine")
			myPen = Pens::Blue;
		if (button->Name == "buttonBlackLine")
			myPen = Pens::Black;
		if (button->Name == "buttonWhiteLine")
			myPen = Pens::White;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textW->Text = "0";
	textH->Text = "0";
	pictureBox1->Refresh();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Refresh();
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	if (radioSquare->Checked) {
		e->Graphics->FillRectangle(
			myBrush, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text), Convert::ToInt32(textW->Text));
		e->Graphics->DrawRectangle(
			myPen, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text), Convert::ToInt32(textW->Text));
	}
	if (radioRectangle->Checked) {
		e->Graphics->FillRectangle(
			myBrush, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text), Convert::ToInt32(textH->Text));
		e->Graphics->DrawRectangle(
			myPen, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text), Convert::ToInt32(textH->Text));
	}
	if (radioCircle->Checked) {
		e->Graphics->FillEllipse(
			myBrush, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text)*2, Convert::ToInt32(textW->Text)*2);
		e->Graphics->DrawEllipse(
			myPen, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text)*2, Convert::ToInt32(textW->Text)*2);
	}
	if (radioEllipse->Checked) {
		e->Graphics->FillEllipse(
			myBrush, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text), Convert::ToInt32(textH->Text));
		e->Graphics->DrawEllipse(
			myPen, Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),
			Convert::ToInt32(textW->Text), Convert::ToInt32(textH->Text));
	}
	if (radioText->Checked) {
		if (Convert::ToInt32(textW->Text) > 0) {
			System::Drawing::Font^ rFont1 = gcnew System::Drawing::Font("Arial",
				Convert::ToInt32(textW->Text), FontStyle::Regular);
			e->Graphics->DrawString(textText->Text, rFont1, myBrush,
				Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text));
		}
	}
}
private: System::Void radioSquare_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Сторона";
	label7->Visible = true;
	textW->Visible = true;
	label6->Visible = false;
	textH->Visible = false;
	textText->Visible = false;
}
private: System::Void radioCircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Радіус";
	label7->Visible = true;
	textW->Visible = true;
	label6->Visible = false;
	textH->Visible = false;
	textText->Visible = false;
}
private: System::Void radioRectangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Ширина";
	label7->Visible = true;
	label6->Visible = true;
	textW->Visible = true;
	textH->Visible = true;
	textText->Visible = false;
}
private: System::Void radioEllipse_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Ширина";
	label7->Visible = true;
	label6->Visible = true;
	textW->Visible = true;
	textH->Visible = true;
	textText->Visible = false;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Розмір";
	label7->Visible = true;
	label6->Visible = false;
	textW->Visible = true;
	textH->Visible = false;
	textText->Visible = true;
}
};
}
