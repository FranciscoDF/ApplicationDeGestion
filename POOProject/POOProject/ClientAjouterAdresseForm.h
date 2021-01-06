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
	/// Description résumée de ClientAjouterAdresseForm
	/// </summary>
	public ref class ClientAjouterAdresseForm : public System::Windows::Forms::Form
	{
	public:
		ClientAjouterAdresseForm(int state, String^ num)
		{
			this->STATE = state;
			this->NUM = num;

			InitializeComponent();
			
			if (this->STATE == 1) {

				this->label2->Visible = false;
				this->textBoxAdrLivr->Visible = false;
			}
			else if (this->STATE == 2) {

				this->label1->Visible = false;
				this->textBoxAdrFact->Visible = false;
			}
		}

	protected:

		int STATE;
		String^ NUM;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ClientAjouterAdresseForm()
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
	private: System::Windows::Forms::TextBox^ textBoxAdrFact;
	private: System::Windows::Forms::TextBox^ textBoxAdrLivr;























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
			this->textBoxAdrFact = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrLivr = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonAjouter
			// 
			this->buttonAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAjouter->Location = System::Drawing::Point(411, 118);
			this->buttonAjouter->Name = L"buttonAjouter";
			this->buttonAjouter->Size = System::Drawing::Size(73, 27);
			this->buttonAjouter->TabIndex = 0;
			this->buttonAjouter->Text = L"Ajouter";
			this->buttonAjouter->UseVisualStyleBackColor = true;
			this->buttonAjouter->Click += gcnew System::EventHandler(this, &ClientAjouterAdresseForm::buttonAjouter_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnnuler->Location = System::Drawing::Point(299, 118);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(72, 27);
			this->buttonAnnuler->TabIndex = 1;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &ClientAjouterAdresseForm::buttonAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Adresse Fact";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Adresse Livr";
			// 
			// textBoxAdrFact
			// 
			this->textBoxAdrFact->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrFact->Location = System::Drawing::Point(168, 8);
			this->textBoxAdrFact->Name = L"textBoxAdrFact";
			this->textBoxAdrFact->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrFact->TabIndex = 7;
			// 
			// textBoxAdrLivr
			// 
			this->textBoxAdrLivr->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrLivr->Location = System::Drawing::Point(168, 48);
			this->textBoxAdrLivr->Name = L"textBoxAdrLivr";
			this->textBoxAdrLivr->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrLivr->TabIndex = 8;
			// 
			// ClientAjouterAdresseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 157);
			this->Controls->Add(this->textBoxAdrLivr);
			this->Controls->Add(this->textBoxAdrFact);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->buttonAjouter);
			this->Name = L"ClientAjouterAdresseForm";
			this->Text = L"ClientAjouterAdresseForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
	}

	private: System::Void buttonAjouter_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ adrFact = textBoxAdrFact->Text;
		String^ adrLivr = textBoxAdrLivr->Text;

		if (adrFact != "") {

			Client monClient(this->NUM, adrFact);
			monClient.AjouterAdresse(1);
		}

		if (adrLivr != "") {

			Client monClient(this->NUM, adrLivr);
			monClient.AjouterAdresse(2);
		}

		this->Hide();
		

	}
};
}
