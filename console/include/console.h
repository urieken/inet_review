#ifndef __console_h__
#define __console_h__

#include <string>

typedef struct _console_msgs
{
    std::string  prompt;
    std::string  welcome;
    std::string  exit;
    inline _console_msgs()
        : prompt("console: ")
        , welcome("Starting console")
        , exit("Shutting down console"){}
    inline _console_msgs(const std::string& _prompt,
            const std::string& _welcome,
            const std::string& _exit)
        : prompt(_prompt), welcome(_welcome), exit(_exit){}
}console_messages;

class CConsole
{
        console_messages    m_messages;
    public:
        CConsole();
        CConsole(const std::string&,
                 const std::string&,
                 const std::string&);
        virtual ~CConsole();

        inline void setPrompt(const std::string& _prompt)
        {m_messages.prompt   = _prompt;};
        inline void setWelcomeMessage(const std::string& _message)
        {m_messages.welcome  = _message;};
        inline void setExitMessage(const std::string& _message)
        {m_messages.exit     = _message;};

        inline const std::string& getPrompt() const
        {return m_messages.prompt;};
        inline const std::string& getWelcomeMessage() const
        {return m_messages.welcome;};
        inline const std::string& getExitMessage() const
        {return m_messages.exit;};

        virtual bool getLine(std::string&, const std::string&);
};

#endif // __console_h__
