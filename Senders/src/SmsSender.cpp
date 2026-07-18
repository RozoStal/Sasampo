//Sasampo includes
#include "SmsSender.h"

int SmsSender::getMaxMessLen() const { return m_messageMaxLen; }

void SmsSender::setMaxMessLen(const int len) { m_messageMaxLen = len; }

bool SmsSender::send(const Notification& ntf) const{
    if (ntf.getMessage().length() > m_messageMaxLen){
        std::cout << "[SMS Error] The message is too long!" << std::endl;
        return false;
    }
    std::cout << "[SMS] to number " << ntf.getRecipient() << " with text: " << ntf.getMessage() << std::endl;
    return true;
}