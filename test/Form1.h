#pragma once
#include "includes.h"

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

//	char auswahl_1;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
//			auswahl_1=' ';
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  weiter1;
	protected: 

	private: System::Windows::Forms::Button^  abbrechen;

	protected: 
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::RadioButton^  radio_full;
	private: System::Windows::Forms::RadioButton^  radio_user;
	private: System::Windows::Forms::RadioButton^  radio_expert;
	private: System::Windows::Forms::Label^  label_full;
	private: System::Windows::Forms::Label^  label_user;
	private: System::Windows::Forms::Label^  label_expert;

	private: System::Windows::Forms::PictureBox^  logo;
	private: System::Windows::Forms::TextBox^  text_standort;

	private: System::Windows::Forms::Label^  label_standort;
	private: System::Windows::Forms::Label^  label_geraet;
	private: System::Windows::Forms::Label^  label_drucker;
	private: System::Windows::Forms::Button^  weiter2;
	private: System::Windows::Forms::ListBox^  listBox_geraet;
	private: System::Windows::Forms::ListBox^  listBox_drucker;
	private: System::Windows::Forms::Label^  label_benutzername;
	private: System::Windows::Forms::Button^  weiter3;
	private: System::Windows::Forms::ListBox^  listBox_benutzername;


	protected: 
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->weiter1 = (gcnew System::Windows::Forms::Button());
			this->abbrechen = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->radio_full = (gcnew System::Windows::Forms::RadioButton());
			this->radio_user = (gcnew System::Windows::Forms::RadioButton());
			this->radio_expert = (gcnew System::Windows::Forms::RadioButton());
			this->label_full = (gcnew System::Windows::Forms::Label());
			this->label_user = (gcnew System::Windows::Forms::Label());
			this->label_expert = (gcnew System::Windows::Forms::Label());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->text_standort = (gcnew System::Windows::Forms::TextBox());
			this->label_standort = (gcnew System::Windows::Forms::Label());
			this->label_geraet = (gcnew System::Windows::Forms::Label());
			this->label_drucker = (gcnew System::Windows::Forms::Label());
			this->weiter2 = (gcnew System::Windows::Forms::Button());
			this->listBox_geraet = (gcnew System::Windows::Forms::ListBox());
			this->listBox_drucker = (gcnew System::Windows::Forms::ListBox());
			this->label_benutzername = (gcnew System::Windows::Forms::Label());
			this->weiter3 = (gcnew System::Windows::Forms::Button());
			this->listBox_benutzername = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->logo))->BeginInit();
			this->SuspendLayout();
			// 
			// weiter1
			// 
			this->weiter1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->weiter1->Location = System::Drawing::Point(692, 380);
			this->weiter1->Name = L"weiter1";
			this->weiter1->Size = System::Drawing::Size(120, 50);
			this->weiter1->TabIndex = 0;
			this->weiter1->Text = L"Weiter";
			this->weiter1->UseVisualStyleBackColor = true;
			this->weiter1->Click += gcnew System::EventHandler(this, &Form1::weiter1_Click);
			// 
			// abbrechen
			// 
			this->abbrechen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->abbrechen->Location = System::Drawing::Point(12, 380);
			this->abbrechen->Name = L"abbrechen";
			this->abbrechen->Size = System::Drawing::Size(120, 50);
			this->abbrechen->TabIndex = 1;
			this->abbrechen->Text = L"Abbrechen";
			this->abbrechen->UseVisualStyleBackColor = true;
			this->abbrechen->Click += gcnew System::EventHandler(this, &Form1::abbrechen_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(163, 391);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(500, 25);
			this->progressBar1->TabIndex = 2;
			// 
			// radio_full
			// 
			this->radio_full->AutoSize = true;
			this->radio_full->Checked = true;
			this->radio_full->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radio_full->Location = System::Drawing::Point(12, 131);
			this->radio_full->Name = L"radio_full";
			this->radio_full->Size = System::Drawing::Size(93, 20);
			this->radio_full->TabIndex = 3;
			this->radio_full->TabStop = true;
			this->radio_full->Text = L"Vollständig";
			this->radio_full->UseMnemonic = false;
			this->radio_full->UseVisualStyleBackColor = true;
			this->radio_full->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio_full_CheckedChanged);
			// 
			// radio_user
			// 
			this->radio_user->AutoSize = true;
			this->radio_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radio_user->Location = System::Drawing::Point(12, 217);
			this->radio_user->Name = L"radio_user";
			this->radio_user->Size = System::Drawing::Size(125, 20);
			this->radio_user->TabIndex = 4;
			this->radio_user->Text = L"Benutzerdefiniert";
			this->radio_user->UseVisualStyleBackColor = true;
			this->radio_user->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio_user_CheckedChanged);
			// 
			// radio_expert
			// 
			this->radio_expert->AutoSize = true;
			this->radio_expert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radio_expert->Location = System::Drawing::Point(12, 305);
			this->radio_expert->Name = L"radio_expert";
			this->radio_expert->Size = System::Drawing::Size(116, 20);
			this->radio_expert->TabIndex = 5;
			this->radio_expert->Text = L"Expertenmodul";
			this->radio_expert->UseVisualStyleBackColor = true;
			this->radio_expert->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio_expert_CheckedChanged);
			// 
			// label_full
			// 
			this->label_full->AutoSize = true;
			this->label_full->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_full->Location = System::Drawing::Point(294, 133);
			this->label_full->Name = L"label_full";
			this->label_full->Size = System::Drawing::Size(98, 16);
			this->label_full->TabIndex = 6;
			this->label_full->Text = L"Beschreibung1";
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_user->Location = System::Drawing::Point(294, 217);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(98, 16);
			this->label_user->TabIndex = 7;
			this->label_user->Text = L"Beschreibung2";
			this->label_user->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label_expert
			// 
			this->label_expert->AutoSize = true;
			this->label_expert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_expert->Location = System::Drawing::Point(294, 307);
			this->label_expert->Name = L"label_expert";
			this->label_expert->Size = System::Drawing::Size(98, 16);
			this->label_expert->TabIndex = 8;
			this->label_expert->Text = L"Beschreibung3";
			this->label_expert->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// logo
			// 
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(538, 12);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(274, 104);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo->TabIndex = 9;
			this->logo->TabStop = false;
			// 
			// text_standort
			// 
			this->text_standort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->text_standort->Location = System::Drawing::Point(297, 131);
			this->text_standort->Name = L"text_standort";
			this->text_standort->Size = System::Drawing::Size(237, 22);
			this->text_standort->TabIndex = 10;
			this->text_standort->Text = L"Bitte Standort eingeben";
			this->text_standort->Visible = false;
			// 
			// label_standort
			// 
			this->label_standort->AutoSize = true;
			this->label_standort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_standort->Location = System::Drawing::Point(12, 131);
			this->label_standort->Name = L"label_standort";
			this->label_standort->Size = System::Drawing::Size(79, 20);
			this->label_standort->TabIndex = 13;
			this->label_standort->Text = L"Standort: ";
			this->label_standort->Visible = false;
			this->label_standort->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label_geraet
			// 
			this->label_geraet->AutoSize = true;
			this->label_geraet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_geraet->Location = System::Drawing::Point(12, 217);
			this->label_geraet->Name = L"label_geraet";
			this->label_geraet->Size = System::Drawing::Size(58, 20);
			this->label_geraet->TabIndex = 14;
			this->label_geraet->Text = L"Gerät: ";
			this->label_geraet->Visible = false;
			// 
			// label_drucker
			// 
			this->label_drucker->AutoSize = true;
			this->label_drucker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_drucker->Location = System::Drawing::Point(12, 304);
			this->label_drucker->Name = L"label_drucker";
			this->label_drucker->Size = System::Drawing::Size(65, 20);
			this->label_drucker->TabIndex = 15;
			this->label_drucker->Text = L"Drucker";
			this->label_drucker->Visible = false;
			// 
			// weiter2
			// 
			this->weiter2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->weiter2->Location = System::Drawing::Point(692, 380);
			this->weiter2->Name = L"weiter2";
			this->weiter2->Size = System::Drawing::Size(120, 50);
			this->weiter2->TabIndex = 16;
			this->weiter2->Text = L"Weiter";
			this->weiter2->UseVisualStyleBackColor = true;
			this->weiter2->Visible = false;
			this->weiter2->Click += gcnew System::EventHandler(this, &Form1::weiter2_Click);
			// 
			// listBox_geraet
			// 
			this->listBox_geraet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox_geraet->FormattingEnabled = true;
			this->listBox_geraet->ItemHeight = 16;
			this->listBox_geraet->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"PC", L"NB"});
			this->listBox_geraet->Location = System::Drawing::Point(297, 217);
			this->listBox_geraet->Name = L"listBox_geraet";
			this->listBox_geraet->Size = System::Drawing::Size(130, 36);
			this->listBox_geraet->TabIndex = 17;
			this->listBox_geraet->Visible = false;
			// 
			// listBox_drucker
			// 
			this->listBox_drucker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox_drucker->FormattingEnabled = true;
			this->listBox_drucker->ItemHeight = 16;
			this->listBox_drucker->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"LJ2025", L"LJP400"});
			this->listBox_drucker->Location = System::Drawing::Point(297, 304);
			this->listBox_drucker->Name = L"listBox_drucker";
			this->listBox_drucker->Size = System::Drawing::Size(130, 36);
			this->listBox_drucker->TabIndex = 18;
			this->listBox_drucker->Visible = false;
			// 
			// label_benutzername
			// 
			this->label_benutzername->AutoSize = true;
			this->label_benutzername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_benutzername->Location = System::Drawing::Point(16, 131);
			this->label_benutzername->Name = L"label_benutzername";
			this->label_benutzername->Size = System::Drawing::Size(114, 20);
			this->label_benutzername->TabIndex = 19;
			this->label_benutzername->Text = L"Benutzername";
			this->label_benutzername->Visible = false;
			// 
			// weiter3
			// 
			this->weiter3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->weiter3->Location = System::Drawing::Point(692, 380);
			this->weiter3->Name = L"weiter3";
			this->weiter3->Size = System::Drawing::Size(120, 50);
			this->weiter3->TabIndex = 20;
			this->weiter3->Text = L"Weiter";
			this->weiter3->UseVisualStyleBackColor = true;
			this->weiter3->Visible = false;
			// 
			// listBox_benutzername
			// 
			this->listBox_benutzername->FormattingEnabled = true;
			this->listBox_benutzername->Location = System::Drawing::Point(297, 131);
			this->listBox_benutzername->Name = L"listBox_benutzername";
			this->listBox_benutzername->Size = System::Drawing::Size(334, 212);
			this->listBox_benutzername->TabIndex = 21;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 442);
			this->Controls->Add(this->listBox_benutzername);
			this->Controls->Add(this->weiter3);
			this->Controls->Add(this->label_benutzername);
			this->Controls->Add(this->listBox_drucker);
			this->Controls->Add(this->listBox_geraet);
			this->Controls->Add(this->weiter2);
			this->Controls->Add(this->label_drucker);
			this->Controls->Add(this->label_geraet);
			this->Controls->Add(this->label_standort);
			this->Controls->Add(this->text_standort);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->abbrechen);
			this->Controls->Add(this->weiter1);
			this->Controls->Add(this->logo);
			this->Controls->Add(this->label_expert);
			this->Controls->Add(this->label_user);
			this->Controls->Add(this->label_full);
			this->Controls->Add(this->radio_expert);
			this->Controls->Add(this->radio_user);
			this->Controls->Add(this->radio_full);
			this->Name = L"Form1";
			this->Text = L"Rollout Script";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void weiter1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->radio_full->Visible = false;
				 this->radio_user->Visible = false;
				 this->radio_expert->Visible = false;
				 this->label_full->Visible = false;
				 this->label_user->Visible = false;
				 this->label_expert->Visible = false;
				 this->weiter1->Visible = false;
				 
				 this->label_standort->Visible=true;
				 this->label_geraet->Visible=true;
				 this->label_drucker->Visible=true;
				 this->text_standort->Visible=true;
				 this->listBox_geraet->Visible=true;
				 this->listBox_drucker->Visible=true;
				 this->weiter2->Visible=true;
			 }

		private: System::Void weiter2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->label_standort->Visible=false;
				 this->label_geraet->Visible=false;
				 this->label_drucker->Visible=false;
				 this->text_standort->Visible=false;
				 this->listBox_geraet->Visible=false;
				 this->listBox_drucker->Visible=false;
				 this->weiter2->Visible=false;

				 this->weiter3->Visible=true;
				 this->label_benutzername->Visible=true;
				 this->listBox_benutzername->Visible=true;
			 }
		private: System::Void weiter3_Click(System::Object^  sender, System::EventArgs^  e) {
					this->label_benutzername->Visible=false;
					this->listBox_benutzername->Visible=false;
					this->weiter3->Visible=false;

			}
	private: System::Void abbrechen_Click(System::Object^  sender, System::EventArgs^  e) {
				Application::Exit();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void statusStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }
	private: System::Void radio_full_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 auswahl_1 = 'f';
			 }
	private: System::Void radio_user_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 auswahl_1 = 'u';
			 }
	private: System::Void radio_expert_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 auswahl_1 = 'e';
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

