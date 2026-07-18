#include "Information/include/Notification.h"

const std::string& Notification::getRecipient() const { return m_recipient; }
const std::string& Notification::getMessage() const { return m_message; }

void Notification::setRecipient(const std::string& rec) { m_recipient = rec; }
void Notification::setMessage(const std::string& mes) { m_message = mes; }