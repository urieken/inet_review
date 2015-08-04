#include <iostream>

#include "console.h"

CConsole::CConsole()
{

}

CConsole::CConsole(const std::string& _prompt,
        const std::string& _welcome,
        const std::string& _exit)
: m_messages(_prompt, _welcome, _exit)
{

}

CConsole::~CConsole()
{

}

bool CConsole::getLine(std::string& _line,
        const std::string& _exit)
{

    std::cout << m_messages.prompt;
    getline(std::cin, _line);
    return _line.compare(_exit);
}

