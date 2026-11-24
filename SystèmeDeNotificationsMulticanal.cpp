#include "Notification.h"
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"
#include <iostream>
using namespace std;
int main()
{
	
	Notification*NE= new NotificationEmail("sara@example.com", "Securite", "safae", "Nouvelle connexion detectee ");
	Notification*SM= new NotificationSMS("0612345678", "Orange", "lamiae", "Votre code est 4582 ");
	Notification*PS= new NotificationPush("user_102","MyBank","lina"," Paiement confirme ");

	Notification* tab[3];
	tab[0] = NE;
	tab[1] = SM;
	tab[2] = PS;
	for (int i = 0;i < 3;i++) {
		cout << "Objet"<< i+1<< endl;
		tab[i]->afficher();
		cout << "-------------" << endl;
		tab[i]->envoyer();
		cout << "-------------" << endl;
	}
	GestionnaireNotifications GS;
	GS.ajouter(NE);
	GS.ajouter(SM);
	GS.ajouter(PS);
	cout << "-------------" << endl;
	GS.envoyerToutes();
	cout << "-------------" << endl;
	delete NE;
	NE = nullptr;
	delete SM;
	SM = nullptr;
	delete PS;
	PS = nullptr;

	
	return 0;
}

