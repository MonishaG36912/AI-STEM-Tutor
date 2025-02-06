#include "tutor.h"
#include "ai_connector.h"
#include <iostream>

Tutor::Tutor() : difficulty("medium") {}

void Tutor::setDifficulty(const std::string& level) {
    difficulty = level;
}

std::string Tutor::answerQuestion(const std::string& question) {
    // Use AI to generate the answer based on difficulty
    AIConnector aiConnector;
    std::string response = aiConnector.getAnswer(question, difficulty);
    return response;
}
