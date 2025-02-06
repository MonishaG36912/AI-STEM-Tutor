#ifndef AI_CONNECTOR_H
#define AI_CONNECTOR_H

#include <string>


 AIConnector {
public:
    AIConnector(); // Constructor
    std::string getDifficultyLevel(const std::string& subject); // Get difficulty based on subject
    std::string getAnswer(const std::string& question, const std::string& difficulty); // Get AI-generated answer for a question
    
private:
    // You could have a Python bridge or REST API here to interact with the AI models
};

#endif // AI_CONNECTOR_H
