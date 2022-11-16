#include <iostream>

#include "libMessage/message.h"

using namespace std;

int main(int argc, char const *argv[])
{

    Message message("Hello master!");
    cout << "Program started ..." << endl;
    

    message.print();

    return 0;
}
