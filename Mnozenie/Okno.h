#pragma once

namespace Mnozenie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Okno
	/// </summary>
	public ref class Okno : public System::Windows::Forms::Form
	{

		// ->
		// tutaj daje swoje zmienne które bêdê u¿ywa³
		// ->
	private: System::Windows::Forms::Label^  lbWynik;
	private: System::Windows::Forms::ComboBox^  cbWybor;
	private: System::Windows::Forms::Label^  label2;

		int ileCzasu = 30;
		int pozostalyCzas;
		int nrPytania;
		int ilePytan = 10;
		int X=1, Y=1, Wynik;
		int doIlu = 50;
		int dobrze = 0, zle = 0;
		int Wybor = 1; // =1 dodawanie; =2 odejmowanie; =3 mno¿enie
		bool status = false;  // =false - brak pytania; =true - zegar tyka


	public:
		Okno(void)
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
		~Okno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  Czas;

	protected:

	protected:

	private: System::Windows::Forms::Button^  bStart;
	private: System::Windows::Forms::PictureBox^  pictureMina;





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cbIleCzasu;

	private: System::Windows::Forms::Label^  lbPytanie;
	private: System::Windows::Forms::TextBox^  lbOdpowiedz;
	private: System::Windows::Forms::Label^  lbNrPytania;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lbPozostalyCzas;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  cbDoIlu;
	private: System::Windows::Forms::Button^  bNastepne;
	private: System::Windows::Forms::Label^  lbKomentarz;





	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Okno::typeid));
			this->Czas = (gcnew System::Windows::Forms::Timer(this->components));
			this->bStart = (gcnew System::Windows::Forms::Button());
			this->pictureMina = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbIleCzasu = (gcnew System::Windows::Forms::ComboBox());
			this->lbPytanie = (gcnew System::Windows::Forms::Label());
			this->lbOdpowiedz = (gcnew System::Windows::Forms::TextBox());
			this->lbNrPytania = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbPozostalyCzas = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbDoIlu = (gcnew System::Windows::Forms::ComboBox());
			this->bNastepne = (gcnew System::Windows::Forms::Button());
			this->lbKomentarz = (gcnew System::Windows::Forms::Label());
			this->lbWynik = (gcnew System::Windows::Forms::Label());
			this->cbWybor = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMina))->BeginInit();
			this->SuspendLayout();
			// 
			// Czas
			// 
			this->Czas->Interval = 1000;
			this->Czas->Tick += gcnew System::EventHandler(this, &Okno::Czas_Tick);
			// 
			// bStart
			// 
			this->bStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bStart.BackgroundImage")));
			this->bStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bStart->Location = System::Drawing::Point(783, 465);
			this->bStart->Name = L"bStart";
			this->bStart->Size = System::Drawing::Size(109, 44);
			this->bStart->TabIndex = 0;
			this->bStart->UseVisualStyleBackColor = true;
			this->bStart->Click += gcnew System::EventHandler(this, &Okno::bStart_Click);
			// 
			// pictureMina
			// 
			this->pictureMina->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMina.Image")));
			this->pictureMina->Location = System::Drawing::Point(30, 25);
			this->pictureMina->Name = L"pictureMina";
			this->pictureMina->Size = System::Drawing::Size(300, 386);
			this->pictureMina->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureMina->TabIndex = 2;
			this->pictureMina->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(336, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ile to jest:";
			// 
			// cbIleCzasu
			// 
			this->cbIleCzasu->BackColor = System::Drawing::Color::MintCream;
			this->cbIleCzasu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cbIleCzasu->FormattingEnabled = true;
			this->cbIleCzasu->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"15 sekund", L"30 sekund", L"45 sekund", L"1 minuta",
					L"2 minuty"
			});
			this->cbIleCzasu->Location = System::Drawing::Point(30, 481);
			this->cbIleCzasu->Name = L"cbIleCzasu";
			this->cbIleCzasu->Size = System::Drawing::Size(151, 28);
			this->cbIleCzasu->TabIndex = 4;
			this->cbIleCzasu->Text = L"30 sekund";
			this->cbIleCzasu->SelectedIndexChanged += gcnew System::EventHandler(this, &Okno::cbIleCzasu_SelectedIndexChanged);
			// 
			// lbPytanie
			// 
			this->lbPytanie->AutoSize = true;
			this->lbPytanie->BackColor = System::Drawing::Color::Transparent;
			this->lbPytanie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbPytanie->Location = System::Drawing::Point(328, 61);
			this->lbPytanie->Name = L"lbPytanie";
			this->lbPytanie->Size = System::Drawing::Size(235, 73);
			this->lbPytanie->TabIndex = 5;
			this->lbPytanie->Text = L"\? \? \? =";
			// 
			// lbOdpowiedz
			// 
			this->lbOdpowiedz->Enabled = false;
			this->lbOdpowiedz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbOdpowiedz->Location = System::Drawing::Point(370, 137);
			this->lbOdpowiedz->Name = L"lbOdpowiedz";
			this->lbOdpowiedz->Size = System::Drawing::Size(94, 62);
			this->lbOdpowiedz->TabIndex = 6;
			this->lbOdpowiedz->TextChanged += gcnew System::EventHandler(this, &Okno::lbOdpowiedz_TextChanged);
			this->lbOdpowiedz->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Okno::lbOdpowiedz_KeyDown);
			// 
			// lbNrPytania
			// 
			this->lbNrPytania->AutoSize = true;
			this->lbNrPytania->BackColor = System::Drawing::Color::Transparent;
			this->lbNrPytania->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbNrPytania->Location = System::Drawing::Point(346, 202);
			this->lbNrPytania->Name = L"lbNrPytania";
			this->lbNrPytania->Size = System::Drawing::Size(171, 20);
			this->lbNrPytania->TabIndex = 7;
			this->lbNrPytania->Text = L"Numer pytania: 10 z 10";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(346, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Sekund na odpowiedŸ:";
			// 
			// lbPozostalyCzas
			// 
			this->lbPozostalyCzas->AutoSize = true;
			this->lbPozostalyCzas->BackColor = System::Drawing::Color::Transparent;
			this->lbPozostalyCzas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbPozostalyCzas->Location = System::Drawing::Point(376, 301);
			this->lbPozostalyCzas->Name = L"lbPozostalyCzas";
			this->lbPozostalyCzas->Size = System::Drawing::Size(104, 73);
			this->lbPozostalyCzas->TabIndex = 9;
			this->lbPozostalyCzas->Text = L"30";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(27, 458);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Ile czasu na odpowiedŸ:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(773, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Zakres:";
			// 
			// cbDoIlu
			// 
			this->cbDoIlu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cbDoIlu->FormattingEnabled = true;
			this->cbDoIlu->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"30", L"40", L"50", L"60", L"70", L"80", L"90",
					L"100"
			});
			this->cbDoIlu->Location = System::Drawing::Point(777, 402);
			this->cbDoIlu->Name = L"cbDoIlu";
			this->cbDoIlu->Size = System::Drawing::Size(82, 28);
			this->cbDoIlu->TabIndex = 12;
			this->cbDoIlu->Text = L"50";
			this->cbDoIlu->SelectedIndexChanged += gcnew System::EventHandler(this, &Okno::cbDoIlu_SelectedIndexChanged);
			// 
			// bNastepne
			// 
			this->bNastepne->BackColor = System::Drawing::SystemColors::Control;
			this->bNastepne->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bNastepne.BackgroundImage")));
			this->bNastepne->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bNastepne->Enabled = false;
			this->bNastepne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bNastepne->Location = System::Drawing::Point(621, 25);
			this->bNastepne->Name = L"bNastepne";
			this->bNastepne->Size = System::Drawing::Size(173, 67);
			this->bNastepne->TabIndex = 13;
			this->bNastepne->UseVisualStyleBackColor = false;
			this->bNastepne->Visible = false;
			this->bNastepne->Click += gcnew System::EventHandler(this, &Okno::bNastepne_Click);
			// 
			// lbKomentarz
			// 
			this->lbKomentarz->AutoSize = true;
			this->lbKomentarz->BackColor = System::Drawing::Color::Transparent;
			this->lbKomentarz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lbKomentarz->Location = System::Drawing::Point(252, 458);
			this->lbKomentarz->Name = L"lbKomentarz";
			this->lbKomentarz->Size = System::Drawing::Size(40, 24);
			this->lbKomentarz->TabIndex = 14;
			this->lbKomentarz->Text = L".....";
			// 
			// lbWynik
			// 
			this->lbWynik->AutoSize = true;
			this->lbWynik->BackColor = System::Drawing::Color::Transparent;
			this->lbWynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbWynik->Location = System::Drawing::Point(345, 232);
			this->lbWynik->Name = L"lbWynik";
			this->lbWynik->Size = System::Drawing::Size(129, 20);
			this->lbWynik->TabIndex = 15;
			this->lbWynik->Text = L"Dobrze: 0 / le: 0";
			// 
			// cbWybor
			// 
			this->cbWybor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cbWybor->FormattingEnabled = true;
			this->cbWybor->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Dodawanie", L"Odejmowanie", L"Mno¿enie", L"Dzielenie" });
			this->cbWybor->Location = System::Drawing::Point(777, 341);
			this->cbWybor->Name = L"cbWybor";
			this->cbWybor->Size = System::Drawing::Size(121, 28);
			this->cbWybor->TabIndex = 16;
			this->cbWybor->Text = L"Dodawanie";
			this->cbWybor->SelectedIndexChanged += gcnew System::EventHandler(this, &Okno::cbWybor_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(773, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Operacja:";
			// 
			// Okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(904, 528);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbWybor);
			this->Controls->Add(this->lbWynik);
			this->Controls->Add(this->lbKomentarz);
			this->Controls->Add(this->bNastepne);
			this->Controls->Add(this->cbDoIlu);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbPozostalyCzas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbNrPytania);
			this->Controls->Add(this->lbOdpowiedz);
			this->Controls->Add(this->lbPytanie);
			this->Controls->Add(this->cbIleCzasu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureMina);
			this->Controls->Add(this->bStart);
			this->Name = L"Okno";
			this->Text = L"Okno";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMina))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bStart_Click(System::Object^  sender, System::EventArgs^  e) {
	// Przycisk Start


	bNastepne->Enabled = false;
	bNastepne->Visible = true;

//	bStart->Enabled = false;
	LosujLiczby();
	nrPytania = 1;
	status = true;
	dobrze = 0;
	zle = 0;
	bStart->Enabled = false;
	bStart->Visible = false;

	pozostalyCzas = ileCzasu;
	cbDoIlu->Enabled = false;
	cbIleCzasu->Enabled = false;
	cbWybor->Enabled = false;
	Czas->Enabled = true;
	lbWynik->Text = "Dobrze: " + Convert::ToString(dobrze) + " / le : " + Convert::ToString(zle);
	lbNrPytania->Text = "Numer pytania: 1 z 10";
	lbWynik->Text = "Dobrze: 0 / le : 0 ";
	lbOdpowiedz->Enabled = true;

}
private: System::Void Czas_Tick(System::Object^  sender, System::EventArgs^  e) {
	// Zegar
	pozostalyCzas--;
	lbPozostalyCzas->Text = Convert::ToString(pozostalyCzas);
	if (pozostalyCzas <= 0)	{
		zle++;
		pozostalyCzas = ileCzasu;
		Czas->Enabled = false;

		try {
			pictureMina->Image = Image::FromFile("../zle.jpg");
		}
		catch (...)
		{
			MessageBox::Show("nie zaladowalo sie", "buuuu", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		MessageBox::Show("Przegrana", "Up³yn¹³ czas!...", MessageBoxButtons::OK, MessageBoxIcon::Information);
		bNastepne->Enabled = true;
	}

}
private: System::Void cbIleCzasu_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (cbIleCzasu->Text == "15 sekund") { ileCzasu = 15;  }
	if (cbIleCzasu->Text == "30 sekund") { ileCzasu = 30; }
	if (cbIleCzasu->Text == "45 sekund") { ileCzasu = 45; }
	if (cbIleCzasu->Text == "1 minuta") { ileCzasu = 60; }
	if (cbIleCzasu->Text == "2 minuty") { ileCzasu = 120; }
	lbPozostalyCzas->Text = Convert::ToString(ileCzasu);
}
private: System::Void cbDoIlu_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (cbDoIlu->Text == "30") { doIlu = 30; }
	if (cbDoIlu->Text == "40") { doIlu = 40; }
	if (cbDoIlu->Text == "50") { doIlu = 50; }
	if (cbDoIlu->Text == "60") { doIlu = 60; }
	if (cbDoIlu->Text == "70") { doIlu = 70; }
	if (cbDoIlu->Text == "80") { doIlu = 80; }
	if (cbDoIlu->Text == "90") { doIlu = 90; }
	if (cbDoIlu->Text == "100") { doIlu = 100; }
}

 private: void LosujLiczby() {
	 Random^ losuj = gcnew Random;
	 String^ operacja = "?";
	 int Wynik2;
	 do
	 {
		 //... tu sprawdzamy czy wynik nie jest wiekszy od doIlu
		 if (Wybor == 1) {
			 X = losuj->Next(2, 70);
			 Y = losuj->Next(2, 90);
		 }
		 if (Wybor == 2) {
			 X = losuj->Next(6, 100);
			 Y = losuj->Next(5, 80);
		 }
		 if (Wybor == 3) {
			 X = losuj->Next(3, 10);
			 Y = losuj->Next(3, 10);
		 }
		 if (Wybor == 4) {
			 X = losuj->Next(2, 10);
			 Y = losuj->Next(1, 10);
		 }


		 if (Wybor == 1) { 
			 Wynik = X + Y;
			 operacja = " + ";
		 }
		 if (Wybor == 2) { 
			 Wynik = X - Y; 
			 operacja = " - ";
			 if (Wynik < 0) { Wynik = 1000; }
		 }
		 if (Wybor == 3) { 
			 Wynik = X * Y;
			 operacja = " * ";
		 }
		 if (Wybor == 4) {
			 Wynik = X * Y;
			 operacja = " / ";
			 if (Wynik > doIlu) {
				 Wynik = 1000;
			 }
			 else
			 {
				 Wynik2 = X;
				 X = Wynik;
				 Wynik = Wynik2;
			 }

		 }


	 } while (Wynik>doIlu);

	 lbPytanie->Text = Convert::ToString(X) + operacja + Convert::ToString(Y) + " =";
	
 }



