#pragma once

namespace Project1
{

	enum Action
	{
		Act_Add,
		Act_Sub,
		Act_Mul,
		Act_Div,
		Act_None = 99
	};

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

/// <summary>
/// Podsumowanie informacji o MyForm
/// </summary>
public
ref class MyForm : public System::Windows::Forms::Form
{
public:
	MyForm(void)
	{
		InitializeComponent();
		//
		//TODO: W tym miejscu dodaj kod konstruktora
		//
	}



	const int WM_NCLBUTTONDOWN = 0xA1;
	const int HT_CAPTION = 0x2;

private:
	System::Windows::Forms::Label ^ label1;

private:
	System::Windows::Forms::Button ^ Button9;

private:
	System::Windows::Forms::Button ^ ButtonAdd;

private:
	System::Windows::Forms::Button ^ ButtonSub;

private:
	System::Windows::Forms::Button ^ Button0;

private:
	System::Windows::Forms::Button ^ ButtonEqu;

private:
	System::Windows::Forms::Button ^ ButtonMul;

private:
	System::Windows::Forms::Button ^ Button6;

private:
	System::Windows::Forms::Button ^ Button7;

private:
	System::Windows::Forms::Button ^ Button8;

private:
	System::Windows::Forms::Button ^ ButtonDot;

private:
	System::Windows::Forms::Button ^ Button1;

private:
	System::Windows::Forms::Button ^ Button2;

private:
	System::Windows::Forms::Button ^ Button3;

private:
	System::Windows::Forms::Button ^ Button4;

private:
	System::Windows::Forms::Button ^ Button5;

private:
	System::String ^ val1 = String::Empty;
	System::String ^ val2 = String::Empty;
	MyForm::Action action = Action::Act_None;
	char act_char = ' ';
	System::Boolean first = true;
	System::Boolean next = false;

public:
	[DllImport("user32.dll")] static int SendMessage(IntPtr hWnd, int Msg, int wParam, int lParam);

	[DllImport("user32.dll")] static bool ReleaseCapture();

protected:
	/// <summary>
	/// Wyczy�� wszystkie u�ywane zasoby.
	/// </summary>
	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}

private:
	System::Windows::Forms::TableLayoutPanel ^ TableLayoutPanel;

protected:
private:
	System::Windows::Forms::Label ^ DisplayLabel;

private:
	System::Windows::Forms::Button ^ ButtonClear;

private:
	System::Windows::Forms::Button ^ ButtonBack;

private:
	System::Windows::Forms::Button ^ ButtonDiv;

private:
	System::Windows::Forms::Panel ^ panel1;

private:
	System::Windows::Forms::Button ^ ButtonClose;

protected:
protected:
private:
	/// <summary>
	/// Wymagana zmienna projektanta.
	/// </summary>
	System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
	/// jej zawarto�ci w edytorze kodu.
	/// </summary>
	void InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->TableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->ButtonDot = (gcnew System::Windows::Forms::Button());
		this->Button1 = (gcnew System::Windows::Forms::Button());
		this->Button2 = (gcnew System::Windows::Forms::Button());
		this->Button3 = (gcnew System::Windows::Forms::Button());
		this->Button4 = (gcnew System::Windows::Forms::Button());
		this->Button6 = (gcnew System::Windows::Forms::Button());
		this->Button7 = (gcnew System::Windows::Forms::Button());
		this->Button8 = (gcnew System::Windows::Forms::Button());
		this->Button5 = (gcnew System::Windows::Forms::Button());
		this->Button9 = (gcnew System::Windows::Forms::Button());
		this->ButtonAdd = (gcnew System::Windows::Forms::Button());
		this->ButtonSub = (gcnew System::Windows::Forms::Button());
		this->Button0 = (gcnew System::Windows::Forms::Button());
		this->ButtonEqu = (gcnew System::Windows::Forms::Button());
		this->ButtonMul = (gcnew System::Windows::Forms::Button());
		this->ButtonDiv = (gcnew System::Windows::Forms::Button());
		this->ButtonBack = (gcnew System::Windows::Forms::Button());
		this->DisplayLabel = (gcnew System::Windows::Forms::Label());
		this->ButtonClear = (gcnew System::Windows::Forms::Button());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->ButtonClose = (gcnew System::Windows::Forms::Button());
		this->TableLayoutPanel->SuspendLayout();
		this->panel1->SuspendLayout();
		this->SuspendLayout();
		// 
		// TableLayoutPanel
		// 
		this->TableLayoutPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TableLayoutPanel.BackgroundImage")));
		this->TableLayoutPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->TableLayoutPanel->ColumnCount = 4;
		this->TableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			25)));
		this->TableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			25)));
		this->TableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			25)));
		this->TableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			25)));
		this->TableLayoutPanel->Controls->Add(this->ButtonDot, 2, 6);
		this->TableLayoutPanel->Controls->Add(this->Button1, 0, 5);
		this->TableLayoutPanel->Controls->Add(this->Button2, 1, 5);
		this->TableLayoutPanel->Controls->Add(this->Button3, 2, 5);
		this->TableLayoutPanel->Controls->Add(this->Button4, 0, 4);
		this->TableLayoutPanel->Controls->Add(this->Button6, 2, 4);
		this->TableLayoutPanel->Controls->Add(this->Button7, 0, 3);
		this->TableLayoutPanel->Controls->Add(this->Button8, 1, 3);
		this->TableLayoutPanel->Controls->Add(this->Button5, 1, 4);
		this->TableLayoutPanel->Controls->Add(this->Button9, 2, 3);
		this->TableLayoutPanel->Controls->Add(this->ButtonAdd, 3, 4);
		this->TableLayoutPanel->Controls->Add(this->ButtonSub, 3, 3);
		this->TableLayoutPanel->Controls->Add(this->Button0, 0, 6);
		this->TableLayoutPanel->Controls->Add(this->ButtonEqu, 3, 5);
		this->TableLayoutPanel->Controls->Add(this->ButtonMul, 3, 2);
		this->TableLayoutPanel->Controls->Add(this->ButtonDiv, 2, 2);
		this->TableLayoutPanel->Controls->Add(this->ButtonBack, 1, 2);
		this->TableLayoutPanel->Controls->Add(this->DisplayLabel, 0, 1);
		this->TableLayoutPanel->Controls->Add(this->ButtonClear, 0, 2);
		this->TableLayoutPanel->Controls->Add(this->panel1, 0, 0);
		this->TableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
		this->TableLayoutPanel->Location = System::Drawing::Point(0, 0);
		this->TableLayoutPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->TableLayoutPanel->Name = L"TableLayoutPanel";
		this->TableLayoutPanel->RowCount = 7;
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.78947F)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.84211F)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.84211F)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.84211F)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.84211F)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.84211F)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
		this->TableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
		this->TableLayoutPanel->Size = System::Drawing::Size(341, 519);
		this->TableLayoutPanel->TabIndex = 0;
		// 
		// ButtonDot
		// 
		this->ButtonDot->AutoSize = true;
		this->ButtonDot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonDot->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonDot->FlatAppearance->BorderSize = 0;
		this->ButtonDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonDot->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonDot->ForeColor = System::Drawing::Color::White;
		this->ButtonDot->Location = System::Drawing::Point(175, 442);
		this->ButtonDot->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonDot->Name = L"ButtonDot";
		this->ButtonDot->Size = System::Drawing::Size(75, 72);
		this->ButtonDot->TabIndex = 20;
		this->ButtonDot->Text = L",";
		this->ButtonDot->UseVisualStyleBackColor = false;
		this->ButtonDot->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button1
		// 
		this->Button1->AutoSize = true;
		this->Button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button1->FlatAppearance->BorderSize = 0;
		this->Button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button1->ForeColor = System::Drawing::Color::White;
		this->Button1->Location = System::Drawing::Point(5, 362);
		this->Button1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button1->Name = L"Button1";
		this->Button1->Size = System::Drawing::Size(75, 70);
		this->Button1->TabIndex = 19;
		this->Button1->Text = L"1";
		this->Button1->UseVisualStyleBackColor = false;
		this->Button1->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button2
		// 
		this->Button2->AutoSize = true;
		this->Button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button2->FlatAppearance->BorderSize = 0;
		this->Button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button2->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button2->ForeColor = System::Drawing::Color::White;
		this->Button2->Location = System::Drawing::Point(90, 362);
		this->Button2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button2->Name = L"Button2";
		this->Button2->Size = System::Drawing::Size(75, 70);
		this->Button2->TabIndex = 18;
		this->Button2->Text = L"2";
		this->Button2->UseVisualStyleBackColor = false;
		this->Button2->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button3
		// 
		this->Button3->AutoSize = true;
		this->Button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button3->FlatAppearance->BorderSize = 0;
		this->Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button3->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button3->ForeColor = System::Drawing::Color::White;
		this->Button3->Location = System::Drawing::Point(175, 362);
		this->Button3->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button3->Name = L"Button3";
		this->Button3->Size = System::Drawing::Size(75, 70);
		this->Button3->TabIndex = 17;
		this->Button3->Text = L"3";
		this->Button3->UseVisualStyleBackColor = false;
		this->Button3->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button4
		// 
		this->Button4->AutoSize = true;
		this->Button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button4->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button4->FlatAppearance->BorderSize = 0;
		this->Button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button4->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button4->ForeColor = System::Drawing::Color::White;
		this->Button4->Location = System::Drawing::Point(5, 282);
		this->Button4->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button4->Name = L"Button4";
		this->Button4->Size = System::Drawing::Size(75, 70);
		this->Button4->TabIndex = 16;
		this->Button4->Text = L"4";
		this->Button4->UseVisualStyleBackColor = false;
		this->Button4->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button6
		// 
		this->Button6->AutoSize = true;
		this->Button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button6->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button6->FlatAppearance->BorderSize = 0;
		this->Button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button6->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button6->ForeColor = System::Drawing::Color::White;
		this->Button6->Location = System::Drawing::Point(175, 282);
		this->Button6->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button6->Name = L"Button6";
		this->Button6->Size = System::Drawing::Size(75, 70);
		this->Button6->TabIndex = 14;
		this->Button6->Text = L"6";
		this->Button6->UseVisualStyleBackColor = false;
		this->Button6->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button7
		// 
		this->Button7->AutoSize = true;
		this->Button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button7->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button7->FlatAppearance->BorderSize = 0;
		this->Button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button7->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button7->ForeColor = System::Drawing::Color::White;
		this->Button7->Location = System::Drawing::Point(5, 202);
		this->Button7->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button7->Name = L"Button7";
		this->Button7->Size = System::Drawing::Size(75, 70);
		this->Button7->TabIndex = 13;
		this->Button7->Text = L"7";
		this->Button7->UseVisualStyleBackColor = false;
		this->Button7->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button8
		// 
		this->Button8->AutoSize = true;
		this->Button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button8->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button8->FlatAppearance->BorderSize = 0;
		this->Button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button8->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button8->ForeColor = System::Drawing::Color::White;
		this->Button8->Location = System::Drawing::Point(90, 202);
		this->Button8->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button8->Name = L"Button8";
		this->Button8->Size = System::Drawing::Size(75, 70);
		this->Button8->TabIndex = 12;
		this->Button8->Text = L"8";
		this->Button8->UseVisualStyleBackColor = false;
		this->Button8->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button5
		// 
		this->Button5->AutoSize = true;
		this->Button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button5->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button5->FlatAppearance->BorderSize = 0;
		this->Button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button5->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button5->ForeColor = System::Drawing::Color::White;
		this->Button5->Location = System::Drawing::Point(90, 282);
		this->Button5->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button5->Name = L"Button5";
		this->Button5->Size = System::Drawing::Size(75, 70);
		this->Button5->TabIndex = 11;
		this->Button5->Text = L"5";
		this->Button5->UseVisualStyleBackColor = false;
		this->Button5->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// Button9
		// 
		this->Button9->AutoSize = true;
		this->Button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Button9->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button9->FlatAppearance->BorderSize = 0;
		this->Button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button9->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button9->ForeColor = System::Drawing::Color::White;
		this->Button9->Location = System::Drawing::Point(175, 202);
		this->Button9->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button9->Name = L"Button9";
		this->Button9->Size = System::Drawing::Size(75, 70);
		this->Button9->TabIndex = 10;
		this->Button9->Text = L"9";
		this->Button9->UseVisualStyleBackColor = false;
		this->Button9->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// ButtonAdd
		// 
		this->ButtonAdd->AutoSize = true;
		this->ButtonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonAdd->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonAdd->FlatAppearance->BorderSize = 0;
		this->ButtonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonAdd->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonAdd->ForeColor = System::Drawing::Color::White;
		this->ButtonAdd->Location = System::Drawing::Point(260, 282);
		this->ButtonAdd->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonAdd->Name = L"ButtonAdd";
		this->ButtonAdd->Size = System::Drawing::Size(76, 70);
		this->ButtonAdd->TabIndex = 9;
		this->ButtonAdd->Text = L"+";
		this->ButtonAdd->UseVisualStyleBackColor = false;
		this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::Action);
		// 
		// ButtonSub
		// 
		this->ButtonSub->AutoSize = true;
		this->ButtonSub->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonSub->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonSub->FlatAppearance->BorderSize = 0;
		this->ButtonSub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonSub->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonSub->ForeColor = System::Drawing::Color::White;
		this->ButtonSub->Location = System::Drawing::Point(260, 202);
		this->ButtonSub->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonSub->Name = L"ButtonSub";
		this->ButtonSub->Size = System::Drawing::Size(76, 70);
		this->ButtonSub->TabIndex = 8;
		this->ButtonSub->Text = L"-";
		this->ButtonSub->UseVisualStyleBackColor = false;
		this->ButtonSub->Click += gcnew System::EventHandler(this, &MyForm::Action);
		// 
		// Button0
		// 
		this->Button0->AutoSize = true;
		this->Button0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->TableLayoutPanel->SetColumnSpan(this->Button0, 2);
		this->Button0->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Button0->FlatAppearance->BorderSize = 0;
		this->Button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->Button0->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Button0->ForeColor = System::Drawing::Color::White;
		this->Button0->Location = System::Drawing::Point(5, 442);
		this->Button0->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->Button0->Name = L"Button0";
		this->Button0->Size = System::Drawing::Size(160, 72);
		this->Button0->TabIndex = 7;
		this->Button0->Text = L"0";
		this->Button0->UseVisualStyleBackColor = false;
		this->Button0->Click += gcnew System::EventHandler(this, &MyForm::AppNumber);
		// 
		// ButtonEqu
		// 
		this->ButtonEqu->AutoSize = true;
		this->ButtonEqu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonEqu->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonEqu->FlatAppearance->BorderSize = 0;
		this->ButtonEqu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonEqu->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonEqu->ForeColor = System::Drawing::Color::White;
		this->ButtonEqu->Location = System::Drawing::Point(260, 362);
		this->ButtonEqu->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonEqu->Name = L"ButtonEqu";
		this->TableLayoutPanel->SetRowSpan(this->ButtonEqu, 2);
		this->ButtonEqu->Size = System::Drawing::Size(76, 152);
		this->ButtonEqu->TabIndex = 6;
		this->ButtonEqu->Text = L"=";
		this->ButtonEqu->UseVisualStyleBackColor = false;
		this->ButtonEqu->Click += gcnew System::EventHandler(this, &MyForm::Calc);
		// 
		// ButtonMul
		// 
		this->ButtonMul->AutoSize = true;
		this->ButtonMul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonMul->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonMul->FlatAppearance->BorderSize = 0;
		this->ButtonMul->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonMul->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonMul->ForeColor = System::Drawing::Color::White;
		this->ButtonMul->Location = System::Drawing::Point(260, 122);
		this->ButtonMul->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonMul->Name = L"ButtonMul";
		this->ButtonMul->Size = System::Drawing::Size(76, 70);
		this->ButtonMul->TabIndex = 5;
		this->ButtonMul->Text = L"X";
		this->ButtonMul->UseVisualStyleBackColor = false;
		this->ButtonMul->Click += gcnew System::EventHandler(this, &MyForm::Action);
		// 
		// ButtonDiv
		// 
		this->ButtonDiv->AutoSize = true;
		this->ButtonDiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonDiv->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonDiv->FlatAppearance->BorderSize = 0;
		this->ButtonDiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonDiv->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonDiv->ForeColor = System::Drawing::Color::White;
		this->ButtonDiv->Location = System::Drawing::Point(175, 122);
		this->ButtonDiv->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonDiv->Name = L"ButtonDiv";
		this->ButtonDiv->Size = System::Drawing::Size(75, 70);
		this->ButtonDiv->TabIndex = 3;
		this->ButtonDiv->Text = L"/";
		this->ButtonDiv->UseVisualStyleBackColor = false;
		this->ButtonDiv->Click += gcnew System::EventHandler(this, &MyForm::Action);
		// 
		// ButtonBack
		// 
		this->ButtonBack->AutoSize = true;
		this->ButtonBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonBack->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonBack->FlatAppearance->BorderSize = 0;
		this->ButtonBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonBack->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonBack->ForeColor = System::Drawing::Color::White;
		this->ButtonBack->Location = System::Drawing::Point(90, 122);
		this->ButtonBack->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonBack->Name = L"ButtonBack";
		this->ButtonBack->Size = System::Drawing::Size(75, 70);
		this->ButtonBack->TabIndex = 2;
		this->ButtonBack->Text = L"<";
		this->ButtonBack->UseVisualStyleBackColor = false;
		this->ButtonBack->Click += gcnew System::EventHandler(this, &MyForm::undo);
		// 
		// DisplayLabel
		// 
		this->DisplayLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->DisplayLabel->AutoSize = true;
		this->TableLayoutPanel->SetColumnSpan(this->DisplayLabel, 4);
		this->DisplayLabel->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->DisplayLabel->Location = System::Drawing::Point(11, 52);
		this->DisplayLabel->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
		this->DisplayLabel->Name = L"DisplayLabel";
		this->DisplayLabel->Size = System::Drawing::Size(319, 55);
		this->DisplayLabel->TabIndex = 0;
		this->DisplayLabel->Text = L"0";
		this->DisplayLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
		// 
		// ButtonClear
		// 
		this->ButtonClear->AutoSize = true;
		this->ButtonClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonClear->Dock = System::Windows::Forms::DockStyle::Fill;
		this->ButtonClear->FlatAppearance->BorderSize = 0;
		this->ButtonClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonClear->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ButtonClear->ForeColor = System::Drawing::Color::White;
		this->ButtonClear->Location = System::Drawing::Point(5, 122);
		this->ButtonClear->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
		this->ButtonClear->Name = L"ButtonClear";
		this->ButtonClear->Size = System::Drawing::Size(75, 70);
		this->ButtonClear->TabIndex = 1;
		this->ButtonClear->Text = L"C";
		this->ButtonClear->UseVisualStyleBackColor = false;
		this->ButtonClear->Click += gcnew System::EventHandler(this, &MyForm::Clear);
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		this->TableLayoutPanel->SetColumnSpan(this->panel1, 4);
		this->panel1->Controls->Add(this->label1);
		this->panel1->Controls->Add(this->ButtonClose);
		this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
		this->panel1->Location = System::Drawing::Point(0, 0);
		this->panel1->Margin = System::Windows::Forms::Padding(0);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(341, 42);
		this->panel1->TabIndex = 4;
		this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Panel1_MouseDown);
		// 
		// label1
		// 
		this->label1->Dock = System::Windows::Forms::DockStyle::Left;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label1->ForeColor = System::Drawing::Color::White;
		this->label1->Location = System::Drawing::Point(0, 0);
		this->label1->Margin = System::Windows::Forms::Padding(0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(165, 42);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Calc v0.3";
		this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// ButtonClose
		// 
		this->ButtonClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonClose->Dock = System::Windows::Forms::DockStyle::Right;
		this->ButtonClose->FlatAppearance->BorderSize = 0;
		this->ButtonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->ButtonClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->ButtonClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonClose.Image")));
		this->ButtonClose->Location = System::Drawing::Point(298, 0);
		this->ButtonClose->Margin = System::Windows::Forms::Padding(0);
		this->ButtonClose->Name = L"ButtonClose";
		this->ButtonClose->Size = System::Drawing::Size(43, 42);
		this->ButtonClose->TabIndex = 0;
		this->ButtonClose->UseVisualStyleBackColor = false;
		this->ButtonClose->Click += gcnew System::EventHandler(this, &MyForm::CloseForm);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(341, 519);
		this->Controls->Add(this->TableLayoutPanel);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
		this->MaximizeBox = false;
		this->Name = L"MyForm";
		this->Text = L"MyForm";
		this->TableLayoutPanel->ResumeLayout(false);
		this->TableLayoutPanel->PerformLayout();
		this->panel1->ResumeLayout(false);
		this->ResumeLayout(false);

	}
