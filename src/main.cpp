/**
 * Command line LLM chat agent
 * 
 * Author: Gregory Shklover
 * License: MIT
 */
#include <iostream>
#include <memory.h>
#include <string>

#include "llm.hpp"
using namespace llm_client;


static const std::string SYSTEM_PROMPT = "You are a bash assistant. Respond with bash commands quoted with ```bash ...```, no explanations.";


/// @brief Prints application usage
static void print_usage()
{
    std::cout << "Usage: chat <text>" << std::endl;
}

/// @brief LLM session with support for chat history
class Session {
public:
    Session() {
        m_history = load_history();
    }

public:
    static std::vector<Message> load_history();                       // load history fro user directory
    static void store_history(const std::vector<Message>& history);   // store the history to user directory
    static void reset_history();

    Response chat(const std::string& prompt);

protected:

protected:
    std::vector<Message> m_history;
};


/// @brief Load history from the user directory
/// @return vector of messages
std::vector<Message> Session::load_history()
{

}

/// @brief Store history in user home directory
/// @param history 
void Session::store_history(const std::vector<llm_client::Message>& history)
{

}

/// @brief Reset user chat history
void Session::reset_history()
{

}

/// @brief Run a new user prompt
/// @param prompt 
/// @return 
Response Session::chat(const std::string& prompt)
{
    // join prompt with the history
    
    
    // run the prompt

    // process output
}

/// @brief Extract code blocks from the LLM response
/// @param text 
/// @return 
std::vector<std::string> extract_code_blocks(const std::string& text)
{
    return std::vector<std::string>();
}


/// @brief Main entry point
int main(int argc, char* argv[])
{
    if (argc < 2 || !strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) {
        print_usage();
        exit(argc == 2);
    }

    Session session;

    if (argc == 2 && !strcmp(argv[1], "reset")) {
        session.reset_history();
        return 0;
    }

    // join the prompt into one string:
    std::string prompt;
    for (int i = 1; i < argc; ++i) {
        if (i == 1) prompt += " ";
        prompt += argv[i];
    }
    
    auto response = session.chat(prompt);
    auto blocks = extract_code_blocks(response.content);

    return 0;
}
