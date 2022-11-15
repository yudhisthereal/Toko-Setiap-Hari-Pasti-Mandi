#pragma once

namespace TokoSetiapHariPastiMandi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ username_field;
	protected:
	private: System::Windows::Forms::Button^ checkout_button;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ item_cards;

	private: System::Windows::Forms::Panel^ item1_card;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ item1_count;
	private: System::Windows::Forms::Button^ item1_cancel;
	private: System::Windows::Forms::Panel^ item2_card;

	private: System::Windows::Forms::Button^ item2_cancel;
	private: System::Windows::Forms::Label^ item2_count;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ item3_card;

	private: System::Windows::Forms::Button^ item3_cancel;
	private: System::Windows::Forms::Label^ item3_count;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::FlowLayoutPanel^ items;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ item1_count_;
	private: System::Windows::Forms::Button^ item1_minus;
	private: System::Windows::Forms::Button^ item1_plus;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ item2_count_;
	private: System::Windows::Forms::Button^ item2_minus;
	private: System::Windows::Forms::Button^ item2_plus;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ item3_count_;
	private: System::Windows::Forms::Button^ item3_minus;
	private: System::Windows::Forms::Button^ item3_plus;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		int jumlah_item1 = 0, jumlah_item2 = 0, jumlah_item3 = 0, total = 0;
		int macam_yang_dibeli = 0, stok1 = 10, stok2 = 10, stok3 = 10;

	private: System::Windows::Forms::Label^ total_price;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ nota;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ nota_jumlahitem3;

	private: System::Windows::Forms::Label^ nota_jumlahitem2;

	private: System::Windows::Forms::Label^ nota_jumlahitem1;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ nota_total;

	private: System::Windows::Forms::Label^ nota_nama;
	private: System::Windows::Forms::Label^ nota_item3;
	private: System::Windows::Forms::Label^ nota_item2;
	private: System::Windows::Forms::Label^ nota_item1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ belanjalagi_button;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label20;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;




