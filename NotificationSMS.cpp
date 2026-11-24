#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string sms, string o, string d, string m)
{
	cout << "constructeur NotificationSMS" << endl;
	this->sms = sms;
	this->operateur = o;
	this->destinataire = d;
	this->message = m;
}

void NotificationSMS::afficher()
{
	cout << "Destinataire : " << destinataire << endl;
	cout << "Message : " << message << endl;
}

void NotificationSMS::envoyer()
{
	cout << "SMS | Numero:" << sms
		<< " | Operateur : " << operateur
		<< " | Message : " << message << endl;
}

NotificationSMS::~NotificationSMS()
{
	cout << "destructeur NotificationSMS" << endl;
}






