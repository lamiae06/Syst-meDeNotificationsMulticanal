#pragma once
#include<iostream>
using namespace std;
class Notification
{
protected:
	string destinataire;
	string message;
public:
	Notification(string="vide", string="vide");
	virtual void afficher();
	virtual void envoyer() = 0;
	virtual~Notification();
};

