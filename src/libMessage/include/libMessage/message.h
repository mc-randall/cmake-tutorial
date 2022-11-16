
#include <string>

class Message
{
private:
    std::string m_message; /* data */
public:
    Message(std::string message);
    ~Message();
    void print();
};