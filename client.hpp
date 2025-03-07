#pragma once
///
/// Simple LLM API client
///
#include <string>
#include <vector>


namespace llm_client {
    
    ///
    /// @brief Message roles (system/user/assistant)
    ///
    enum Role {
        SYSTEM,
        USER,
        ASSISTANT,
    };

    ///
    /// @brief Messages exchanged with the LLM engine
    ///
    struct Message {
        Role role;
        std::string message;
    };


    /// @brief Chat response
    struct Response {
        std::string content;
    };


    /// @brief Simple OpenAI-compatible LLM client
    class Client {
    public:
        Client(const std::string& url) : m_url(url) {}

        Response chat(const std::vector<Message>& messages) {

        }

    protected:
        std::string m_url;
    };

}
