#include "ai_connector.h"
#include <iostream>
#include <string>
//#include <curl/curl.h>  // For HTTP requests (if using REST API for AI interaction)

AIConnector::AIConnector() {}

std::string AIConnector::getDifficultyLevel(const std::string& subject) {
    // For demonstration purposes, return a static difficulty based on the subject.
    // In a real implementation, this would interact with a Python model via REST API or pybind11.
    if (subject == "Math") {
        return "medium";
    } else if (subject == "Physics") {
        return "hard";
    } else {
        return "easy";
    }
}

std::string AIConnector::getAnswer(const std::string& question, const std::string& difficulty) {
    // For simplicity, we will just return a dummy answer based on the difficulty.
    // This should actually communicate with the Python backend to get a response.
    
    if (difficulty == "easy") {
        return "This is an easy answer.";
    } else if (difficulty == "medium") {
        return "This is a medium difficulty answer.";
    } else if (difficulty == "hard") {
        return "This is a hard answer.";
    } else {
        return "Sorry, I cannot answer that question.";
    }
}

// Optionally, add functions to interact with Python models using REST API or pybind11.
