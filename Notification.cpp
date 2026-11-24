#include "Notification.h"

Notification::Notification(string d, string m)
{
	cout << "constructeur Notification" << endl;
	this->destinataire = d;
	this->message = m;
}

void Notification::afficher()
{
	cout << "Destinataire : " << destinataire << endl;
	cout << "Message : " << message << endl;
}

Notification::~Notification()
{
	cout << "destructeur Notification" << endl;

}
