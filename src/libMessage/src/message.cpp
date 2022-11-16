

#include "libMessage/message.h"

#include <iostream>

using namespace std;

Message::Message(string message) : m_message(message)
{
}

Message::~Message()
{
}

void Message::print()
{
    cout << m_message << endl;
}