#pragma endregion

private:
	System::Void Panel1_MouseDown(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
	{

		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			ReleaseCapture();
			SendMessage(Handle, WM_NCLBUTTONDOWN, HT_CAPTION, 0);
		}
	}

private:
	System::Void CloseForm(System::Object ^ sender, System::EventArgs ^ e)
	{
		Close();
	}

private:
	System::Void AppNumber(System::Object ^ sender, System::EventArgs ^ e)
	{

		System::Windows::Forms::Button ^ btn = static_cast<System::Windows::Forms::Button ^>(sender);

		if (next)
		{
			first = false;
		}

		if (first)
		{
			val1 += btn->Text->ToString();
			Refersh();
		}
		else
		{
			val2 += btn->Text->ToString();
			Refersh();
		}
	}

private:
	System::Void Clear(System::Object ^ sender, System::EventArgs ^ e)
	{
		val1 = String::Empty;
		val2 = String::Empty;
		DisplayLabel->Text = "0";
		next = false;
	}

private:
	System::Void undo(System::Object ^ sender, System::EventArgs ^ e)
	{

		if (first)
		{
			if (val1->Length > 0)
				val1 = val1->Remove(val1->Length - 1);
			Refersh();
		}
		else
		{
			if (val2->Length > 0)
				val2 = val2->Remove(val2->Length - 1);
			Refersh();
		}
	}

