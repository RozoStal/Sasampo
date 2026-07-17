//Sasampo includes
#include "NotificationManager.h"

//C++ includes
#include <iostream>

void NotificationManager::addSender(std::shared_ptr<INotificationSender> sender) { m_senders.push_back(sender); }

void NotificationManager::sendToAll(const Notification& notification) {
    int nSendedMessages = 0;
    for (auto sender : m_senders){
        if (sender.get()->send(notification)) nSendedMessages++; 
    }
    std::cout << "Sasampo::NotificationManager: " <<  nSendedMessages << " sent, " << m_senders.size() - nSendedMessages << " aborted" << std::endl;
}