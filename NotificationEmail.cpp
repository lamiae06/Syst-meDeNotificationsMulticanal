#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string e, string o, string d, string m)
{
	cout << "constructeur NotificationEmail" << endl;
	this->email = e;
	this->objet = o;
	this->destinataire = d;
	this->message = m;
}

void NotificationEmail::afficher()
{
	cout << "Destinataire : " << destinataire << endl;
	cout << "Message : " << message << endl;
}

void NotificationEmail::envoyer()
{
	cout << "EMAIL | A : " << email
		<< " | Objet : " << objet
		<< " | Message : " << message << endl;
}

NotificationEmail::~NotificationEmail()
{
	cout << "destructeur NotificationEmail" << endl;
}





