#pragma once
#include "Notification.h"
class NotificationPush :
    public Notification
{
    string push;
    string application;
public:
    NotificationPush(string, string, string, string);
    void afficher() override;
    void envoyer()override;
    ~NotificationPush()override;
};

