#pragma once
#include "PersonnelAjouterForm.h"
#include "PersonnelModifierForm.h"
#include "ClientsAjouterForm.h"
#include "ClientsModifierForm.h"
#include "CommandeAjouterForm.h"
#include "CommandeModifierForm.h"
#include "StockAjouterForm.h"
#include "StockModifierForm.h"

namespace POOProject {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonPersonnel;
	private: System::Windows::Forms::Button^ buttonClients;
	private: System::Windows::Forms::Button^ buttonCommandes;
	private: System::Windows::Forms::Button^ buttonStock;
	private: System::Windows::Forms::Button^ buttonStatistiques;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelCategories;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panelPersonnel;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textboxPersonnelNom;




	private: System::Windows::Forms::TextBox^ textboxPersonnelID;



	private: System::Windows::Forms::Button^ buttonPersonnelSupprimer;
	private: System::Windows::Forms::Button^ buttonPersonnelModifier;
	private: System::Windows::Forms::Button^ buttonPersonnelAjouter;
	private: System::Windows::Forms::Panel^ panelClients;




	private: System::Windows::Forms::Button^ buttonClientsSupprimer;

	private: System::Windows::Forms::Button^ buttonClientsModifier;

	private: System::Windows::Forms::Button^ buttonClientsAjouter;



	private: System::Windows::Forms::TextBox^ textboxClientsPrenom;
	private: System::Windows::Forms::TextBox^ textboxClientsNom;
	private: System::Windows::Forms::TextBox^ textboxClientsNumero;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonClientsRechercher;
	private: System::Windows::Forms::Panel^ panelCommandes;














	private: System::Windows::Forms::Button^ buttonCommandesSupprimer;
	private: System::Windows::Forms::Button^ buttonCommandesModifier;
	private: System::Windows::Forms::Button^ buttonCommandesAjouter;
	private: System::Windows::Forms::TextBox^ textBoxCommandesID;









	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panelStock;
	private: System::Windows::Forms::Button^ buttonStockRechercher;




	private: System::Windows::Forms::Button^ buttonStockSupprimer;
	private: System::Windows::Forms::Button^ buttonStockModifier;
	private: System::Windows::Forms::Button^ buttonStockAjouter;




	private: System::Windows::Forms::TextBox^ textBoxStockRef;




	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Button^ buttonPersonnelRechercher;
	private: System::Windows::Forms::Button^ buttonCommandesRechercher;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBoxStockNom;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBoxPersonnelPrenom;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBoxCommandesRef;
private: System::Windows::Forms::Panel^ panelStatistiques;
private: System::Windows::Forms::Button^ buttonStatPanierMoy;
private: System::Windows::Forms::Button^ buttonStatProdReapro;
private: System::Windows::Forms::Button^ buttonStatValeurAchatStock;





private: System::Windows::Forms::Button^ buttonStatPlusVendus;
private: System::Windows::Forms::Button^ buttonStatMoinsVendus;




