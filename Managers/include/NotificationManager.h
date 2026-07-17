#pragma once

//Sasampo includes
#include "IInformationServices/INotificationSender.h"

//C++ includes
#include <memory>
#include <vector>

class NotificationManager{
    public:
        NotificationManager() = default;
        ~NotificationManager() = default;
        void addSender(std::shared_ptr<INotificationSender> sender);
        void sendToAll(const Notification& notification);
    private:
        std::vector<std::shared_ptr<INotificationSender>> m_senders;
};