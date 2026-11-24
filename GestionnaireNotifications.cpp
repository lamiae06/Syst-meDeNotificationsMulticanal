#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
{
	cout << "constructeur GestionnaireNotifications" << endl;

	for (int i = 0; i < 100; i++) {
		tab[i] = nullptr;
	}

	compteur = 0;
}
void GestionnaireNotifications::ajouter(Notification* n)
{
	if (compteur < 100) {
		tab[compteur] = n;
		compteur++;
	}
	else {
		cout << "Gestionnaire plein " << endl;
	}
}

void GestionnaireNotifications::envoyerToutes()
{
	for (int i = 0;i < compteur;i++) {
		tab[i]->envoyer();
	}
}

GestionnaireNotifications::~GestionnaireNotifications()
{
	cout << "destructeur GestionnaireNotifications" << endl;
}


