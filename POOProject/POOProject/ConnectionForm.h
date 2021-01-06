#pragma once
#include "MainForm.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ConnectionForm
	/// </summary>
	public ref class ConnectionForm : public System::Windows::Forms::Form
	{
	public:
		ConnectionForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ConnectionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxId;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxPswd;

	private: System::Windows::Forms::Label^ label3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPswd = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connexion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConnectionForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Identifiant";
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(71, 130);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->Size = System::Drawing::Size(166, 20);
			this->textBoxId->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Mot de passe";
			// 
			// textBoxPswd
			// 
			this->textBoxPswd->Location = System::Drawing::Point(71, 217);
			this->textBoxPswd->Name = L"textBoxPswd";
			this->textBoxPswd->Size = System::Drawing::Size(166, 20);
			this->textBoxPswd->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"GestApp";
			// 
			// ConnectionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(305, 335);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxPswd);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"ConnectionForm";
			this->Text = L"ConnectionForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ id = textBoxId->Text;
		String^ pswd = textBoxPswd->Text;

		if (id == "ProjetPOO" && pswd == "Groupe3") {

			this->Hide();
			MainForm^ mf = gcnew MainForm();
			mf->ShowDialog();
			Application::Exit();
		}

		else {

			MessageBox::Show("Utilisateur ou mot de passe incorrect.");
		}
	}
	};
}
