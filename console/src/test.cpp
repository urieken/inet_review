#include <iostream>

#include "console.h"

int main(int argc, char** argv)
{
    int nReturn(0);
    CConsole* pConsole = new CConsole("console test: ",
            "Starting console test app",
            "Stopping console test app");
    if(pConsole)
    {
        std::cout << pConsole->getWelcomeMessage() << std::endl;
        std::string strInputLine;
        while(pConsole->getLine(strInputLine, "exit")){}
        std::cout << pConsole->getExitMessage() << std::endl;
        delete pConsole;
    }

    return nReturn;
}
