#pragma once
#include "Notification.h"
class NotificationSMS :
    public Notification
{
    string  sms;
    string operateur;
public:
    NotificationSMS(string, string, string, string);
    void afficher() override;
    void envoyer()override;
    ~NotificationSMS()override;
};

