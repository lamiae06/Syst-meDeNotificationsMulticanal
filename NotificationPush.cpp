#include "NotificationPush.h"

NotificationPush::NotificationPush(string p, string a, string d, string m)
{
	cout << "constructeur NotificationPush" << endl;
	this->push = p;
	this->application = a;
	this->destinataire = d;
	this->message = m;
}

void NotificationPush::afficher()
{
	cout << "Destinataire : " << destinataire << endl;
	cout << "Message : " << message << endl;
}

void NotificationPush::envoyer()
{
	cout << "PUSH | Utilisateur:" << push
		<< " | Application : " << application
		<< " | Message : " << message << endl;
}

NotificationPush::~NotificationPush()
{
	cout << "destructeur NotificationPush" << endl;
}



