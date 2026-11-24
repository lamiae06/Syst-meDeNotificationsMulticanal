#pragma once
#include<iostream>
#include "Notification.h"
using namespace std;
class NotificationEmail :
    public Notification
{
    string email;
    string objet;
public:
    NotificationEmail(string , string , string ,string);
    void afficher() override;
    void envoyer()override;
    ~NotificationEmail()override;
};

