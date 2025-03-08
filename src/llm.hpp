#pragma once
///
/// Simple LLM API client
///
#include <string>
#include <vector>
#include <cpr/cpr>


namespace llm {
    
    ///
    /// @brief Message roles (system/user/assistant)
    ///
    enum Role {
        SYSTEM,
        USER,
        ASSISTANT,
    };

    // convert Role to string
    // inline std::string operator()(Role role) {
    //     if (role == Role::SYSTEM) return "system";
    //     if (role == Role::USER) return "user";
    //     if (role == Role::ASSISTANT) return "assistant";
    //     return "unknown";
    // };

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
        Client(const std::string& url) : m_url(url), m_curl()

        }

        Response chat(const std::vector<Message>& messages) {

        }

    protected:
        std::string m_url;
    };

}
