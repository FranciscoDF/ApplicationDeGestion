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
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de CommandeModifierForm
	/// </summary>
	public ref class CommandeModifierForm : public System::Windows::Forms::Form
	{
	public:
		CommandeModifierForm(String^ id)
		{
			InitializeComponent();

			this->ID = id;

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT COMREF, COMMANDE.ID_CLIENT, tmp.DATE, tmp2.DATE, tmp3.DATE, MOYEN_DE_PAIEMENT.MOYPAI, ARTICLE.ID_ARTICLE, QUANTART FROM COMMANDE, CLIENT, DATE as tmp, DATE as tmp2, DATE as tmp3, ARTICLE, MOYEN_DE_PAIEMENT WHERE COMMANDE.ID_COMMANDE='" + this->ID + "' AND COMMANDE.ID_DATEEMIS=tmp.ID_DATE AND COMMANDE.ID_DATELIVR=tmp2.ID_DATE AND COMMANDE.ID_DATEREG=tmp3.ID_DATE AND ARTICLE.ID_ARTICLE=COMMANDE.ID_ARTICLE AND MOYEN_DE_PAIEMENT.ID_MOYPAIE=COMMANDE.ID_MOYPAIE GROUP BY ID_COMMANDE", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();

				while (dr->Read()) {

					textBoxRef->Text = dr->GetString(0);
					textBoxNumClient->Text = dr->GetString(1);
					textBoxDateEmi->Text = dr->GetString(2);
					textBoxDateLivr->Text = dr->GetString(3);
					textBoxDatePaie->Text = dr->GetString(4);
					textBoxMoyPaie->Text = dr->GetString(5);
					textBoxRefArt->Text = dr->GetString(6);
					textBoxQuantiteArt->Text = dr->GetString(7);
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
		~CommandeModifierForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonModifier;
	private: System::Windows::Forms::Button^ buttonAnnuler;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxRef;
	private: System::Windows::Forms::TextBox^ textBoxDateLivr;
	private: System::Windows::Forms::TextBox^ textBoxDateEmi;
	private: System::Windows::Forms::TextBox^ textBoxDatePaie;

	private: System::Windows::Forms::TextBox^ textBoxMoyPaie;









	private: System::Windows::Forms::TextBox^ textBoxQuantiteArt;

	private: System::Windows::Forms::TextBox^ textBoxRefArt;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;





	private: System::Windows::Forms::TextBox^ textBoxNumClient;

	private: System::Windows::Forms::Label^ label11;




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
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->buttonAnnuler = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxRef = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateLivr = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateEmi = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDatePaie = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMoyPaie = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQuantiteArt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRefArt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxNumClient = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonModifier
			// 
			this->buttonModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonModifier->Location = System::Drawing::Point(404, 349);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(80, 27);
			this->buttonModifier->TabIndex = 0;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			this->buttonModifier->Click += gcnew System::EventHandler(this, &CommandeModifierForm::buttonModifier_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnnuler->Location = System::Drawing::Point(286, 349);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(72, 27);
			this->buttonAnnuler->TabIndex = 1;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &CommandeModifierForm::buttonAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Référence";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Date livraison";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Date émission";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Date paiement";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Moyen paiement";
			// 
			// textBoxRef
			// 
			this->textBoxRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRef->Location = System::Drawing::Point(168, 8);
			this->textBoxRef->Name = L"textBoxRef";
			this->textBoxRef->Size = System::Drawing::Size(316, 25);
			this->textBoxRef->TabIndex = 7;
			// 
			// textBoxDateLivr
			// 
			this->textBoxDateLivr->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDateLivr->Location = System::Drawing::Point(168, 88);
			this->textBoxDateLivr->Name = L"textBoxDateLivr";
			this->textBoxDateLivr->Size = System::Drawing::Size(316, 25);
			this->textBoxDateLivr->TabIndex = 8;
			this->textBoxDateLivr->Text = L"AAAA-MM-JJ";
			// 
			// textBoxDateEmi
			// 
			this->textBoxDateEmi->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDateEmi->Location = System::Drawing::Point(168, 128);
			this->textBoxDateEmi->Name = L"textBoxDateEmi";
			this->textBoxDateEmi->Size = System::Drawing::Size(316, 25);
			this->textBoxDateEmi->TabIndex = 9;
			this->textBoxDateEmi->Text = L"AAAA-MM-JJ";
			// 
			// textBoxDatePaie
			// 
			this->textBoxDatePaie->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDatePaie->Location = System::Drawing::Point(168, 168);
			this->textBoxDatePaie->Name = L"textBoxDatePaie";
			this->textBoxDatePaie->Size = System::Drawing::Size(316, 25);
			this->textBoxDatePaie->TabIndex = 10;
			this->textBoxDatePaie->Text = L"AAAA-MM-JJ";
			// 
			// textBoxMoyPaie
			// 
			this->textBoxMoyPaie->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMoyPaie->Location = System::Drawing::Point(168, 208);
			this->textBoxMoyPaie->Name = L"textBoxMoyPaie";
			this->textBoxMoyPaie->Size = System::Drawing::Size(316, 25);
			this->textBoxMoyPaie->TabIndex = 11;
			// 
			// textBoxQuantiteArt
			// 
			this->textBoxQuantiteArt->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQuantiteArt->Location = System::Drawing::Point(168, 288);
			this->textBoxQuantiteArt->Name = L"textBoxQuantiteArt";
			this->textBoxQuantiteArt->Size = System::Drawing::Size(316, 25);
			this->textBoxQuantiteArt->TabIndex = 19;
			// 
			// textBoxRefArt
			// 
			this->textBoxRefArt->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRefArt->Location = System::Drawing::Point(168, 248);
			this->textBoxRefArt->Name = L"textBoxRefArt";
			this->textBoxRefArt->Size = System::Drawing::Size(316, 25);
			this->textBoxRefArt->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 289);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Quantité article";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Référence article";
			// 
			// textBoxNumClient
			// 
			this->textBoxNumClient->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNumClient->Location = System::Drawing::Point(168, 48);
			this->textBoxNumClient->Name = L"textBoxNumClient";
			this->textBoxNumClient->Size = System::Drawing::Size(316, 25);
			this->textBoxNumClient->TabIndex = 26;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(122, 20);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Numero Client";
			// 
			// CommandeModifierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 388);
			this->Controls->Add(this->textBoxNumClient);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBoxQuantiteArt);
			this->Controls->Add(this->textBoxRefArt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxMoyPaie);
			this->Controls->Add(this->textBoxDatePaie);
			this->Controls->Add(this->textBoxDateEmi);
			this->Controls->Add(this->textBoxDateLivr);
			this->Controls->Add(this->textBoxRef);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->buttonModifier);
			this->Name = L"CommandeModifierForm";
			this->Text = L"CommandeModifierForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ ref = textBoxRef->Text;
		String^ numClient = textBoxNumClient->Text;
		String^ dateLivr = textBoxDateLivr->Text;
		String^ dateEmi = textBoxDateEmi->Text;
		String^ datePaie = textBoxDatePaie->Text;
		String^ moyPaie = textBoxMoyPaie->Text;
		String^ refArt = textBoxRefArt->Text;
		String^ quantiteArt = textBoxQuantiteArt->Text;

		if (ref == "" || numClient == "" || dateLivr == "" || dateEmi == "" || datePaie == "" || moyPaie == "" || refArt == "" || quantiteArt == "") {

			MessageBox::Show("Remplissez tous les champs !", "Erreur");
		}
		else {

			Commande monCommande(this->ID, ref, numClient, dateLivr, dateEmi, datePaie, moyPaie, refArt, quantiteArt);
			monCommande.Modifier();

			this->Hide();
		}
	}

	};
}