private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ stok_item2;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ stok_item3;
private: System::Windows::Forms::Label^ stok_item1;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ transaction_date;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label36;




		   

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->username_field = (gcnew System::Windows::Forms::TextBox());
			this->checkout_button = (gcnew System::Windows::Forms::Button());
			this->username = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->item_cards = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->item1_card = (gcnew System::Windows::Forms::Panel());
			this->item1_cancel = (gcnew System::Windows::Forms::Button());
			this->item1_count = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->item2_card = (gcnew System::Windows::Forms::Panel());
			this->item2_cancel = (gcnew System::Windows::Forms::Button());
			this->item2_count = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->item3_card = (gcnew System::Windows::Forms::Panel());
			this->item3_cancel = (gcnew System::Windows::Forms::Button());
			this->item3_count = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->items = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->stok_item1 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->item1_count_ = (gcnew System::Windows::Forms::Label());
			this->item1_minus = (gcnew System::Windows::Forms::Button());
			this->item1_plus = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->stok_item2 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->item2_count_ = (gcnew System::Windows::Forms::Label());
			this->item2_minus = (gcnew System::Windows::Forms::Button());
			this->item2_plus = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->stok_item3 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->item3_count_ = (gcnew System::Windows::Forms::Label());
			this->item3_minus = (gcnew System::Windows::Forms::Button());
			this->item3_plus = (gcnew System::Windows::Forms::Button());
			this->total_price = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nota = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->transaction_date = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->belanjalagi_button = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->nota_jumlahitem3 = (gcnew System::Windows::Forms::Label());
			this->nota_jumlahitem2 = (gcnew System::Windows::Forms::Label());
			this->nota_jumlahitem1 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->nota_total = (gcnew System::Windows::Forms::Label());
			this->nota_nama = (gcnew System::Windows::Forms::Label());
			this->nota_item3 = (gcnew System::Windows::Forms::Label());
			this->nota_item2 = (gcnew System::Windows::Forms::Label());
			this->nota_item1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->item_cards->SuspendLayout();
			this->item1_card->SuspendLayout();
			this->item2_card->SuspendLayout();
			this->item3_card->SuspendLayout();
			this->items->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->nota->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel13->SuspendLayout();
			this->SuspendLayout();
			// 
			// username_field
			// 
			this->username_field->ForeColor = System::Drawing::Color::Silver;
			this->username_field->Location = System::Drawing::Point(3, 2);
			this->username_field->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_field->Name = L"username_field";
			this->username_field->Size = System::Drawing::Size(351, 22);
			this->username_field->TabIndex = 0;
			this->username_field->Text = L"masukkan nama Anda di sini...";
			this->username_field->Enter += gcnew System::EventHandler(this, &MyForm::username_field_Enter);
			this->username_field->Leave += gcnew System::EventHandler(this, &MyForm::username_field_Leave);
			// 
			// checkout_button
			// 
			this->checkout_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkout_button->Location = System::Drawing::Point(53, 479);
			this->checkout_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkout_button->Name = L"checkout_button";
			this->checkout_button->Size = System::Drawing::Size(277, 23);
			this->checkout_button->TabIndex = 1;
			this->checkout_button->Text = L"CHECKOUT";
			this->checkout_button->UseVisualStyleBackColor = true;
			this->checkout_button->Click += gcnew System::EventHandler(this, &MyForm::checkout_button_Click);
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(3, 26);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(355, 34);
			this->username->TabIndex = 2;
			this->username->Text = L"label1";
			this->username->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->username_field);
			this->flowLayoutPanel1->Controls->Add(this->username);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 25);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(355, 62);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// item_cards
			// 
			this->item_cards->Controls->Add(this->item1_card);
			this->item_cards->Controls->Add(this->item2_card);
			this->item_cards->Controls->Add(this->item3_card);
			this->item_cards->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->item_cards->Location = System::Drawing::Point(29, 127);
			this->item_cards->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item_cards->Name = L"item_cards";
			this->item_cards->Size = System::Drawing::Size(337, 290);
			this->item_cards->TabIndex = 4;
			// 
			// item1_card
			// 
			this->item1_card->BackColor = System::Drawing::Color::NavajoWhite;
			this->item1_card->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->item1_card->Controls->Add(this->item1_cancel);
			this->item1_card->Controls->Add(this->item1_count);
			this->item1_card->Controls->Add(this->label2);
			this->item1_card->Controls->Add(this->label1);
			this->item1_card->Controls->Add(this->panel2);
			this->item1_card->Location = System::Drawing::Point(3, 2);
			this->item1_card->Margin = System::Windows::Forms::Padding(3, 2, 3, 10);
			this->item1_card->Name = L"item1_card";
			this->item1_card->Size = System::Drawing::Size(331, 82);
			this->item1_card->TabIndex = 0;
			this->item1_card->Visible = false;
			// 
			// item1_cancel
			// 
			this->item1_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item1_cancel.BackgroundImage")));
			this->item1_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item1_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item1_cancel->FlatAppearance->BorderSize = 0;
			this->item1_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item1_cancel->Location = System::Drawing::Point(303, 1);
			this->item1_cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item1_cancel->Name = L"item1_cancel";
			this->item1_cancel->Size = System::Drawing::Size(25, 25);
			this->item1_cancel->TabIndex = 4;
			this->item1_cancel->UseVisualStyleBackColor = true;
			this->item1_cancel->Click += gcnew System::EventHandler(this, &MyForm::item1_cancel_Click);
			// 
			// item1_count
			// 
			this->item1_count->AutoSize = true;
			this->item1_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->item1_count->Location = System::Drawing::Point(292, 53);
			this->item1_count->Name = L"item1_count";
			this->item1_count->Size = System::Drawing::Size(15, 16);
			this->item1_count->TabIndex = 3;
			this->item1_count->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rp5000,-";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Lifegirlies Body Wash";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Location = System::Drawing::Point(11, 10);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(53, 59);
			this->panel2->TabIndex = 0;
			// 
			// item2_card
			// 
			this->item2_card->BackColor = System::Drawing::Color::NavajoWhite;
			this->item2_card->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->item2_card->Controls->Add(this->item2_cancel);
			this->item2_card->Controls->Add(this->item2_count);
			this->item2_card->Controls->Add(this->label4);
			this->item2_card->Controls->Add(this->label5);
			this->item2_card->Controls->Add(this->panel3);
			this->item2_card->Location = System::Drawing::Point(3, 96);
			this->item2_card->Margin = System::Windows::Forms::Padding(3, 2, 3, 10);
			this->item2_card->Name = L"item2_card";
			this->item2_card->Size = System::Drawing::Size(331, 82);
			this->item2_card->TabIndex = 1;
			this->item2_card->Visible = false;
			// 
			// item2_cancel
			// 
			this->item2_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item2_cancel.BackgroundImage")));
			this->item2_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item2_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item2_cancel->FlatAppearance->BorderSize = 0;
			this->item2_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item2_cancel->Location = System::Drawing::Point(303, 1);
			this->item2_cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item2_cancel->Name = L"item2_cancel";
			this->item2_cancel->Size = System::Drawing::Size(25, 25);
			this->item2_cancel->TabIndex = 4;
			this->item2_cancel->UseVisualStyleBackColor = true;
			this->item2_cancel->Click += gcnew System::EventHandler(this, &MyForm::item2_cancel_Click);
			// 
			// item2_count
			// 
			this->item2_count->AutoSize = true;
			this->item2_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->item2_count->Location = System::Drawing::Point(292, 53);
			this->item2_count->Name = L"item2_count";
			this->item2_count->Size = System::Drawing::Size(15, 16);
			this->item2_count->TabIndex = 3;
			this->item2_count->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(71, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Rp7000,-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Moonsilk Shampoo";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Location = System::Drawing::Point(11, 10);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(53, 59);
			this->panel3->TabIndex = 0;
			// 
			// item3_card
			// 
			this->item3_card->BackColor = System::Drawing::Color::NavajoWhite;
			this->item3_card->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->item3_card->Controls->Add(this->item3_cancel);
			this->item3_card->Controls->Add(this->item3_count);
			this->item3_card->Controls->Add(this->label7);
			this->item3_card->Controls->Add(this->label8);
			this->item3_card->Controls->Add(this->panel5);
			this->item3_card->Location = System::Drawing::Point(3, 190);
			this->item3_card->Margin = System::Windows::Forms::Padding(3, 2, 3, 10);
			this->item3_card->Name = L"item3_card";
			this->item3_card->Size = System::Drawing::Size(331, 82);
			this->item3_card->TabIndex = 2;
			this->item3_card->Visible = false;
			// 
			// item3_cancel
			// 
			this->item3_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item3_cancel.BackgroundImage")));
			this->item3_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item3_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item3_cancel->FlatAppearance->BorderSize = 0;
			this->item3_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item3_cancel->Location = System::Drawing::Point(303, 1);
			this->item3_cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item3_cancel->Name = L"item3_cancel";
			this->item3_cancel->Size = System::Drawing::Size(25, 25);
			this->item3_cancel->TabIndex = 4;
			this->item3_cancel->UseVisualStyleBackColor = true;
			this->item3_cancel->Click += gcnew System::EventHandler(this, &MyForm::item3_cancel_Click);
			// 
			// item3_count
			// 
			this->item3_count->AutoSize = true;
			this->item3_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->item3_count->Location = System::Drawing::Point(292, 53);
			this->item3_count->Name = L"item3_count";
			this->item3_count->Size = System::Drawing::Size(15, 16);
			this->item3_count->TabIndex = 3;
			this->item3_count->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(71, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Rp12000,-";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(72, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 16);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Pepsident Toothpaste";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(11, 10);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(53, 59);
			this->panel5->TabIndex = 0;
			// 
			// items
			// 
			this->items->Controls->Add(this->panel6);
			this->items->Controls->Add(this->panel7);
			this->items->Controls->Add(this->panel8);
			this->items->Location = System::Drawing::Point(437, 272);
			this->items->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->items->Name = L"items";
			this->items->Size = System::Drawing::Size(635, 272);
			this->items->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Pink;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->stok_item1);
			this->panel6->Controls->Add(this->label29);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->panel12);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->item1_count_);
			this->panel6->Controls->Add(this->item1_minus);
			this->panel6->Controls->Add(this->item1_plus);
			this->panel6->Location = System::Drawing::Point(3, 2);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(199, 269);
			this->panel6->TabIndex = 0;
			// 
			// stok_item1
			// 
			this->stok_item1->AutoSize = true;
			this->stok_item1->Location = System::Drawing::Point(53, 213);
			this->stok_item1->Name = L"stok_item1";
			this->stok_item1->Size = System::Drawing::Size(21, 16);
			this->stok_item1->TabIndex = 11;
			this->stok_item1->Text = L"10";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(15, 213);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(43, 16);
			this->label29->TabIndex = 8;
			this->label29->Text = L"Stok : ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(21, 160);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(158, 16);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Lifegirlies Body Wash";
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel12->Location = System::Drawing::Point(33, 16);
			this->panel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(135, 135);
			this->panel12->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 234);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 16);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Rp5000,-";
			// 
			// item1_count_
			// 
			this->item1_count_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->item1_count_->Location = System::Drawing::Point(132, 236);
			this->item1_count_->Name = L"item1_count_";
			this->item1_count_->Size = System::Drawing::Size(27, 15);
			this->item1_count_->TabIndex = 2;
			this->item1_count_->Text = L"0";
			this->item1_count_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// item1_minus
			// 
			this->item1_minus->BackColor = System::Drawing::Color::Transparent;
			this->item1_minus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item1_minus.BackgroundImage")));
			this->item1_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item1_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item1_minus->FlatAppearance->BorderSize = 0;
			this->item1_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item1_minus->Location = System::Drawing::Point(163, 231);
			this->item1_minus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item1_minus->Name = L"item1_minus";
			this->item1_minus->Size = System::Drawing::Size(21, 23);
			this->item1_minus->TabIndex = 1;
			this->item1_minus->UseVisualStyleBackColor = false;
			this->item1_minus->Click += gcnew System::EventHandler(this, &MyForm::item1_minus_Click);
			// 
			// item1_plus
			// 
			this->item1_plus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item1_plus.BackgroundImage")));
			this->item1_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item1_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item1_plus->FlatAppearance->BorderSize = 0;
			this->item1_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item1_plus->Location = System::Drawing::Point(104, 231);
			this->item1_plus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item1_plus->Name = L"item1_plus";
			this->item1_plus->Size = System::Drawing::Size(21, 23);
			this->item1_plus->TabIndex = 0;
			this->item1_plus->UseVisualStyleBackColor = true;
			this->item1_plus->Click += gcnew System::EventHandler(this, &MyForm::item1_plus_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Pink;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->stok_item2);
			this->panel7->Controls->Add(this->label31);
			this->panel7->Controls->Add(this->label27);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->item2_count_);
			this->panel7->Controls->Add(this->item2_minus);
			this->panel7->Controls->Add(this->item2_plus);
			this->panel7->Location = System::Drawing::Point(208, 2);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(199, 269);
			this->panel7->TabIndex = 4;
			// 
			// stok_item2
			// 
			this->stok_item2->AutoSize = true;
			this->stok_item2->Location = System::Drawing::Point(53, 213);
			this->stok_item2->Name = L"stok_item2";
			this->stok_item2->Size = System::Drawing::Size(21, 16);
			this->stok_item2->TabIndex = 15;
			this->stok_item2->Text = L"10";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(15, 213);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(43, 16);
			this->label31->TabIndex = 14;
			this->label31->Text = L"Stok : ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(29, 160);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(139, 16);
			this->label27->TabIndex = 8;
			this->label27->Text = L"Moonsilk Shampoo";
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel11->Location = System::Drawing::Point(32, 16);
			this->panel11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(135, 135);
			this->panel11->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 16);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Rp7000,-";
			// 
			// item2_count_
			// 
			this->item2_count_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->item2_count_->Location = System::Drawing::Point(132, 236);
			this->item2_count_->Name = L"item2_count_";
			this->item2_count_->Size = System::Drawing::Size(27, 15);
			this->item2_count_->TabIndex = 2;
			this->item2_count_->Text = L"0";
			this->item2_count_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// item2_minus
			// 
			this->item2_minus->BackColor = System::Drawing::Color::Transparent;
			this->item2_minus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item2_minus.BackgroundImage")));
			this->item2_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item2_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item2_minus->FlatAppearance->BorderSize = 0;
			this->item2_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item2_minus->Location = System::Drawing::Point(163, 231);
			this->item2_minus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item2_minus->Name = L"item2_minus";
			this->item2_minus->Size = System::Drawing::Size(21, 23);
			this->item2_minus->TabIndex = 1;
			this->item2_minus->UseVisualStyleBackColor = false;
			this->item2_minus->Click += gcnew System::EventHandler(this, &MyForm::item2_minus_Click);
			// 
			// item2_plus
			// 
			this->item2_plus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item2_plus.BackgroundImage")));
			this->item2_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item2_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item2_plus->FlatAppearance->BorderSize = 0;
			this->item2_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item2_plus->Location = System::Drawing::Point(104, 231);
			this->item2_plus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item2_plus->Name = L"item2_plus";
			this->item2_plus->Size = System::Drawing::Size(21, 23);
			this->item2_plus->TabIndex = 0;
			this->item2_plus->UseVisualStyleBackColor = true;
			this->item2_plus->Click += gcnew System::EventHandler(this, &MyForm::item2_plus_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Pink;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->stok_item3);
			this->panel8->Controls->Add(this->label28);
			this->panel8->Controls->Add(this->label36);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Controls->Add(this->label12);
			this->panel8->Controls->Add(this->item3_count_);
			this->panel8->Controls->Add(this->item3_minus);
			this->panel8->Controls->Add(this->item3_plus);
			this->panel8->Location = System::Drawing::Point(413, 2);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(199, 269);
			this->panel8->TabIndex = 5;
			// 
			// stok_item3
			// 
			this->stok_item3->AutoSize = true;
			this->stok_item3->Location = System::Drawing::Point(53, 213);
			this->stok_item3->Name = L"stok_item3";
			this->stok_item3->Size = System::Drawing::Size(21, 16);
			this->stok_item3->TabIndex = 17;
			this->stok_item3->Text = L"10";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(20, 160);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(156, 16);
			this->label28->TabIndex = 9;
			this->label28->Text = L"President Toothpaste";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(15, 213);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(43, 16);
			this->label36->TabIndex = 16;
			this->label36->Text = L"Stok : ";
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel10->Location = System::Drawing::Point(32, 16);
			this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(135, 135);
			this->panel10->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 234);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 16);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Rp12000,-";
			// 
			// item3_count_
			// 
			this->item3_count_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->item3_count_->Location = System::Drawing::Point(132, 236);
			this->item3_count_->Name = L"item3_count_";
			this->item3_count_->Size = System::Drawing::Size(27, 15);
			this->item3_count_->TabIndex = 2;
			this->item3_count_->Text = L"0";
			this->item3_count_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// item3_minus
			// 
			this->item3_minus->BackColor = System::Drawing::Color::Transparent;
			this->item3_minus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item3_minus.BackgroundImage")));
			this->item3_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item3_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item3_minus->FlatAppearance->BorderSize = 0;
			this->item3_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item3_minus->Location = System::Drawing::Point(163, 231);
			this->item3_minus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item3_minus->Name = L"item3_minus";
			this->item3_minus->Size = System::Drawing::Size(21, 23);
			this->item3_minus->TabIndex = 1;
			this->item3_minus->UseVisualStyleBackColor = false;
			this->item3_minus->Click += gcnew System::EventHandler(this, &MyForm::item3_minus_Click);
			// 
			// item3_plus
			// 
			this->item3_plus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"item3_plus.BackgroundImage")));
			this->item3_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->item3_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item3_plus->FlatAppearance->BorderSize = 0;
			this->item3_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->item3_plus->Location = System::Drawing::Point(104, 231);
			this->item3_plus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item3_plus->Name = L"item3_plus";
			this->item3_plus->Size = System::Drawing::Size(21, 23);
			this->item3_plus->TabIndex = 0;
			this->item3_plus->UseVisualStyleBackColor = true;
			this->item3_plus->Click += gcnew System::EventHandler(this, &MyForm::item3_plus_Click);
			// 
			// total_price
			// 
			this->total_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_price->Location = System::Drawing::Point(117, 428);
			this->total_price->Name = L"total_price";
			this->total_price->Size = System::Drawing::Size(251, 34);
			this->total_price->TabIndex = 3;
			this->total_price->Text = L"Rp0,-";
			this->total_price->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(15, 428);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 34);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Total : ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nota
			// 
			this->nota->BackColor = System::Drawing::Color::Bisque;
			this->nota->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nota->Controls->Add(this->label30);
			this->nota->Controls->Add(this->transaction_date);
			this->nota->Controls->Add(this->label32);
			this->nota->Controls->Add(this->belanjalagi_button);
			this->nota->Controls->Add(this->label19);
			this->nota->Controls->Add(this->label25);
			this->nota->Controls->Add(this->label26);
			this->nota->Controls->Add(this->nota_jumlahitem3);
			this->nota->Controls->Add(this->nota_jumlahitem2);
			this->nota->Controls->Add(this->nota_jumlahitem1);
			this->nota->Controls->Add(this->label24);
			this->nota->Controls->Add(this->nota_total);
			this->nota->Controls->Add(this->nota_nama);
			this->nota->Controls->Add(this->nota_item3);
			this->nota->Controls->Add(this->nota_item2);
			this->nota->Controls->Add(this->nota_item1);
			this->nota->Controls->Add(this->panel4);
			this->nota->Controls->Add(this->label18);
			this->nota->Controls->Add(this->label17);
			this->nota->Controls->Add(this->label16);
			this->nota->Controls->Add(this->label15);
			this->nota->Controls->Add(this->label14);
			this->nota->Controls->Add(this->label13);
			this->nota->Controls->Add(this->label11);
			this->nota->Controls->Add(this->label6);
			this->nota->Location = System::Drawing::Point(435, 169);
			this->nota->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nota->Name = L"nota";
			this->nota->Size = System::Drawing::Size(629, 415);
			this->nota->TabIndex = 7;
			this->nota->Visible = false;
			// 
			// label30
			// 
			this->label30->Location = System::Drawing::Point(150, 67);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(327, 16);
			this->label30->TabIndex = 23;
			this->label30->Text = L"Jl. Cempaka No. 03, Atlantis";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// transaction_date
			// 
			this->transaction_date->AutoSize = true;
			this->transaction_date->Location = System::Drawing::Point(499, 137);
			this->transaction_date->Name = L"transaction_date";
			this->transaction_date->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->transaction_date->Size = System::Drawing::Size(51, 16);
			this->transaction_date->TabIndex = 22;
			this->transaction_date->Text = L"label19";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(72, 137);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(113, 16);
			this->label32->TabIndex = 21;
			this->label32->Text = L"Tanggal Belanja :";
			// 
			// belanjalagi_button
			// 
			this->belanjalagi_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->belanjalagi_button->Location = System::Drawing::Point(175, 373);
			this->belanjalagi_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->belanjalagi_button->Name = L"belanjalagi_button";
			this->belanjalagi_button->Size = System::Drawing::Size(277, 23);
			this->belanjalagi_button->TabIndex = 8;
			this->belanjalagi_button->Text = L"BELANJA LAGI";
			this->belanjalagi_button->UseVisualStyleBackColor = true;
			this->belanjalagi_button->Click += gcnew System::EventHandler(this, &MyForm::belanjalagi_button_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(267, 247);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label19->Size = System::Drawing::Size(87, 16);
			this->label19->TabIndex = 20;
			this->label19->Text = L"@ Rp12.000,-";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(267, 221);
			this->label25->Name = L"label25";
			this->label25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label25->Size = System::Drawing::Size(80, 16);
			this->label25->TabIndex = 19;
			this->label25->Text = L"@ Rp7.000,-";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(267, 195);
			this->label26->Name = L"label26";
			this->label26->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label26->Size = System::Drawing::Size(80, 16);
			this->label26->TabIndex = 18;
			this->label26->Text = L"@ Rp5.000,-";
			// 
			// nota_jumlahitem3
			// 
			this->nota_jumlahitem3->AutoSize = true;
			this->nota_jumlahitem3->Location = System::Drawing::Point(392, 247);
			this->nota_jumlahitem3->Name = L"nota_jumlahitem3";
			this->nota_jumlahitem3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nota_jumlahitem3->Size = System::Drawing::Size(20, 16);
			this->nota_jumlahitem3->TabIndex = 17;
			this->nota_jumlahitem3->Text = L"x2";
			// 
			// nota_jumlahitem2
			// 
			this->nota_jumlahitem2->AutoSize = true;
			this->nota_jumlahitem2->Location = System::Drawing::Point(392, 221);
			this->nota_jumlahitem2->Name = L"nota_jumlahitem2";
			this->nota_jumlahitem2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nota_jumlahitem2->Size = System::Drawing::Size(20, 16);
			this->nota_jumlahitem2->TabIndex = 16;
			this->nota_jumlahitem2->Text = L"x1";
			// 
			// nota_jumlahitem1
			// 
			this->nota_jumlahitem1->AutoSize = true;
			this->nota_jumlahitem1->Location = System::Drawing::Point(392, 195);
			this->nota_jumlahitem1->Name = L"nota_jumlahitem1";
			this->nota_jumlahitem1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nota_jumlahitem1->Size = System::Drawing::Size(20, 16);
			this->nota_jumlahitem1->TabIndex = 15;
			this->nota_jumlahitem1->Text = L"x3";
			this->nota_jumlahitem1->UseMnemonic = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(219, 348);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(193, 16);
			this->label24->TabIndex = 14;
			this->label24->Text = L"Terima Kasih! Datang lagi, yaa!";
			// 
			// nota_total
			// 
			this->nota_total->AutoSize = true;
			this->nota_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nota_total->Location = System::Drawing::Point(496, 295);
			this->nota_total->Name = L"nota_total";
			this->nota_total->Size = System::Drawing::Size(58, 16);
			this->nota_total->TabIndex = 13;
			this->nota_total->Text = L"label23";
			// 
			// nota_nama
			// 
			this->nota_nama->AutoSize = true;
			this->nota_nama->Location = System::Drawing::Point(499, 162);
			this->nota_nama->Name = L"nota_nama";
			this->nota_nama->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->nota_nama->Size = System::Drawing::Size(51, 16);
			this->nota_nama->TabIndex = 12;
			this->nota_nama->Text = L"label19";
			// 
			// nota_item3
			// 
			this->nota_item3->AutoSize = true;
			this->nota_item3->Location = System::Drawing::Point(499, 247);
			this->nota_item3->Name = L"nota_item3";
			this->nota_item3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nota_item3->Size = System::Drawing::Size(51, 16);
			this->nota_item3->TabIndex = 11;
			this->nota_item3->Text = L"label20";
			this->nota_item3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nota_item2
			// 
			this->nota_item2->AutoSize = true;
			this->nota_item2->Location = System::Drawing::Point(499, 221);
			this->nota_item2->Name = L"nota_item2";
			this->nota_item2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nota_item2->Size = System::Drawing::Size(51, 16);
			this->nota_item2->TabIndex = 10;
			this->nota_item2->Text = L"label21";
			this->nota_item2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nota_item1
			// 
			this->nota_item1->AutoSize = true;
			this->nota_item1->Location = System::Drawing::Point(499, 195);
			this->nota_item1->Name = L"nota_item1";
			this->nota_item1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nota_item1->Size = System::Drawing::Size(51, 16);
			this->nota_item1->TabIndex = 9;
			this->nota_item1->Text = L"label22";
			this->nota_item1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Location = System::Drawing::Point(15, 279);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(599, 2);
			this->panel4->TabIndex = 8;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(72, 162);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(103, 16);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Nama Pembeli :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(194, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(238, 25);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Setiap Hari Pasti Mandi";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(289, 306);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 16);
			this->label16->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(72, 295);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 16);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Total :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(72, 247);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(140, 16);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Pepsident Toothpaste";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(72, 221);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 16);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Moonsilk Shampoo";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(72, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 16);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Lifegirlies Body Wash";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(226, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Nota Pembelian di Toko";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Location = System::Drawing::Point(19, 417);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(349, 2);
			this->panel1->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(9, 6);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(109, 16);
			this->label20->TabIndex = 21;
			this->label20->Text = L"Nama Pembeli";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(12, 105);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(77, 16);
			this->label21->TabIndex = 22;
			this->label21->Text = L"Keranjang";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::MistyRose;
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label21);
			this->panel9->Controls->Add(this->label20);
			this->panel9->Controls->Add(this->checkout_button);
			this->panel9->Controls->Add(this->panel1);
			this->panel9->Controls->Add(this->label3);
			this->panel9->Controls->Add(this->item_cards);
			this->panel9->Controls->Add(this->flowLayoutPanel1);
			this->panel9->Controls->Add(this->total_price);
			this->panel9->Location = System::Drawing::Point(35, 63);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(391, 521);
			this->panel9->TabIndex = 23;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Transparent;
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Location = System::Drawing::Point(435, 63);
			this->panel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(627, 121);
			this->panel13->TabIndex = 24;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::DeepPink;
			this->panel14->Location = System::Drawing::Point(64, 89);
			this->panel14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(500, 7);
			this->panel14->TabIndex = 0;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::HotPink;
			this->label22->Location = System::Drawing::Point(651, 234);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(193, 20);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Barang yang Tersedia";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1099, 638);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->nota);
			this->Controls->Add(this->items);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->panel13);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->item_cards->ResumeLayout(false);
			this->item1_card->ResumeLayout(false);
			this->item1_card->PerformLayout();
			this->item2_card->ResumeLayout(false);
			this->item2_card->PerformLayout();
			this->item3_card->ResumeLayout(false);
			this->item3_card->PerformLayout();
			this->items->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->nota->ResumeLayout(false);
			this->nota->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->username_field->Text == "" || this->username_field->Text == "masukkan nama Anda di sini...") 
		{
			MessageBox::Show("Mohon masukkan nama Anda");
			return;
		}
		if (total == 0)
		{
			MessageBox::Show("Keranjang Anda masih kosong");
			return;
		}
		this->username->Text = "Terima kasih telah berbelanja, " + this->username_field->Text + "!";
		this->username->Show();
		this->username_field->Hide();

		this->nota->Show();

		this->nota_item1->Text = "Rp" + (jumlah_item1 * 5000).ToString() + ",-";
		this->nota_item2->Text = "Rp" + (jumlah_item2 * 7000).ToString() + ",-";
		this->nota_item3->Text = "Rp" + (jumlah_item3 * 12000).ToString() + ",-";

		this->nota_jumlahitem1->Text = "x" + jumlah_item1.ToString();
		this->nota_jumlahitem2->Text = "x" + jumlah_item2.ToString();
		this->nota_jumlahitem3->Text = "x" + jumlah_item3.ToString();

		this->nota_total->Text = "Rp" + total.ToString() + ",-";
		this->nota_nama->Text = this->username_field->Text;

		//Date of Transaction
		DateTime _date;
		_date = DateTime::Now;

		this->transaction_date->Text = _date.Day.ToString() + "-" + _date.Month.ToString() + "-" + _date.Year.ToString();

	}
	private: System::Void item1_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (stok1 == 0) {
			MessageBox::Show("Stok Lifegirlies Body Wash telah habis");
			return;
		}
		if (jumlah_item1 == 0) {
			this->item1_card->TabIndex = macam_yang_dibeli;
			this->item1_card->Show();
			macam_yang_dibeli++;
		}
		jumlah_item1++;
		update_remaining_stocks();
		update_item_count_labels(1);
		update_total_price();
	}
	private: System::Void item1_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (jumlah_item1 == 0) return;
		jumlah_item1--;
		update_remaining_stocks();
		update_item_count_labels(1);
		if (jumlah_item1 == 0) {
			this->item1_card->Hide();
			macam_yang_dibeli--;
		}
		update_total_price();
	}
	private: System::Void item2_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (stok2 == 0) {
			MessageBox::Show("Stok Moonsilk Shampoo habis");
			return;
		}
		if (jumlah_item2 == 0) {
			this->item2_card->TabIndex = macam_yang_dibeli;
			this->item2_card->Show();
			macam_yang_dibeli++;
		}
		jumlah_item2++;
		update_remaining_stocks();
		update_item_count_labels(2);
		update_total_price();
	}
	private: System::Void item2_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (jumlah_item2 == 0) return;
		jumlah_item2--;
		update_remaining_stocks();
		update_item_count_labels(2);
		if (jumlah_item2 == 0) {
			this->item2_card->Hide();
			macam_yang_dibeli--;
		}
		update_total_price();
	}
	private: System::Void item3_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (stok3 == 0) {
			MessageBox::Show("Stok President Toothpaste habis");
			return;
		}
		if (jumlah_item3 == 0) {
			this->item3_card->TabIndex = macam_yang_dibeli;
			this->item3_card->Show();
			macam_yang_dibeli++;
		}
		jumlah_item3++;
		update_remaining_stocks();
		update_total_price();
		update_item_count_labels(3);
	}
	private: System::Void item3_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (jumlah_item3 == 0) return;
		jumlah_item3--;
		update_remaining_stocks();
		update_total_price();
		update_item_count_labels(3);
		if (jumlah_item3 == 0) { 
			this->item3_card->Hide();
			macam_yang_dibeli--;
		}
	}
	private: System::Void item1_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->item1_card->Hide();
		jumlah_item1 = 0;
		update_item_count_labels(1);
		update_remaining_stocks();
		update_total_price();
		macam_yang_dibeli--;
	}
	private: System::Void item2_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->item2_card->Hide();
		jumlah_item2 = 0;
		update_item_count_labels(1);
		update_remaining_stocks();
		update_total_price();
		macam_yang_dibeli--;
	}
	private: System::Void item3_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->item3_card->Hide();
		jumlah_item3 = 0;
		update_remaining_stocks();
		update_total_price();
		macam_yang_dibeli--;

	}

	private: System::Void update_total_price() 
	{
		total = jumlah_item1 * 5000 + jumlah_item2 * 7000 + jumlah_item3 * 12000;
		this->total_price->Text = "Rp" + total.ToString() + ",-";
	}

	private: System::Void update_item_count_labels(int id)
	{
		switch (id)
		{
		case 1:
			this->item1_count->Text = "x" + jumlah_item1.ToString();
			this->item1_count_->Text = jumlah_item1.ToString();
			break;
		case 2:
			this->item2_count->Text = "x" + jumlah_item2.ToString();
			this->item2_count_->Text = jumlah_item2.ToString();
			break;
		case 3:
			this->item3_count->Text = "x" + jumlah_item3.ToString();
			this->item3_count_->Text = jumlah_item3.ToString();
			break;
		}
	}

	private: System::Void update_remaining_stocks() {
		stok1 = 10 - jumlah_item1;
		stok2 = 10 - jumlah_item2;
		stok3 = 10 - jumlah_item3;
		this->stok_item1->Text = stok1.ToString();
		this->stok_item2->Text = stok2.ToString();
		this->stok_item3->Text = stok3.ToString();
	}

	private: System::Void username_field_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->username_field->Text == "masukkan nama Anda di sini...") 
		{
			this->username_field->ForeColor = Color::Black;
			this->username_field->Text = "";
		}
	}
	private: System::Void username_field_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->username_field->Text == "")
		{
			this->username_field->ForeColor = Color::Silver;
			this->username_field->Text = "masukkan nama Anda di sini...";
		}
	}
	private: System::Void belanjalagi_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->nota->Hide();
		jumlah_item1 = 0;
		jumlah_item2 = 0;
		jumlah_item3 = 0;
		total = 0;

		update_total_price();
		for (int i = 1; i < 4; i++)
		{
			update_item_count_labels(i);
		}
		this->item1_card->Hide();
		this->item2_card->Hide();
		this->item3_card->Hide();

		this->username_field->ForeColor = Color::Silver;
		this->username_field->Text = "mohon masukkan nama Anda di sini...";
		this->username_field->Show();
		this->username->Hide();

		update_remaining_stocks();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	update_remaining_stocks();
}
};
}