	private: System::ComponentModel::IContainer^ components;















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->buttonPersonnel = (gcnew System::Windows::Forms::Button());
			this->buttonClients = (gcnew System::Windows::Forms::Button());
			this->buttonCommandes = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->buttonStatistiques = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCategories = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panelPersonnel = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxPersonnelPrenom = (gcnew System::Windows::Forms::TextBox());
			this->buttonPersonnelRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelModifier = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelAjouter = (gcnew System::Windows::Forms::Button());
			this->textboxPersonnelNom = (gcnew System::Windows::Forms::TextBox());
			this->textboxPersonnelID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelClients = (gcnew System::Windows::Forms::Panel());
			this->buttonClientsRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonClientsSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonClientsModifier = (gcnew System::Windows::Forms::Button());
			this->buttonClientsAjouter = (gcnew System::Windows::Forms::Button());
			this->textboxClientsPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNom = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNumero = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panelCommandes = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommandesRef = (gcnew System::Windows::Forms::TextBox());
			this->buttonCommandesRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesModifier = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesAjouter = (gcnew System::Windows::Forms::Button());
			this->textBoxCommandesID = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panelStock = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxStockNom = (gcnew System::Windows::Forms::TextBox());
			this->buttonStockRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonStockSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonStockModifier = (gcnew System::Windows::Forms::Button());
			this->buttonStockAjouter = (gcnew System::Windows::Forms::Button());
			this->textBoxStockRef = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panelStatistiques = (gcnew System::Windows::Forms::Panel());
			this->buttonStatMoinsVendus = (gcnew System::Windows::Forms::Button());
			this->buttonStatPanierMoy = (gcnew System::Windows::Forms::Button());
			this->buttonStatProdReapro = (gcnew System::Windows::Forms::Button());
			this->buttonStatValeurAchatStock = (gcnew System::Windows::Forms::Button());
			this->buttonStatPlusVendus = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panelPersonnel->SuspendLayout();
			this->panelClients->SuspendLayout();
			this->panelCommandes->SuspendLayout();
			this->panelStock->SuspendLayout();
			this->panelStatistiques->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonPersonnel
			// 
			this->buttonPersonnel->FlatAppearance->BorderSize = 0;
			this->buttonPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnel->Location = System::Drawing::Point(282, 12);
			this->buttonPersonnel->Name = L"buttonPersonnel";
			this->buttonPersonnel->Size = System::Drawing::Size(119, 30);
			this->buttonPersonnel->TabIndex = 0;
			this->buttonPersonnel->Text = L"Personnel";
			this->buttonPersonnel->UseVisualStyleBackColor = true;
			this->buttonPersonnel->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnel_Click);
			// 
			// buttonClients
			// 
			this->buttonClients->FlatAppearance->BorderSize = 0;
			this->buttonClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClients->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClients->Location = System::Drawing::Point(407, 12);
			this->buttonClients->Name = L"buttonClients";
			this->buttonClients->Size = System::Drawing::Size(119, 30);
			this->buttonClients->TabIndex = 1;
			this->buttonClients->Text = L"Clients";
			this->buttonClients->UseVisualStyleBackColor = true;
			this->buttonClients->Click += gcnew System::EventHandler(this, &MainForm::buttonClients_Click);
			// 
			// buttonCommandes
			// 
			this->buttonCommandes->FlatAppearance->BorderSize = 0;
			this->buttonCommandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandes->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandes->Location = System::Drawing::Point(532, 12);
			this->buttonCommandes->Name = L"buttonCommandes";
			this->buttonCommandes->Size = System::Drawing::Size(119, 30);
			this->buttonCommandes->TabIndex = 2;
			this->buttonCommandes->Text = L"Commandes";
			this->buttonCommandes->UseVisualStyleBackColor = true;
			this->buttonCommandes->Click += gcnew System::EventHandler(this, &MainForm::buttonCommandes_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->FlatAppearance->BorderSize = 0;
			this->buttonStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStock->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStock->Location = System::Drawing::Point(657, 12);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(119, 30);
			this->buttonStock->TabIndex = 3;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &MainForm::buttonStock_Click);
			// 
			// buttonStatistiques
			// 
			this->buttonStatistiques->FlatAppearance->BorderSize = 0;
			this->buttonStatistiques->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatistiques->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatistiques->Location = System::Drawing::Point(972, 12);
			this->buttonStatistiques->Name = L"buttonStatistiques";
			this->buttonStatistiques->Size = System::Drawing::Size(125, 30);
			this->buttonStatistiques->TabIndex = 4;
			this->buttonStatistiques->Text = L"Statistiques";
			this->buttonStatistiques->UseVisualStyleBackColor = true;
			this->buttonStatistiques->Click += gcnew System::EventHandler(this, &MainForm::buttonStatistiques_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Catégories";
			// 
			// labelCategories
			// 
			this->labelCategories->AutoSize = true;
			this->labelCategories->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCategories->Location = System::Drawing::Point(12, 66);
			this->labelCategories->Name = L"labelCategories";
			this->labelCategories->Size = System::Drawing::Size(270, 19);
			this->labelCategories->TabIndex = 9;
			this->labelCategories->Text = L"Aucune catégorie sélectionnée";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(288, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(815, 266);
			this->dataGridView1->TabIndex = 10;
			// 
			// panelPersonnel
			// 
			this->panelPersonnel->Controls->Add(this->label5);
			this->panelPersonnel->Controls->Add(this->textBoxPersonnelPrenom);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelRechercher);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelSupprimer);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelModifier);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelAjouter);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelNom);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelID);
			this->panelPersonnel->Controls->Add(this->label2);
			this->panelPersonnel->Controls->Add(this->label3);
			this->panelPersonnel->Location = System::Drawing::Point(15, 110);
			this->panelPersonnel->Name = L"panelPersonnel";
			this->panelPersonnel->Size = System::Drawing::Size(263, 222);
			this->panelPersonnel->TabIndex = 11;
			this->panelPersonnel->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-1, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 19);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Prénom";
			// 
			// textBoxPersonnelPrenom
			// 
			this->textBoxPersonnelPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPersonnelPrenom->Location = System::Drawing::Point(81, 87);
			this->textBoxPersonnelPrenom->Name = L"textBoxPersonnelPrenom";
			this->textBoxPersonnelPrenom->Size = System::Drawing::Size(179, 25);
			this->textBoxPersonnelPrenom->TabIndex = 14;
			// 
			// buttonPersonnelRechercher
			// 
			this->buttonPersonnelRechercher->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelRechercher->Location = System::Drawing::Point(164, 130);
			this->buttonPersonnelRechercher->Name = L"buttonPersonnelRechercher";
			this->buttonPersonnelRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonPersonnelRechercher->TabIndex = 13;
			this->buttonPersonnelRechercher->Text = L"Rechercher";
			this->buttonPersonnelRechercher->UseVisualStyleBackColor = true;
			this->buttonPersonnelRechercher->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelRechercher_Click);
			// 
			// buttonPersonnelSupprimer
			// 
			this->buttonPersonnelSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelSupprimer->Location = System::Drawing::Point(171, 187);
			this->buttonPersonnelSupprimer->Name = L"buttonPersonnelSupprimer";
			this->buttonPersonnelSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonPersonnelSupprimer->TabIndex = 12;
			this->buttonPersonnelSupprimer->Text = L"Supprimer";
			this->buttonPersonnelSupprimer->UseVisualStyleBackColor = true;
			this->buttonPersonnelSupprimer->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelSupprimer_Click);
			// 
			// buttonPersonnelModifier
			// 
			this->buttonPersonnelModifier->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelModifier->Location = System::Drawing::Point(84, 187);
			this->buttonPersonnelModifier->Name = L"buttonPersonnelModifier";
			this->buttonPersonnelModifier->Size = System::Drawing::Size(81, 27);
			this->buttonPersonnelModifier->TabIndex = 11;
			this->buttonPersonnelModifier->Text = L"Modifier";
			this->buttonPersonnelModifier->UseVisualStyleBackColor = true;
			this->buttonPersonnelModifier->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelModifier_Click);
			// 
			// buttonPersonnelAjouter
			// 
			this->buttonPersonnelAjouter->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelAjouter->Location = System::Drawing::Point(6, 187);
			this->buttonPersonnelAjouter->Name = L"buttonPersonnelAjouter";
			this->buttonPersonnelAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonPersonnelAjouter->TabIndex = 10;
			this->buttonPersonnelAjouter->Text = L"Ajouter";
			this->buttonPersonnelAjouter->UseVisualStyleBackColor = true;
			this->buttonPersonnelAjouter->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelAjouter_Click);
			// 
			// textboxPersonnelNom
			// 
			this->textboxPersonnelNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelNom->Location = System::Drawing::Point(81, 47);
			this->textboxPersonnelNom->Name = L"textboxPersonnelNom";
			this->textboxPersonnelNom->Size = System::Drawing::Size(179, 25);
			this->textboxPersonnelNom->TabIndex = 6;
			// 
			// textboxPersonnelID
			// 
			this->textboxPersonnelID->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelID->Location = System::Drawing::Point(81, 9);
			this->textboxPersonnelID->Name = L"textboxPersonnelID";
			this->textboxPersonnelID->Size = System::Drawing::Size(179, 25);
			this->textboxPersonnelID->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-1, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"ID";
			// 
			// panelClients
			// 
			this->panelClients->Controls->Add(this->buttonClientsRechercher);
			this->panelClients->Controls->Add(this->buttonClientsSupprimer);
			this->panelClients->Controls->Add(this->buttonClientsModifier);
			this->panelClients->Controls->Add(this->buttonClientsAjouter);
			this->panelClients->Controls->Add(this->textboxClientsPrenom);
			this->panelClients->Controls->Add(this->textboxClientsNom);
			this->panelClients->Controls->Add(this->textboxClientsNumero);
			this->panelClients->Controls->Add(this->label9);
			this->panelClients->Controls->Add(this->label10);
			this->panelClients->Controls->Add(this->label11);
			this->panelClients->Location = System::Drawing::Point(15, 110);
			this->panelClients->Name = L"panelClients";
			this->panelClients->Size = System::Drawing::Size(263, 222);
			this->panelClients->TabIndex = 13;
			this->panelClients->Visible = false;
			// 
			// buttonClientsRechercher
			// 
			this->buttonClientsRechercher->FlatAppearance->BorderSize = 0;
			this->buttonClientsRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsRechercher->Location = System::Drawing::Point(164, 130);
			this->buttonClientsRechercher->Name = L"buttonClientsRechercher";
			this->buttonClientsRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonClientsRechercher->TabIndex = 17;
			this->buttonClientsRechercher->Text = L"Rechercher";
			this->buttonClientsRechercher->UseVisualStyleBackColor = true;
			this->buttonClientsRechercher->Click += gcnew System::EventHandler(this, &MainForm::buttonClientsRechercher_Click);
			// 
			// buttonClientsSupprimer
			// 
			this->buttonClientsSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonClientsSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsSupprimer->Location = System::Drawing::Point(168, 187);
			this->buttonClientsSupprimer->Name = L"buttonClientsSupprimer";
			this->buttonClientsSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonClientsSupprimer->TabIndex = 12;
			this->buttonClientsSupprimer->Text = L"Supprimer";
			this->buttonClientsSupprimer->UseVisualStyleBackColor = true;
			this->buttonClientsSupprimer->Click += gcnew System::EventHandler(this, &MainForm::buttonClientsSupprimer_Click);
			// 
			// buttonClientsModifier
			// 
			this->buttonClientsModifier->FlatAppearance->BorderSize = 0;
			this->buttonClientsModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsModifier->Location = System::Drawing::Point(81, 187);
			this->buttonClientsModifier->Name = L"buttonClientsModifier";
			this->buttonClientsModifier->Size = System::Drawing::Size(81, 27);
			this->buttonClientsModifier->TabIndex = 11;
			this->buttonClientsModifier->Text = L"Modifier";
			this->buttonClientsModifier->UseVisualStyleBackColor = true;
			this->buttonClientsModifier->Click += gcnew System::EventHandler(this, &MainForm::buttonClientsModifier_Click);
			// 
			// buttonClientsAjouter
			// 
			this->buttonClientsAjouter->FlatAppearance->BorderSize = 0;
			this->buttonClientsAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsAjouter->Location = System::Drawing::Point(3, 187);
			this->buttonClientsAjouter->Name = L"buttonClientsAjouter";
			this->buttonClientsAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonClientsAjouter->TabIndex = 10;
			this->buttonClientsAjouter->Text = L"Ajouter";
			this->buttonClientsAjouter->UseVisualStyleBackColor = true;
			this->buttonClientsAjouter->Click += gcnew System::EventHandler(this, &MainForm::buttonClientsAjouter_Click);
			// 
			// textboxClientsPrenom
			// 
			this->textboxClientsPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsPrenom->Location = System::Drawing::Point(81, 90);
			this->textboxClientsPrenom->Name = L"textboxClientsPrenom";
			this->textboxClientsPrenom->Size = System::Drawing::Size(179, 25);
			this->textboxClientsPrenom->TabIndex = 7;
			// 
			// textboxClientsNom
			// 
			this->textboxClientsNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNom->Location = System::Drawing::Point(81, 47);
			this->textboxClientsNom->Name = L"textboxClientsNom";
			this->textboxClientsNom->Size = System::Drawing::Size(179, 25);
			this->textboxClientsNom->TabIndex = 6;
			// 
			// textboxClientsNumero
			// 
			this->textboxClientsNumero->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNumero->Location = System::Drawing::Point(81, 9);
			this->textboxClientsNumero->Name = L"textboxClientsNumero";
			this->textboxClientsNumero->Size = System::Drawing::Size(179, 25);
			this->textboxClientsNumero->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(-1, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 19);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Prénom";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(-1, 49);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Nom";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(-1, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 19);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Numéro";
			// 
			// panelCommandes
			// 
			this->panelCommandes->Controls->Add(this->label6);
			this->panelCommandes->Controls->Add(this->textBoxCommandesRef);
			this->panelCommandes->Controls->Add(this->buttonCommandesRechercher);
			this->panelCommandes->Controls->Add(this->buttonCommandesSupprimer);
			this->panelCommandes->Controls->Add(this->buttonCommandesModifier);
			this->panelCommandes->Controls->Add(this->buttonCommandesAjouter);
			this->panelCommandes->Controls->Add(this->textBoxCommandesID);
			this->panelCommandes->Controls->Add(this->label20);
			this->panelCommandes->Location = System::Drawing::Point(15, 110);
			this->panelCommandes->Name = L"panelCommandes";
			this->panelCommandes->Size = System::Drawing::Size(263, 185);
			this->panelCommandes->TabIndex = 17;
			this->panelCommandes->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-1, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 19);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Référence";
			// 
			// textBoxCommandesRef
			// 
			this->textBoxCommandesRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesRef->Location = System::Drawing::Point(95, 49);
			this->textBoxCommandesRef->Name = L"textBoxCommandesRef";
			this->textBoxCommandesRef->Size = System::Drawing::Size(165, 25);
			this->textBoxCommandesRef->TabIndex = 28;
			// 
			// buttonCommandesRechercher
			// 
			this->buttonCommandesRechercher->FlatAppearance->BorderSize = 0;
			this->buttonCommandesRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesRechercher->Location = System::Drawing::Point(164, 102);
			this->buttonCommandesRechercher->Name = L"buttonCommandesRechercher";
			this->buttonCommandesRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonCommandesRechercher->TabIndex = 27;
			this->buttonCommandesRechercher->Text = L"Rechercher";
			this->buttonCommandesRechercher->UseVisualStyleBackColor = true;
			this->buttonCommandesRechercher->Click += gcnew System::EventHandler(this, &MainForm::buttonCommandesRechercher_Click);
			// 
			// buttonCommandesSupprimer
			// 
			this->buttonCommandesSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonCommandesSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesSupprimer->Location = System::Drawing::Point(171, 151);
			this->buttonCommandesSupprimer->Name = L"buttonCommandesSupprimer";
			this->buttonCommandesSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonCommandesSupprimer->TabIndex = 12;
			this->buttonCommandesSupprimer->Text = L"Supprimer";
			this->buttonCommandesSupprimer->UseVisualStyleBackColor = true;
			this->buttonCommandesSupprimer->Click += gcnew System::EventHandler(this, &MainForm::buttonCommandesSupprimer_Click);
			// 
			// buttonCommandesModifier
			// 
			this->buttonCommandesModifier->FlatAppearance->BorderSize = 0;
			this->buttonCommandesModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesModifier->Location = System::Drawing::Point(84, 151);
			this->buttonCommandesModifier->Name = L"buttonCommandesModifier";
			this->buttonCommandesModifier->Size = System::Drawing::Size(81, 27);
			this->buttonCommandesModifier->TabIndex = 11;
			this->buttonCommandesModifier->Text = L"Modifier";
			this->buttonCommandesModifier->UseVisualStyleBackColor = true;
			this->buttonCommandesModifier->Click += gcnew System::EventHandler(this, &MainForm::buttonCommandesModifier_Click);
			// 
			// buttonCommandesAjouter
			// 
			this->buttonCommandesAjouter->FlatAppearance->BorderSize = 0;
			this->buttonCommandesAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesAjouter->Location = System::Drawing::Point(6, 151);
			this->buttonCommandesAjouter->Name = L"buttonCommandesAjouter";
			this->buttonCommandesAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonCommandesAjouter->TabIndex = 10;
			this->buttonCommandesAjouter->Text = L"Ajouter";
			this->buttonCommandesAjouter->UseVisualStyleBackColor = true;
			this->buttonCommandesAjouter->Click += gcnew System::EventHandler(this, &MainForm::buttonCommandesAjouter_Click);
			// 
			// textBoxCommandesID
			// 
			this->textBoxCommandesID->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesID->Location = System::Drawing::Point(95, 9);
			this->textBoxCommandesID->Name = L"textBoxCommandesID";
			this->textBoxCommandesID->Size = System::Drawing::Size(165, 25);
			this->textBoxCommandesID->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(-1, 11);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 19);
			this->label20->TabIndex = 0;
			this->label20->Text = L"ID";
			// 
			// panelStock
			// 
			this->panelStock->Controls->Add(this->label4);
			this->panelStock->Controls->Add(this->textBoxStockNom);
			this->panelStock->Controls->Add(this->buttonStockRechercher);
			this->panelStock->Controls->Add(this->buttonStockSupprimer);
			this->panelStock->Controls->Add(this->buttonStockModifier);
			this->panelStock->Controls->Add(this->buttonStockAjouter);
			this->panelStock->Controls->Add(this->textBoxStockRef);
			this->panelStock->Controls->Add(this->label37);
			this->panelStock->Location = System::Drawing::Point(15, 110);
			this->panelStock->Name = L"panelStock";
			this->panelStock->Size = System::Drawing::Size(263, 185);
			this->panelStock->TabIndex = 27;
			this->panelStock->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-1, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 19);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Nom";
			// 
			// textBoxStockNom
			// 
			this->textBoxStockNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockNom->Location = System::Drawing::Point(95, 49);
			this->textBoxStockNom->Name = L"textBoxStockNom";
			this->textBoxStockNom->Size = System::Drawing::Size(165, 25);
			this->textBoxStockNom->TabIndex = 18;
			// 
			// buttonStockRechercher
			// 
			this->buttonStockRechercher->FlatAppearance->BorderSize = 0;
			this->buttonStockRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockRechercher->Location = System::Drawing::Point(164, 89);
			this->buttonStockRechercher->Name = L"buttonStockRechercher";
			this->buttonStockRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonStockRechercher->TabIndex = 17;
			this->buttonStockRechercher->Text = L"Rechercher";
			this->buttonStockRechercher->UseVisualStyleBackColor = true;
			this->buttonStockRechercher->Click += gcnew System::EventHandler(this, &MainForm::buttonStockRechercher_Click);
			// 
			// buttonStockSupprimer
			// 
			this->buttonStockSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonStockSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockSupprimer->Location = System::Drawing::Point(168, 151);
			this->buttonStockSupprimer->Name = L"buttonStockSupprimer";
			this->buttonStockSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonStockSupprimer->TabIndex = 12;
			this->buttonStockSupprimer->Text = L"Supprimer";
			this->buttonStockSupprimer->UseVisualStyleBackColor = true;
			this->buttonStockSupprimer->Click += gcnew System::EventHandler(this, &MainForm::buttonStockSupprimer_Click);
			// 
			// buttonStockModifier
			// 
			this->buttonStockModifier->FlatAppearance->BorderSize = 0;
			this->buttonStockModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockModifier->Location = System::Drawing::Point(81, 151);
			this->buttonStockModifier->Name = L"buttonStockModifier";
			this->buttonStockModifier->Size = System::Drawing::Size(81, 27);
			this->buttonStockModifier->TabIndex = 11;
			this->buttonStockModifier->Text = L"Modifier";
			this->buttonStockModifier->UseVisualStyleBackColor = true;
			this->buttonStockModifier->Click += gcnew System::EventHandler(this, &MainForm::buttonStockModifier_Click);
			// 
			// buttonStockAjouter
			// 
			this->buttonStockAjouter->FlatAppearance->BorderSize = 0;
			this->buttonStockAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockAjouter->Location = System::Drawing::Point(3, 151);
			this->buttonStockAjouter->Name = L"buttonStockAjouter";
			this->buttonStockAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonStockAjouter->TabIndex = 10;
			this->buttonStockAjouter->Text = L"Ajouter";
			this->buttonStockAjouter->UseVisualStyleBackColor = true;
			this->buttonStockAjouter->Click += gcnew System::EventHandler(this, &MainForm::buttonStockAjouter_Click);
			// 
			// textBoxStockRef
			// 
			this->textBoxStockRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockRef->Location = System::Drawing::Point(95, 9);
			this->textBoxStockRef->Name = L"textBoxStockRef";
			this->textBoxStockRef->Size = System::Drawing::Size(165, 25);
			this->textBoxStockRef->TabIndex = 5;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(-1, 11);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(90, 19);
			this->label37->TabIndex = 0;
			this->label37->Text = L"Référence";
			// 
			// panelStatistiques
			// 
			this->panelStatistiques->Controls->Add(this->buttonStatMoinsVendus);
			this->panelStatistiques->Controls->Add(this->buttonStatPanierMoy);
			this->panelStatistiques->Controls->Add(this->buttonStatProdReapro);
			this->panelStatistiques->Controls->Add(this->buttonStatValeurAchatStock);
			this->panelStatistiques->Controls->Add(this->buttonStatPlusVendus);
			this->panelStatistiques->Location = System::Drawing::Point(15, 110);
			this->panelStatistiques->Name = L"panelStatistiques";
			this->panelStatistiques->Size = System::Drawing::Size(263, 178);
			this->panelStatistiques->TabIndex = 28;
			this->panelStatistiques->Visible = false;
			// 
			// buttonStatMoinsVendus
			// 
			this->buttonStatMoinsVendus->FlatAppearance->BorderSize = 0;
			this->buttonStatMoinsVendus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatMoinsVendus->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatMoinsVendus->Location = System::Drawing::Point(3, 135);
			this->buttonStatMoinsVendus->Name = L"buttonStatMoinsVendus";
			this->buttonStatMoinsVendus->Size = System::Drawing::Size(208, 27);
			this->buttonStatMoinsVendus->TabIndex = 15;
			this->buttonStatMoinsVendus->Text = L"Top 10 moins vendus";
			this->buttonStatMoinsVendus->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonStatMoinsVendus->UseVisualStyleBackColor = true;
			this->buttonStatMoinsVendus->Click += gcnew System::EventHandler(this, &MainForm::buttonStatMoinsVendus_Click);
			// 
			// buttonStatPanierMoy
			// 
			this->buttonStatPanierMoy->FlatAppearance->BorderSize = 0;
			this->buttonStatPanierMoy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatPanierMoy->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatPanierMoy->Location = System::Drawing::Point(3, 3);
			this->buttonStatPanierMoy->Name = L"buttonStatPanierMoy";
			this->buttonStatPanierMoy->Size = System::Drawing::Size(112, 27);
			this->buttonStatPanierMoy->TabIndex = 14;
			this->buttonStatPanierMoy->Text = L"Panier moyen";
			this->buttonStatPanierMoy->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonStatPanierMoy->UseVisualStyleBackColor = true;
			this->buttonStatPanierMoy->Click += gcnew System::EventHandler(this, &MainForm::buttonStatPanierMoy_Click);
			// 
			// buttonStatProdReapro
			// 
			this->buttonStatProdReapro->FlatAppearance->BorderSize = 0;
			this->buttonStatProdReapro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatProdReapro->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatProdReapro->Location = System::Drawing::Point(3, 36);
			this->buttonStatProdReapro->Name = L"buttonStatProdReapro";
			this->buttonStatProdReapro->Size = System::Drawing::Size(137, 27);
			this->buttonStatProdReapro->TabIndex = 13;
			this->buttonStatProdReapro->Text = L"Produits réapro";
			this->buttonStatProdReapro->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonStatProdReapro->UseVisualStyleBackColor = true;
			this->buttonStatProdReapro->Click += gcnew System::EventHandler(this, &MainForm::buttonStatProdReapro_Click);
			// 
			// buttonStatValeurAchatStock
			// 
			this->buttonStatValeurAchatStock->FlatAppearance->BorderSize = 0;
			this->buttonStatValeurAchatStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatValeurAchatStock->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatValeurAchatStock->Location = System::Drawing::Point(3, 69);
			this->buttonStatValeurAchatStock->Name = L"buttonStatValeurAchatStock";
			this->buttonStatValeurAchatStock->Size = System::Drawing::Size(208, 27);
			this->buttonStatValeurAchatStock->TabIndex = 11;
			this->buttonStatValeurAchatStock->Text = L"Valeur d\'achat du stock";
			this->buttonStatValeurAchatStock->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonStatValeurAchatStock->UseVisualStyleBackColor = true;
			this->buttonStatValeurAchatStock->Click += gcnew System::EventHandler(this, &MainForm::buttonStatValeurAchatStock_Click);
			// 
			// buttonStatPlusVendus
			// 
			this->buttonStatPlusVendus->FlatAppearance->BorderSize = 0;
			this->buttonStatPlusVendus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatPlusVendus->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatPlusVendus->Location = System::Drawing::Point(6, 102);
			this->buttonStatPlusVendus->Name = L"buttonStatPlusVendus";
			this->buttonStatPlusVendus->Size = System::Drawing::Size(161, 27);
			this->buttonStatPlusVendus->TabIndex = 10;
			this->buttonStatPlusVendus->Text = L"Top 10 plus vendus";
			this->buttonStatPlusVendus->UseVisualStyleBackColor = true;
			this->buttonStatPlusVendus->Click += gcnew System::EventHandler(this, &MainForm::buttonStatPlusVendus_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 341);
			this->Controls->Add(this->panelStatistiques);
			this->Controls->Add(this->panelStock);
			this->Controls->Add(this->panelCommandes);
			this->Controls->Add(this->panelClients);
			this->Controls->Add(this->panelPersonnel);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelCategories);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonStatistiques);
			this->Controls->Add(this->buttonStock);
			this->Controls->Add(this->buttonCommandes);
			this->Controls->Add(this->buttonClients);
			this->Controls->Add(this->buttonPersonnel);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panelPersonnel->ResumeLayout(false);
			this->panelPersonnel->PerformLayout();
			this->panelClients->ResumeLayout(false);
			this->panelClients->PerformLayout();
			this->panelCommandes->ResumeLayout(false);
			this->panelCommandes->PerformLayout();
			this->panelStock->ResumeLayout(false);
			this->panelStock->PerformLayout();
			this->panelStatistiques->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// ========================================================================================================================================
