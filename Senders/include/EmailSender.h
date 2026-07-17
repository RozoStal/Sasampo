#pragma once

//Sasampo includes
#include "IInformationServices/INotificationSender.h"

//C++ includes
#include <iostream>

class EmailSender : public INotificationSender{
    public:
        EmailSender(): m_smtpServer("") {};
        EmailSender(const std::string& stmpServer): m_smtpServer(stmpServer) {};
        ~EmailSender() = default;
        bool send(const Notification& ntf) const override;
    private:
        std::string m_smtpServer;
};