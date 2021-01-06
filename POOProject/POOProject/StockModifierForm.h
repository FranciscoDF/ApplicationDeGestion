#pragma once
#include "ClassCat.h"

namespace POOProject {

	using namespace ClassCat;
	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de StockModifierForm
	/// </summary>
	public ref class StockModifierForm : public System::Windows::Forms::Form
	{
	public:
		StockModifierForm(String^ REF)
		{
			InitializeComponent();

			this->REF = REF;

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT ARTNOM, NOMNAT, COULEUR, ARTSTOCKT, ARTSEUIL, ARTPRIXHT, ARTTVA FROM ARTICLE, NATURE, COULEUR WHERE ARTICLE.ID_ARTICLE='" + this->REF + "' AND NATURE.ID_NATURE=ARTICLE.ID_NATURE AND COULEUR.ID_COLOR=ARTICLE.ID_COLOR ", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();

				while (dr->Read()) {

					textBoxDesi->Text = dr->GetString(0);
					textBoxNature->Text = dr->GetString(1);
					textBoxCouleur->Text = dr->GetString(2);
					textBoxQuantiteStock->Text = dr->GetString(3);
					textBoxSeuilReapro->Text = dr->GetString(4);
					textBoxPrixHT->Text = (dr->GetFloat(5)).ToString(CultureInfo::InvariantCulture);
					textBoxTauxTVA->Text = (dr->GetFloat(6)).ToString(CultureInfo::InvariantCulture);
				}
				con->Close();
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxNature;
	public:


	protected:

		String^ REF;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~StockModifierForm()
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
	private: System::Windows::Forms::TextBox^ textBoxDesi;
	private: System::Windows::Forms::TextBox^ textBoxPrixHT;
	private: System::Windows::Forms::TextBox^ textBoxTauxTVA;
	private: System::Windows::Forms::TextBox^ textBoxQuantiteStock;
	private: System::Windows::Forms::TextBox^ textBoxSeuilReapro;
	private: System::Windows::Forms::TextBox^ textBoxCouleur;






	private: System::Windows::Forms::Label^ label6;




	protected:

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->textBoxDesi = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQuantiteStock = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeuilReapro = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxNature = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonModifier
			// 
			this->buttonModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonModifier->Location = System::Drawing::Point(404, 310);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(80, 27);
			this->buttonModifier->TabIndex = 0;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			this->buttonModifier->Click += gcnew System::EventHandler(this, &StockModifierForm::buttonModifier_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnnuler->Location = System::Drawing::Point(289, 310);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(72, 27);
			this->buttonAnnuler->TabIndex = 1;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &StockModifierForm::buttonAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"D�signation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Prix HT";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Taux TVA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Quantite Stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Seuil r�apro";
			// 
			// textBoxDesi
			// 
			this->textBoxDesi->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDesi->Location = System::Drawing::Point(168, 8);
			this->textBoxDesi->Name = L"textBoxDesi";
			this->textBoxDesi->Size = System::Drawing::Size(316, 25);
			this->textBoxDesi->TabIndex = 7;
			// 
			// textBoxPrixHT
			// 
			this->textBoxPrixHT->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrixHT->Location = System::Drawing::Point(168, 48);
			this->textBoxPrixHT->Name = L"textBoxPrixHT";
			this->textBoxPrixHT->Size = System::Drawing::Size(316, 25);
			this->textBoxPrixHT->TabIndex = 8;
			// 
			// textBoxTauxTVA
			// 
			this->textBoxTauxTVA->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTauxTVA->Location = System::Drawing::Point(168, 88);
			this->textBoxTauxTVA->Name = L"textBoxTauxTVA";
			this->textBoxTauxTVA->Size = System::Drawing::Size(316, 25);
			this->textBoxTauxTVA->TabIndex = 9;
			// 
			// textBoxQuantiteStock
			// 
			this->textBoxQuantiteStock->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQuantiteStock->Location = System::Drawing::Point(168, 128);
			this->textBoxQuantiteStock->Name = L"textBoxQuantiteStock";
			this->textBoxQuantiteStock->Size = System::Drawing::Size(316, 25);
			this->textBoxQuantiteStock->TabIndex = 10;
			// 
			// textBoxSeuilReapro
			// 
			this->textBoxSeuilReapro->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSeuilReapro->Location = System::Drawing::Point(168, 168);
			this->textBoxSeuilReapro->Name = L"textBoxSeuilReapro";
			this->textBoxSeuilReapro->Size = System::Drawing::Size(316, 25);
			this->textBoxSeuilReapro->TabIndex = 11;
			// 
			// textBoxCouleur
			// 
			this->textBoxCouleur->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCouleur->Location = System::Drawing::Point(168, 208);
			this->textBoxCouleur->Name = L"textBoxCouleur";
			this->textBoxCouleur->Size = System::Drawing::Size(316, 25);
			this->textBoxCouleur->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Couleur";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Nature";
			// 
			// textBoxNature
			// 
			this->textBoxNature->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNature->Location = System::Drawing::Point(168, 248);
			this->textBoxNature->Name = L"textBoxNature";
			this->textBoxNature->Size = System::Drawing::Size(316, 25);
			this->textBoxNature->TabIndex = 14;
			// 
			// StockModifierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 351);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxNature);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxCouleur);
			this->Controls->Add(this->textBoxSeuilReapro);
			this->Controls->Add(this->textBoxQuantiteStock);
			this->Controls->Add(this->textBoxTauxTVA);
			this->Controls->Add(this->textBoxPrixHT);
			this->Controls->Add(this->textBoxDesi);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->buttonModifier);
			this->Name = L"StockModifierForm";
			this->Text = L"StockModifierForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ desi = textBoxDesi->Text;
		String^ prixHT = textBoxPrixHT->Text;
		String^ TauxTVA = textBoxTauxTVA->Text;
		String^ quantiteStock = textBoxQuantiteStock->Text;
		String^ seuilReapro = textBoxSeuilReapro->Text;
		String^ couleur = textBoxCouleur->Text;
		String^ nature = textBoxNature->Text;

		if (desi == "" || prixHT == "" || TauxTVA == "" || quantiteStock == "" || seuilReapro == "" || couleur == "" || nature == "") {

			MessageBox::Show("Remplissez tous les champs !", "Erreur");
		}
		else {

			Stock monStock(this->REF, desi, prixHT, TauxTVA, quantiteStock, seuilReapro, couleur, nature);
			monStock.Modifier();

			this->Hide();
		}
	}
};
}
