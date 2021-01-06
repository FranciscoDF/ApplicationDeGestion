#pragma once
#include "ClassCat.h"

namespace POOProject {

	using namespace ClassCat;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PersonnelModifierForm
	/// </summary>
	public ref class PersonnelModifierForm : public System::Windows::Forms::Form
	{
	public:
		PersonnelModifierForm(String^ ID)
		{
			InitializeComponent();

			this->ID = ID;

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT PERNOM, PERPRENOM, ADRESSE, DATE, ID_SUPERIEUR FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.ID_PERSONNEL='" + ID + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();

				while (dr->Read()) {

					textBoxNom->Text = dr->GetString(0);
					textBoxPrenom->Text = dr->GetString(1);
					textBoxAdresse->Text = dr->GetString(2);
					textBoxDate->Text = dr->GetString(3);
					textBoxSuperieur->Text = dr->GetString(4);
				}

				con->Close();
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	protected:

		String^ ID;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~PersonnelModifierForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAjouter;
	private: System::Windows::Forms::Button^ buttonAnnuler;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxSuperieur;
	private: System::Windows::Forms::TextBox^ textBoxAdresse;
	private: System::Windows::Forms::TextBox^ textBoxDate;




	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonAjouter = (gcnew System::Windows::Forms::Button());
			this->buttonAnnuler = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresse = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonModifier
			// 
			this->buttonAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAjouter->Location = System::Drawing::Point(404, 262);
			this->buttonAjouter->Name = L"buttonModifier";
			this->buttonAjouter->Size = System::Drawing::Size(80, 27);
			this->buttonAjouter->TabIndex = 0;
			this->buttonAjouter->Text = L"Modifier";
			this->buttonAjouter->UseVisualStyleBackColor = true;
			this->buttonAjouter->Click += gcnew System::EventHandler(this, &PersonnelModifierForm::buttonModifier_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnnuler->Location = System::Drawing::Point(290, 262);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(72, 27);
			this->buttonAnnuler->TabIndex = 1;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &PersonnelModifierForm::buttonAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ID Supérieur";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Adresse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Date d\'embauche";
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(168, 8);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(316, 25);
			this->textBoxNom->TabIndex = 7;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrenom->Location = System::Drawing::Point(168, 48);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(316, 25);
			this->textBoxPrenom->TabIndex = 8;
			// 
			// textBoxSuperieur
			// 
			this->textBoxSuperieur->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSuperieur->Location = System::Drawing::Point(168, 88);
			this->textBoxSuperieur->Name = L"textBoxSuperieur";
			this->textBoxSuperieur->Size = System::Drawing::Size(316, 25);
			this->textBoxSuperieur->TabIndex = 9;
			// 
			// textBoxAdresse
			// 
			this->textBoxAdresse->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdresse->Location = System::Drawing::Point(168, 128);
			this->textBoxAdresse->Name = L"textBoxAdresse";
			this->textBoxAdresse->Size = System::Drawing::Size(316, 25);
			this->textBoxAdresse->TabIndex = 10;
			// 
			// textBoxDate
			// 
			this->textBoxDate->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDate->Location = System::Drawing::Point(168, 168);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(316, 25);
			this->textBoxDate->TabIndex = 11;
			// 
			// PersonnelModifierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 299);
			this->Controls->Add(this->textBoxDate);
			this->Controls->Add(this->textBoxAdresse);
			this->Controls->Add(this->textBoxSuperieur);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->buttonAjouter);
			this->Name = L"PersonnelModifierForm";
			this->Text = L"s";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nom = textBoxNom->Text;
		String^ prenom = textBoxPrenom->Text;
		String^ superieur = textBoxSuperieur->Text;
		String^ adresse = textBoxAdresse->Text;
		String^ date = textBoxDate->Text;

		if (nom == "" || prenom == "" || superieur == "" || adresse == "" || date == "") {

			MessageBox::Show("Remplissez tous les champs !", "Erreur");
		}
		else {

			Personnel monPersonnel(this->ID, nom, prenom, superieur, adresse, date);
			monPersonnel.Modifier();

			this->Hide();
		}
	}
};
}
