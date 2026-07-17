#pragma once

//Sasampo includes
#include "Information/include/Notification.h"

class INotificationSender {
    public:
        virtual ~INotificationSender() = default;
        virtual bool send(const Notification& ntf) const = 0;
};