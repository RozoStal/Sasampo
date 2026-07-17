#pragma once

//Sasampo includes
#include "IInformationServices/INotificationSender.h"

//C++ includes
#include <iostream>

class SmsSender : public INotificationSender{
    public:
        SmsSender() = default;
        ~SmsSender() = default;
        bool send(const Notification& ntf) const override;

        const int getMaxMessLen() const;
        void setMaxMessLen(const int len);
    private:
        int m_messageMaxLen{160};
};