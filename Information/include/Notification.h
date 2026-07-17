#pragma once

//C++ includes
#include <string>

class Notification{
    public:
        Notification() = default;
        ~Notification() = default;

        const std::string& getRecipient() const;
        const std::string& getMessage() const;

        void setRecipient(const std::string& rec);
        void setMessage(const std::string& mes);
    private:
        std::string m_recipient{"Null"};
        std::string m_message{""};
};