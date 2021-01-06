#include "ClassCat.h"

using namespace std;
using namespace System;
using namespace System::Globalization;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

namespace ClassCat {

	Categorie::Categorie() {

		adrBDD = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST3 groupe 3";
		con = gcnew MySqlConnection(adrBDD);

	}




	// ====================================================================================================================================
	// ======================================================       PERSONNEL       =======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Personnel::Personnel(String^ ID) {

		Categorie();
		p_ID = ID;
	}

	Personnel::Personnel(String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date) {

		Categorie();
		p_nom = nom;
		p_prenom = prenom;
		p_superieur = superieur;
		p_adresse = adresse;
		p_date = date;
	}

	Personnel::Personnel(String^ id, String^ nom, String^ prenom, String^ superieur, String^ adresse, String^ date) {

		Categorie();
		p_ID = id;
		p_nom = nom;
		p_prenom = prenom;
		p_superieur = superieur;
		p_adresse = adresse;
		p_date = date;
	}


	// -------------------------------------------------------       Ajouter       --------------------------------------------------------

	void Personnel::Ajouter() {

		try
		{
			requete = "INSERT INTO DATE SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO PERSONNEL SELECT '', ADRESSE.ID_ADRESSE, DATE.ID_DATE, PERSONNEL.ID_PERSONNEL, '" + p_nom + "', '" + p_prenom + "' FROM DATE, PERSONNEL, ADRESSE WHERE ADRESSE = '" + p_adresse + "' AND DATE = '" + p_date + "' AND ID_PERSONNEL = '" + p_superieur + "' AND NOT EXISTS (SELECT * FROM PERSONNEL, ADRESSE, DATE WHERE ADRESSE = '" + p_adresse + "' AND ADRESSE.ID_ADRESSE = PERSONNEL.ID_ADRESSE AND DATE = '" + p_date + "' AND DATE.ID_DATE = PERSONNEL.ID_DATE AND ID_SUPERIEUR = '" + p_superieur + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------       Modifier       -------------------------------------------------------

	void Personnel::Modifier() {

		try
		{
			requete = "INSERT INTO DATE SELECT '','" + p_date + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + p_date + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + p_adresse + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + p_adresse + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "UPDATE PERSONNEL SET PERSONNEL.ID_ADRESSE=(SELECT ADRESSE.ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + p_adresse + "'), PERSONNEL.ID_DATE=(SELECT DATE.ID_DATE FROM DATE WHERE DATE.DATE='" + p_date + "'), PERSONNEL.ID_SUPERIEUR='" + p_superieur + "', PERNOM='" + p_nom + "', PERPRENOM='" + p_prenom + "' WHERE ID_PERSONNEL='" + p_ID + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

	void Personnel::Supprimer() {

		try
		{
			requete = "DELETE FROM PERSONNEL WHERE ID_PERSONNEL='" + p_ID + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}




	// ====================================================================================================================================
	// ======================================================        CLIENT        ========================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Client::Client(String^ num) {

		Categorie();
		c_num = num;
	}

	Client::Client(String^ num, String^ adr) {

		Categorie();
		c_num = num;
		c_adrFact2 = adr;
		c_adrLivr2 = adr;
	}

	Client::Client(String^ nom, String^ prenom, String^ adrFact, String^ adrLiv, String^ dateNaissance, String^ date1achat) {

		Categorie();
		c_nom = nom;
		c_prenom = prenom;
		c_adrFact1 = adrFact;
		c_adrLivr1 = adrLiv;
		c_dateNaissance = dateNaissance;
		c_date1achat = date1achat;
	}

	Client::Client(String^ num, String^ nom, String^ prenom, String^ adrFact, String^ adrFact2, String^ adrLiv, String^ adrLiv2, String^ dateNaissance, String^ date1achat) {

		Categorie();
		c_num = num;
		c_nom = nom;
		c_prenom = prenom;
		c_adrFact1 = adrFact;
		c_adrFact2 = adrFact2;
		c_adrLivr1 = adrLiv;
		c_adrLivr2 = adrLiv2;
		c_dateNaissance = dateNaissance;
		c_date1achat = date1achat;
	}


	// -------------------------------------------------------       Ajouter       --------------------------------------------------------

	void Client::Ajouter() {

		try
		{
			requete = "INSERT INTO DATE SELECT '','" + c_dateNaissance + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + c_dateNaissance + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO DATE SELECT '','" + c_date1achat + "' WHERE NOT EXISTS (SELECT * FROM DATE WHERE DATE='" + c_date1achat + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + c_adrFact1 + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + c_adrFact1 + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + c_adrLivr1 + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + c_adrLivr1 + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO CLIENT VALUES ('', (SELECT ID_DATE FROM DATE WHERE DATE = '" + c_dateNaissance + "'), (SELECT ID_DATE FROM DATE WHERE DATE = '" + c_date1achat + "'), '" + c_nom + "', '" + c_prenom + "'); ";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO FACTURER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE='" + c_adrFact1 + "' AND CLIENT.ID_CLIENT=(SELECT MAX(ID_CLIENT) FROM CLIENT)";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO LIVRER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE='" + c_adrLivr1 + "' AND CLIENT.ID_CLIENT=(SELECT MAX(ID_CLIENT) FROM CLIENT)";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
			
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------       Modifier       -------------------------------------------------------

	void Client::Modifier(String^ ancAdrFact1, String^ ancAdrFact2, String^ ancAdrLivr1, String^ ancAdrLivr2) {

		if (c_adrFact2 == "") {

			try
			{
				requete = "DELETE FROM FACTURER WHERE FACTURER.ID_ADRESSE=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + ancAdrFact2 + "') AND ID_CLIENT = '" + c_num + "'";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else if (c_adrFact2 != "numéroRue nomRue, ville, codePostal") {

			try
			{
				requete = "INSERT INTO ADRESSE SELECT '','" + c_adrFact2 + "' WHERE NOT EXISTS(SELECT * FROM ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrFact2 + "')";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				requete = "DELETE FROM FACTURER WHERE ID_CLIENT='" + c_num + "' AND ID_ADRESSE=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrFact2 + "')";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				requete = "INSERT INTO FACTURER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrFact2 + "' AND CLIENT.ID_CLIENT='" + c_num + "'";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}


		}
		if (c_adrLivr2 == "") {

			try
			{
				requete = "DELETE FROM LIVRER WHERE LIVRER.ID_ADRESSE=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + ancAdrLivr2 + "') AND ID_CLIENT = '" + c_num + "'";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else if (c_adrLivr2 != "numéroRue nomRue, ville, codePostal") {

			try
			{
				requete = "INSERT INTO ADRESSE SELECT '','" + c_adrLivr2 + "' WHERE NOT EXISTS(SELECT * FROM ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrLivr2 + "')";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				requete = "DELETE FROM LIVRER WHERE ID_CLIENT='" + c_num + "' AND ID_ADRESSE=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrLivr2 + "')";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				requete = "INSERT INTO LIVRER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrLivr2 + "' AND CLIENT.ID_CLIENT='" + c_num + "'";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		try
		{
			requete = "INSERT INTO DATE SELECT '','" + c_dateNaissance + "' WHERE NOT EXISTS(SELECT * FROM DATE WHERE DATE='" + c_dateNaissance + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO DATE SELECT '','" + c_date1achat + "' WHERE NOT EXISTS(SELECT * FROM DATE WHERE DATE='" + c_date1achat + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + c_adrFact1 + "' WHERE NOT EXISTS(SELECT * FROM ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrFact1 + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "DELETE FROM FACTURER WHERE ID_CLIENT='" + c_num + "' AND ID_ADRESSE=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + ancAdrFact1 + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO ADRESSE SELECT '','" + c_adrLivr1 + "' WHERE NOT EXISTS(SELECT * FROM ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrLivr1 + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "INSERT INTO FACTURER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrFact1 + "' AND CLIENT.ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "DELETE FROM LIVRER WHERE ID_CLIENT='" + c_num + "' AND ID_ADRESSE=(SELECT ID_ADRESSE FROM ADRESSE WHERE ADRESSE.ADRESSE='" + ancAdrLivr1 + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();			

			requete = "INSERT INTO LIVRER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE.ADRESSE='" + c_adrLivr1 + "' AND CLIENT.ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "UPDATE CLIENT SET ID_DATEN=(SELECT DATE.ID_DATE FROM DATE WHERE DATE.DATE='" + c_dateNaissance + "'), ID_DATE1ER=(SELECT DATE.ID_DATE FROM DATE WHERE DATE.DATE='" + c_date1achat + "'), CLINOM='" + c_nom + "', CLIPRENOM='" + c_prenom + "' WHERE ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

	void Client::Supprimer() {

		try
		{
			requete = "DELETE FROM FACTURER WHERE ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "DELETE FROM LIVRER WHERE ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "DELETE FROM COMMANDE WHERE ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "DELETE FROM CLIENT WHERE ID_CLIENT='" + c_num + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// ----------------------------------------------------      Ajouter Adresse     ------------------------------------------------------

	void Client::AjouterAdresse(int state) {

		if (state == 1) {

			try
			{
				requete = "INSERT INTO ADRESSE SELECT '','" + c_adrFact2 + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + c_adrFact2 + "')";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				requete = "INSERT INTO FACTURER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE='" + c_adrFact2 + "' AND CLIENT.ID_CLIENT='" + c_num + "'";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else if (state == 2) {

			try
			{
				requete = "INSERT INTO ADRESSE SELECT '','" + c_adrLivr2 + "' WHERE NOT EXISTS (SELECT * FROM ADRESSE WHERE ADRESSE='" + c_adrLivr2 + "')";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();

				requete = "INSERT INTO LIVRER SELECT CLIENT.ID_CLIENT, ADRESSE.ID_ADRESSE FROM CLIENT, ADRESSE WHERE ADRESSE='" + c_adrLivr2 + "' AND CLIENT.ID_CLIENT='" + c_num + "'";
				cmd = gcnew MySqlCommand(requete, con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}


	// ====================================================================================================================================
	// ======================================================        COMMANDE        ======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Commande::Commande(String^ id) {

		Categorie();
		co_IDCommande = id;
	}

	Commande::Commande(String^ ref, String^ numClient, String^ dateLivr, String^ dateEmi, String^ datePaie, String^ moyPaie, String^ refArt, String^ quantiteArt) {

		Categorie();
		co_ref = ref;
		co_numClient = numClient;
		co_dateLiv = dateLivr;
		co_dateEmi = dateEmi;
		co_datePaie = datePaie;
		co_moyPaie = moyPaie;
		co_refArt = refArt;
		co_quantiteArt = quantiteArt;
		co_remise = 1.00;
	}

	Commande::Commande(String^ id, String^ ref, String^ numClient, String^ dateLivr, String^ dateEmi, String^ datePaie, String^ moyPaie, String^ refArt, String^ quantiteArt) {

		Categorie();
		co_IDCommande = id;
		co_ref = ref;
		co_numClient = numClient;
		co_dateLiv = dateLivr;
		co_dateEmi = dateEmi;
		co_datePaie = datePaie;
		co_moyPaie = moyPaie;
		co_refArt = refArt;
		co_quantiteArt = quantiteArt;
		co_remise = 1.00;
	}


	// -------------------------------------------------------       Ajouter       --------------------------------------------------------

	void Commande::Ajouter() {

		try
		{
			requete = "SELECT DATE.DATE FROM DATE, CLIENT WHERE DATE.ID_DATE=CLIENT.ID_DATEN AND CLIENT.ID_CLIENT='" + co_numClient + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();

			String^ dateAnniv;
			while (dr->Read()) {

				dateAnniv = dr->GetString(0);
			}
			con->Close();

			requete = "SELECT DATE.DATE FROM DATE, CLIENT WHERE DATE.ID_DATE=CLIENT.ID_DATE1ER AND CLIENT.ID_CLIENT='" + co_numClient + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();

			String^ date1er;
			while (dr->Read()) {

				date1er = dr->GetString(0);
			}
			con->Close();

			String^ dateEmi1 = co_dateEmi;
			String^ dateEmi2 = co_dateEmi;

			if (dateAnniv->Remove(0, 4) == dateEmi1->Remove(0, 4)) {

				co_remise -= 0.10;
			}

			if (date1er->Remove(0, 4) == dateEmi2->Remove(0, 4)) {

				co_remise -= 0.05;
			}

			requete = "call CompleteCommande('" + co_quantiteArt + "', '" + co_refArt + "', '" + co_ref + "', '" + co_numClient + "', '" + co_remise.ToString(CultureInfo::InvariantCulture) + "', '" + co_dateEmi + "', '" + co_dateLiv + "', '" + co_datePaie + "', '" + co_moyPaie + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		 
	}


	// -------------------------------------------------------       Modifier       -------------------------------------------------------

	void Commande::Modifier() {

		try
		{
			requete = "SELECT DATE.DATE FROM DATE, CLIENT WHERE DATE.ID_DATE=CLIENT.ID_DATEN AND CLIENT.ID_CLIENT='" + co_numClient + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();

			String^ dateAnniv;
			while (dr->Read()) {

				dateAnniv = dr->GetString(0);
			}
			con->Close();

			requete = "SELECT DATE.DATE FROM DATE, CLIENT WHERE DATE.ID_DATE=CLIENT.ID_DATE1ER AND CLIENT.ID_CLIENT='" + co_numClient + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();

			String^ date1er;
			while (dr->Read()) {

				date1er = dr->GetString(0);
			}
			con->Close();

			String^ dateEmi1 = co_dateEmi;
			String^ dateEmi2 = co_dateEmi;

			if (dateAnniv->Remove(0, 4) == dateEmi1->Remove(0, 4)) {

				co_remise -= 0.10;
			}

			if (date1er->Remove(0, 4) == dateEmi2->Remove(0, 4)) {

				co_remise -= 0.05;
			}

			requete = "CALL UpdateCommande('" + co_quantiteArt + "','" + co_refArt + "','" + co_ref + "','" + co_numClient + "','" + co_remise.ToString(CultureInfo::InvariantCulture) + "','" + co_dateEmi + "','" + co_dateLiv + "','" + co_datePaie + "','" + co_moyPaie + "','" + co_IDCommande + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

	void Commande::Supprimer() {

		try
		{
			requete = "DELETE FROM COMMANDE WHERE ID_COMMANDE='" + co_IDCommande + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}




	// ====================================================================================================================================
	// ======================================================         STOCK         =======================================================
	// ====================================================================================================================================


	// -------------------------------------------------------    Constructeurs    --------------------------------------------------------

	Stock::Stock(String^ ref) {

		Categorie();
		s_ref = ref;
	}

	Stock::Stock(String^ desi, String^ prixHT, String^ tauxTVA, String^ quantiteStock, String^ seuilReapro, String^ couleur, String^ nature) {

		Categorie();
		s_desi = desi;
		s_prixHT = prixHT;
		s_tauxTva = tauxTVA;
		s_quantiteStock = quantiteStock;
		s_seuilReapro = seuilReapro;
		s_couleur = couleur;
		s_nature = nature;
	}

	Stock::Stock(String^ ref, String^ desi, String^ prixHT, String^ tauxTVA, String^ quantiteStock, String^ seuilReapro, String^ couleur, String^ nature) {

		Categorie();
		s_ref = ref;
		s_desi = desi;
		s_prixHT = prixHT;
		s_tauxTva = tauxTVA;
		s_quantiteStock = quantiteStock;
		s_seuilReapro = seuilReapro;
		s_couleur = couleur;
		s_nature = nature;
	}


	// -------------------------------------------------------       Ajouter       --------------------------------------------------------

	void Stock::Ajouter() {

		try
		{
			requete = "INSERT INTO ARTICLE values ('',(SELECT ID_NATURE FROM NATURE WHERE NATURE.NOMNAT='" + s_nature + "'), (SELECT ID_COLOR FROM COULEUR WHERE COULEUR.COULEUR='" + s_couleur + "'), '" + s_desi + "','" + s_quantiteStock + "','" + s_seuilReapro + "','" + s_prixHT + "','" + s_tauxTva + "')";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------       Modifier       -------------------------------------------------------

	void Stock::Modifier() {

		try
		{
			requete = "UPDATE ARTICLE SET ARTICLE.ID_NATURE=(SELECT NATURE.ID_NATURE FROM NATURE WHERE NATURE.NOMNAT='" + s_nature + "'), ARTICLE.ID_COLOR=(SELECT COULEUR.ID_COLOR FROM COULEUR WHERE COULEUR.COULEUR='" + s_couleur + "'), ARTNOM='" + s_desi + "', ARTSTOCKT='" + s_quantiteStock + "', ARTSEUIL='" + s_seuilReapro + "', ARTPRIXHT='" + s_prixHT + "', ARTTVA='" + s_tauxTva + "' WHERE ID_ARTICLE='" + this->s_ref + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	// -------------------------------------------------------      Supprimer     ---------------------------------------------------------

	void Stock::Supprimer() {

		try
		{
			requete = "DELETE FROM COMMANDE WHERE ID_ARTICLE='" + s_ref + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			requete = "DELETE FROM ARTICLE WHERE ID_ARTICLE='" + s_ref + "'";
			cmd = gcnew MySqlCommand(requete, con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}