// =================================================      PERSONNEL      ==================================================================
// ========================================================================================================================================


// -------------------------------------------------   bouton Principal   -----------------------------------------------------------------

	private: System::Void buttonPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Personnel";
		panelPersonnel->Visible = true;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
		panelStatistiques->Visible = false;

		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_PERSONNEL as 'ID Personnel', PERNOM as Nom, PERPRENOM as 'Prénom', ADRESSE as Adresse, DATE as 'Date Embauche', ID_SUPERIEUR as 'ID Supérieur' FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

// -------------------------------------------------   bouton Rechercher  -----------------------------------------------------------------

	private: System::Void buttonPersonnelRechercher_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ PersonnelID = textboxPersonnelID->Text;

		if (PersonnelID != "") {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_PERSONNEL as 'ID Personnel', PERNOM as Nom, PERPRENOM as 'Prénom', ID_SUPERIEUR as 'ID Supérieur', ADRESSE as Adresse, DATE as 'Date Embauche' FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.ID_PERSONNEL='" + PersonnelID + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else if (textboxPersonnelNom->Text == "" && textBoxPersonnelPrenom->Text == "") {

			MessageBox::Show("Entrez un ID ou le Nom et/ou le Prénom");
		}
		else if (textboxPersonnelNom->Text == "") {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_PERSONNEL as 'ID Personnel', PERNOM as Nom, PERPRENOM as 'Prénom', ID_SUPERIEUR as 'ID Supérieur', ADRESSE as Adresse, DATE as 'Date Embauche' FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.PERPRENOM='" + textBoxPersonnelPrenom->Text + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

		}
		else if (textBoxPersonnelPrenom->Text == "") {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_PERSONNEL as 'ID Personnel', PERNOM as Nom, PERPRENOM as 'Prénom', ID_SUPERIEUR as 'ID Supérieur', ADRESSE as Adresse, DATE as 'Date Embauche' FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.PERNOM='" + textboxPersonnelNom->Text + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_PERSONNEL as 'ID Personnel', PERNOM as Nom, PERPRENOM as 'Prénom', ID_SUPERIEUR as 'ID Supérieur', ADRESSE as Adresse, DATE as 'Date Embauche' FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.PERNOM='" + textboxPersonnelNom->Text + "' AND PERSONNEL.PERPRENOM='" + textBoxPersonnelPrenom->Text + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}

// -------------------------------------------------    bouton Ajouter    -----------------------------------------------------------------

	private: System::Void buttonPersonnelAjouter_Click(System:: Object ^ sender, System::EventArgs^ e) {

		PersonnelAjouterForm^ pa = gcnew PersonnelAjouterForm();
		pa->ShowDialog();
	}

// -------------------------------------------------   bouton Modifier    -----------------------------------------------------------------

	private: System::Void buttonPersonnelModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ PersonnelID = textboxPersonnelID->Text;

		if (PersonnelID != "")
		{
			PersonnelModifierForm^ pm = gcnew PersonnelModifierForm(PersonnelID);
			pm->ShowDialog();
		}
		else
		{
			MessageBox::Show("Entrez l'ID du personnel à modifier", "Erreur");
		}
	}