private: System::Void lbOdpowiedz_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void lbOdpowiedz_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter && status == true)
	{
		status = false;
		Random^ losuj = gcnew Random;
		int komentarz, ile;
		komentarz = losuj->Next(1, 4);
		try {
			ile = Convert::ToInt16(lbOdpowiedz->Text);

		}
		catch (...)
		{

		}

		Czas->Enabled = false;
		if (ile == Wynik)
		{
	//		MessageBox::Show("odpowiedz dobra", "tytul", MessageBoxButtons::OK, MessageBoxIcon::Information);
			pictureMina->Image = Image::FromFile("../dobrze.jpg");
			dobrze++;
			if (komentarz == 1) { lbKomentarz->Text = "Bardzo dobrze! Zjedz truskawkê.";  }
			if (komentarz == 2) { lbKomentarz->Text = "Super! Jesteœ najlepsza."; }
			if (komentarz == 3) { lbKomentarz->Text = "Brawo! Brawo! Przemek rz¹dzi."; }
			
		}
		else
		{
//			MessageBox::Show("odpowiedz zla", "zle", MessageBoxButtons::OK, MessageBoxIcon::Information);
			pictureMina->Image = Image::FromFile("../zle.jpg");
			zle++;
			if (komentarz == 1) { lbKomentarz->Text = "Buuuu! Do pokoju siê uczyæ."; }
			if (komentarz == 2) { lbKomentarz->Text = "Szlaban na TV."; }
			if (komentarz == 3) { lbKomentarz->Text = "Za karê zjesz pieczarki."; }
		}
		bNastepne->Enabled = true;


	}
}
private: System::Void bNastepne_Click(System::Object^  sender, System::EventArgs^  e) {
	nrPytania++;

	if (nrPytania <= ilePytan)
	{
		status = true;
		LosujLiczby();
		bNastepne->Enabled = false;
		pozostalyCzas = ileCzasu;
		lbOdpowiedz->Text = "";
		pictureMina->Image = Image::FromFile("../mysle.jpg");
		Czas->Enabled = true;
		lbNrPytania->Text = "Numer pytania: " + Convert::ToString(nrPytania) + " z 10";
		lbWynik->Text = "Dobrze: "+Convert::ToString(dobrze)+" / le : "+Convert::ToString(zle);
		lbOdpowiedz->Enabled = true;
		lbKomentarz->Text = "....";
	}
	else
	{
		status = false;
		String^ ocena;
		cbDoIlu->Enabled = true;
		cbIleCzasu->Enabled = true;
		bStart->Enabled = true;
		bStart->Visible = true;
		bNastepne->Enabled = false;
		bNastepne->Visible = false;

		cbWybor->Enabled = true;
		lbOdpowiedz->Enabled = false;

		nrPytania = 0;
		pozostalyCzas = ileCzasu;
		lbOdpowiedz->Text = "";
		lbNrPytania->Text = "Numer pytania: " + Convert::ToString(nrPytania) + " z 10";
		pictureMina->Image = Image::FromFile("../mysle.jpg");
		lbPytanie->Text = "? ? ?=";
		if (dobrze <= 5) { ocena = "Pa³a!"; }
		if (dobrze > 5 && dobrze <= 7) { ocena = "Trójka!"; }
		if (dobrze == 8) { ocena = "Czwórka!"; }
		if (dobrze == 9) { ocena = "Pi¹teczka!"; }
		if (dobrze == 10) { ocena = "Szósteczka!!!"; }

		lbWynik->Text = "Dobrze: " + Convert::ToString(dobrze) + " / le : " + Convert::ToString(zle);
		lbKomentarz->Text = "Odpowiedzia³aœ " + Convert::ToString(dobrze) + " dobrze razy i " + Convert::ToString(zle) + " Ÿle razy.\nOcena: "+ocena+".";
		MessageBox::Show("Koniec pytañ, wynik na dole", "Koniec pytañ", MessageBoxButtons::OK, MessageBoxIcon::Information);


	}
}
private: System::Void cbWybor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (cbWybor->Text == "Dodawanie") { Wybor = 1; }
	if (cbWybor->Text == "Odejmowanie") { Wybor = 2; }
	if (cbWybor->Text == "Mno¿enie") { Wybor = 3; }
	if (cbWybor->Text == "Dzielenie") { Wybor = 4; }

}
};
}
