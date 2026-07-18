//Sasampo includes
#include "Senders/include/EmailSender.h"

bool EmailSender::send(const Notification& ntf) const {
    std::cout << "Email via " << m_smtpServer << " to " <<  ntf.getRecipient() << " with text: " << ntf.getMessage() << std::endl;
    return true;
}