// -------------------------------------------------   bouton Supprimer   -----------------------------------------------------------------

	private: System::Void buttonPersonnelSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ PersonnelID = textboxPersonnelID->Text;

		if (PersonnelID != "") {

			MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
			String^ message = "Voulez vous vraiment supprimer ce personnel ?";
			String^ title = "Confirmation";

			if (MessageBox::Show(message, title, buttons) == System::Windows::Forms::DialogResult::OK) {

				Personnel monPersonnel(PersonnelID);
				monPersonnel.Supprimer();
			}
		}
		else {

			MessageBox::Show("Entrez l'ID du personnel à supprimer", "Erreur");
		}
			
	}
	




// ==========================================================================================================================================
// ================================================       CLIENTS       =====================================================================
// ==========================================================================================================================================


// ------------------------------------------------   bouton Principal   --------------------------------------------------------------------

	private: System::Void buttonClients_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Clients";
		panelPersonnel->Visible = false;
		panelClients->Visible = true;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
		panelStatistiques->Visible = false;

		try
		{
			String^ requete = "SELECT ID_CLIENT as 'n° client', CLINOM as Nom, CLIPRENOM as 'Prénom', tmp.DATE as Date1erlivr, tmp2.DATE as 'Date naissance' FROM CLIENT, DATE as tmp, DATE as tmp2 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATEN";
			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(requete, con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


// -------------------------------------------------   bouton Rechercher  -----------------------------------------------------------------

	private: System::Void buttonClientsRechercher_Click(System::Object^ sender, System::EventArgs^ e) {

		
		String^ ClientsNumero = textboxClientsNumero->Text;

		if (ClientsNumero != "") {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_CLIENT as 'n° client', CLINOM as Nom, CLIPRENOM as 'Prénom', tmp.DATE as Date1erlivr, tmp2.DATE as 'Date naissance' FROM CLIENT, DATE as tmp, DATE as tmp2 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATEN AND CLIENT.ID_CLIENT='" + ClientsNumero + "'", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else if (textboxClientsNom->Text == "" && textboxClientsPrenom->Text == "") {

			MessageBox::Show("Entrez un numéro ou le Nom et/ou le Prénom");
		}
		else if (textboxClientsNom->Text == "") {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_CLIENT as 'n° client', CLINOM as Nom, CLIPRENOM as 'Prénom', tmp.DATE as Date1erlivr, tmp2.DATE as 'Date naissance' FROM CLIENT, DATE as tmp, DATE as tmp2 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATEN AND CLIENT.CLIPRENOM='" + textboxClientsPrenom->Text + "'", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

		}
		else if (textboxClientsPrenom->Text == "") {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_CLIENT as 'n° client', CLINOM as Nom, CLIPRENOM as 'Prénom', tmp.DATE as Date1erlivr, tmp2.DATE as 'Date naissance' FROM CLIENT, DATE as tmp, DATE as tmp2 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATEN AND CLIENT.CLINOM='" + textboxClientsNom->Text + "'", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else {

			try
			{
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_CLIENT as 'n° client', CLINOM as Nom, CLIPRENOM as 'Prénom', tmp.DATE as Date1erlivr, tmp2.DATE as 'Date naissance' FROM CLIENT, DATE as tmp, DATE as tmp2 WHERE tmp.ID_DATE=CLIENT.ID_DATE1ER AND tmp2.ID_DATE=CLIENT.ID_DATEN AND CLIENT.CLIPRENOM='" + textboxClientsPrenom->Text + "' AND CLIENT.CLINOM='" + textboxClientsNom->Text + "'", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		
	}


// -------------------------------------------------    bouton Ajouter    -----------------------------------------------------------------

	private: System::Void buttonClientsAjouter_Click(System::Object^ sender, System::EventArgs^ e) {

		ClientsAjouterForm^ ca = gcnew ClientsAjouterForm();
		ca->ShowDialog();
	}


// -------------------------------------------------   bouton Modifier    -----------------------------------------------------------------

	private: System::Void buttonClientsModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ ClientsNum = textboxClientsNumero->Text;
		
		if (ClientsNum != "")
		{
			ClientsModifierForm^ pm = gcnew ClientsModifierForm(ClientsNum);
			pm->ShowDialog();
		}
		else
		{
			MessageBox::Show("Entrez le numéro du client à modifier", "Erreur");
		}
	}


// -------------------------------------------------   bouton Supprimer   -----------------------------------------------------------------

	private: System::Void buttonClientsSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ ClientsNum = textboxClientsNumero->Text;

		if (ClientsNum != "") {

			MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
			String^ message = "Voulez vous vraiment supprimer ce client ?";
			String^ title = "Confirmation";

			if (MessageBox::Show(message, title, buttons) == System::Windows::Forms::DialogResult::OK) {

				Client monClient(ClientsNum);
				monClient.Supprimer();
			}
		}
		else {

			MessageBox::Show("Entrez le numéro du client à supprimer", "Erreur");
		}

	}




// ==========================================================================================================================================
// ================================================      COMMANDES     ======================================================================
// ==========================================================================================================================================


// -----------------------------------------------   bouton Principal   ---------------------------------------------------------------------

	private: System::Void buttonCommandes_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Commandes";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = true;
		panelStock->Visible = false;
		panelStatistiques->Visible = false;

		try
		{
			String^ requete = "SELECT ID_COMMANDE as 'N° commande', COMREF as 'Référence', tmp.DATE as 'Date émission', tmp2.DATE as 'Date livraison', tmp3.DATE as 'Date règlement', MOYPAI as 'Moyen de paiement', COMMANDE.ID_CLIENT as 'n° client', ARTNOM as Article, QUANTART as 'Quantité', COMTOTALHT as 'Total HT', COMTOTALTVA as 'Total TVA', COMREMISE as 'Remise appliquée', COMTOTALTTC as 'Total TTC'FROM MOYEN_DE_PAIEMENT, COMMANDE, CLIENT, DATE as tmp, DATE as tmp2, DATE as tmp3, ARTICLE WHERE COMMANDE.ID_DATEEMIS=tmp.ID_DATE AND COMMANDE.ID_DATELIVR=tmp2.ID_DATE AND COMMANDE.ID_DATEREG=tmp3.ID_DATE AND ARTICLE.ID_ARTICLE=COMMANDE.ID_ARTICLE AND COMMANDE.ID_MOYPAIE=MOYEN_DE_PAIEMENT.ID_MOYPAIE GROUP BY ID_COMMANDE";
			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(requete, con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


// -------------------------------------------------    bouton Ajouter    -----------------------------------------------------------------

	private: System::Void buttonCommandesAjouter_Click(System::Object^ sender, System::EventArgs^ e) {

		CommandeAjouterForm^ coa = gcnew CommandeAjouterForm();
		coa->ShowDialog();
	}


// -------------------------------------------------   bouton Rechercher  -----------------------------------------------------------------

	private: System::Void buttonCommandesRechercher_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (textBoxCommandesID->Text == "" && textBoxCommandesRef->Text == "") {

			MessageBox::Show("Entrez un ID ou une référence");
		}
		else if (textBoxCommandesID->Text != "") {

			try
			{
				String^ requete = "SELECT ID_COMMANDE as 'N° commande', COMREF as 'Référence', tmp.DATE as 'Date émission', tmp2.DATE as 'Date livraison', tmp3.DATE as 'Date règlement', COMMANDE.ID_CLIENT as 'n° client', ARTNOM as Article, QUANTART as 'Quantité', COMTOTALHT as 'Total HT', COMTOTALTVA as 'Total TVA', COMREMISE as 'Remise appliquée', COMTOTALTTC as 'Total TTC'FROM COMMANDE, CLIENT, DATE as tmp, DATE as tmp2, DATE as tmp3, ARTICLE WHERE COMMANDE.ID_COMMANDE='" + textBoxCommandesID->Text + "' AND COMMANDE.ID_DATEEMIS=tmp.ID_DATE AND COMMANDE.ID_DATELIVR=tmp2.ID_DATE AND COMMANDE.ID_DATEREG=tmp3.ID_DATE AND ARTICLE.ID_ARTICLE=COMMANDE.ID_ARTICLE GROUP BY ID_COMMANDE";
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(requete, con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else {

			try
			{
				String^ requete = "SELECT ID_COMMANDE as 'N° commande', COMREF as 'Référence', tmp.DATE as 'Date émission', tmp2.DATE as 'Date livraison', tmp3.DATE as 'Date règlement', COMMANDE.ID_CLIENT as 'n° client', ARTNOM as Article, QUANTART as 'Quantité', COMTOTALHT as 'Total HT', COMTOTALTVA as 'Total TVA', COMREMISE as 'Remise appliquée', COMTOTALTTC as 'Total TTC'FROM COMMANDE, CLIENT, DATE as tmp, DATE as tmp2, DATE as tmp3, ARTICLE WHERE COMMANDE.COMREF='" + textBoxCommandesRef->Text + "' AND COMMANDE.ID_DATEEMIS=tmp.ID_DATE AND COMMANDE.ID_DATELIVR=tmp2.ID_DATE AND COMMANDE.ID_DATEREG=tmp3.ID_DATE AND ARTICLE.ID_ARTICLE=COMMANDE.ID_ARTICLE GROUP BY ID_COMMANDE";
				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(requete, con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			
		}
	}


// -------------------------------------------------   bouton Supprimer   -----------------------------------------------------------------

	private: System::Void buttonCommandesSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ IDCommande = textBoxCommandesID->Text;

		if (IDCommande != "") {

			MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
			String^ message = "Voulez vous vraiment supprimer cette commande ?";
			String^ title = "Confirmation";

			if (MessageBox::Show(message, title, buttons) == System::Windows::Forms::DialogResult::OK) {

				Commande maCommande(IDCommande);
				maCommande.Supprimer();
			}
		}
		else {

			MessageBox::Show("Entrez l'ID de la commande à supprimer", "Erreur");
		}

	}


// -------------------------------------------------   bouton Modifier    -----------------------------------------------------------------

	private: System::Void buttonCommandesModifier_Click(System::Object^ sender, System::EventArgs^ e) {
	
		String^ IDCommande = textBoxCommandesID->Text;

		if (IDCommande == "") {

			MessageBox::Show("Entrez l'ID d'une commande à modifier", "Erreur");
		}
		else {

			CommandeModifierForm^ cm = gcnew CommandeModifierForm(IDCommande);
			cm->ShowDialog();
		}
	}




// ==========================================================================================================================================
// ================================================       STOCK       =======================================================================
// ==========================================================================================================================================


// -----------------------------------------------   bouton Principal   ---------------------------------------------------------------------

	private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Stock";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = true;
		panelStatistiques->Visible = false;

		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_ARTICLE as 'Référence', ARTNOM 'Nom', NOMNAT as 'Nature', COULEUR as 'Couleur', ARTSTOCKT as Stock, ARTSEUIL as 'Seuil de réappro', ARTPRIXHT as 'Prix HT', ARTTVA as 'Taux TVA' FROM ARTICLE, NATURE, COULEUR WHERE NATURE.ID_NATURE=ARTICLE.ID_NATURE AND COULEUR.ID_COLOR=ARTICLE.ID_COLOR ", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}


		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


// -------------------------------------------------   bouton Supprimer   -----------------------------------------------------------------

	private: System::Void buttonStockSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	
		String^ IDArticle = textBoxStockRef->Text;

		if (IDArticle != "") {

			MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
			String^ message = "Voulez vous vraiment supprimer cet article ?";
			String^ title = "Confirmation";

			if (MessageBox::Show(message, title, buttons) == System::Windows::Forms::DialogResult::OK) {

				Stock monArticle(IDArticle);
				monArticle.Supprimer();
			}
		}
		else {

			MessageBox::Show("Entrez la référence de l'article à supprimer", "Erreur");
		}
	}


// -------------------------------------------------   bouton Modifier    -----------------------------------------------------------------

	private: System::Void buttonStockModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ IDArticle = textBoxStockRef->Text;

		if (IDArticle != "") {
		
			StockModifierForm^ sm = gcnew StockModifierForm(IDArticle);
			sm->ShowDialog();
		}
		else {

			MessageBox::Show("Entrez la référence de l'article à modifier", "Erreur");
		}
	}


// -------------------------------------------------    bouton Ajouter    -----------------------------------------------------------------

	private: System::Void buttonStockAjouter_Click(System::Object^ sender, System::EventArgs^ e) {

		StockAjouterForm^ sa = gcnew StockAjouterForm();
		sa->ShowDialog();
	}


// -------------------------------------------------   bouton Rechercher  -----------------------------------------------------------------

	private: System::Void buttonStockRechercher_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (textBoxStockRef->Text == "" && textBoxStockNom->Text == "") {

			MessageBox::Show("Entrez un ID ou une référence");
		}
		else if (textBoxStockRef->Text != "") {

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_ARTICLE as 'Référence', ARTNOM 'Nom', NOMNAT as 'Nature', COULEUR as 'Couleur', ARTSTOCKT as Stock, ARTSEUIL as 'Seuil de réappro', ARTPRIXHT as 'Prix HT', ARTTVA as 'Taux TVA' FROM ARTICLE, NATURE, COULEUR WHERE ARTICLE.ID_ARTICLE='" + textBoxStockRef->Text + "' AND NATURE.ID_NATURE=ARTICLE.ID_NATURE AND COULEUR.ID_COLOR=ARTICLE.ID_COLOR ", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}


			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else {

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ID_ARTICLE as 'Référence', ARTNOM 'Nom', NOMNAT as 'Nature', COULEUR as 'Couleur', ARTSTOCKT as Stock, ARTSEUIL as 'Seuil de réappro', ARTPRIXHT as 'Prix HT', ARTTVA as 'Taux TVA' FROM ARTICLE, NATURE, COULEUR WHERE ARTICLE.ARTNOM='" + textBoxStockNom->Text + "' AND NATURE.ID_NATURE=ARTICLE.ID_NATURE AND COULEUR.ID_COLOR=ARTICLE.ID_COLOR ", con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}




// ==========================================================================================================================================
// ================================================       STATISTIQUES       ================================================================
// ==========================================================================================================================================


// -----------------------------------------------   bouton Principal   ---------------------------------------------------------------------

	private: System::Void buttonStatistiques_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Statistiques";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
		panelStatistiques->Visible = true;

		try
		{
			DataTable^ dt = gcnew DataTable();
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


// -----------------------------------------------    Panier moyen    ----------------------------------------------------------------------

	private: System::Void buttonStatPanierMoy_Click(System::Object^ sender, System::EventArgs^ e) {
	
		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT AVG(COMTOTALTTC) as 'Panier moyen' FROM COMMANDE", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	
// -------------------------------------------    Produits seuil réapro    -----------------------------------------------------------------

	private: System::Void buttonStatProdReapro_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ARTNOM as Article, ARTSTOCKT as Stock FROM ARTICLE WHERE ARTSTOCKT<ARTSEUIL", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


// ------------------------------------------    Valeur d'achat du stock    ----------------------------------------------------------------

	private: System::Void buttonStatValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
	
		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT SUM((ARTPRIXHT+ARTPRIXHT*ARTTVA)*ARTSTOCKT) AS 'Valeur achat' FROM ARTICLE", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


// -------------------------------------    top 10 des Produits les plus vendus    ---------------------------------------------------------

	private: System::Void buttonStatPlusVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	
		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ARTNOM as Article, SUM(QUANTART) as 'Nombres de ventes' FROM COMMANDE, ARTICLE WHERE ARTICLE.ID_ARTICLE=COMMANDE.ID_ARTICLE GROUP BY ARTICLE ORDER BY SUM(QUANTART) DESC LIMIT 10", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}



// -------------------------------------    top 10 des Produits les moins vendus    ---------------------------------------------------------

	private: System::Void buttonStatMoinsVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
		try {

			String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT ARTNOM as Article, SUM(QUANTART) as 'Nombres de ventes' FROM COMMANDE, ARTICLE WHERE ARTICLE.ID_ARTICLE=COMMANDE.ID_ARTICLE GROUP BY ARTICLE ORDER BY SUM(QUANTART) LIMIT 10", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