private:
	System::Void Refersh()
	{
		if (first)
		{
			DisplayLabel->Text = val1;
		}
		else
		{
			DisplayLabel->Text = val2;
		}

		if (DisplayLabel->Text == String::Empty)
		{
			DisplayLabel->Text = "0";
		}
	}

private:
	System::Void Action(System::Object ^ sender, System::EventArgs ^ e)
	{
		

		System::Windows::Forms::Button ^ btn = static_cast<System::Windows::Forms::Button ^>(sender);

		
		if (btn->Text == "+")
		{
			//add
			action = Project1::Action::Act_Add;
			
		}
		else if (btn->Text == "-")
		{
			//sub
			action = Project1::Action::Act_Sub;
		}
		else if (btn->Text == "X")
		{
			//mul
			action = Project1::Action::Act_Mul;
		}
		else if (btn->Text == "/")
		{
			//div
			action = Project1::Action::Act_Div;
		}

		if (action != Project1::Action::Act_Mul)
		{
			act_char = static_cast<char>(btn->Text[0]);
		}
		else
		{
			act_char = '*';
		}

		if (val1 != String::Empty)
			if (first)
			{
				first = false;
			}

		if(val2 != String::Empty)
			if (!first)
			{
				next = true;
				Calc(sender, System::EventArgs::Empty);
			}

	}
private: System::Void Calc(System::Object^  sender, System::EventArgs^  e) {

	if (!first)
	{
			double temp;

			switch (action)
			{
			case Action::Act_Add:
				temp = System::Convert::ToDouble(val1) + System::Convert::ToDouble(val2);
				break;
			case Action::Act_Sub:
				temp = System::Convert::ToDouble(val1) - System::Convert::ToDouble(val2);
				break;
			case Action::Act_Mul:
				temp = System::Convert::ToDouble(val1) * System::Convert::ToDouble(val2);
				break;
			case Action::Act_Div:
				if (System::Convert::ToDouble(val2) == 0.0)
				{
					Clear(sender , System::EventArgs::Empty);
					MessageBox::Show("Divide by 0");
					break;
				}
				temp = System::Convert::ToDouble(val1) / System::Convert::ToDouble(val2);
				break;
			}
			val1 = temp.ToString();
			val2 = String::Empty;
			if (e != System::EventArgs::Empty)
			{
				action = Action::Act_None;
				next = true;
				//MessageBox::Show("nie dziala");
			}
			first = true;
			Refersh();
		}

	}
};
} // namespace Project1
