#pragma once
#include "Notification.h"
class GestionnaireNotifications
{
	Notification* tab[100];
	int compteur;
public:
	GestionnaireNotifications();
	void ajouter(Notification* n);
	void envoyerToutes();
	~GestionnaireNotifications();

};

