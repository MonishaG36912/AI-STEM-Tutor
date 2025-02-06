#ifndef TUTOR_H
#define TUTOR_H

#include <string>

class Tutor {
public:
    Tutor();                           // Constructor
    void setDifficulty(const std::string& level); // Set the difficulty level
    std::string answerQuestion(const std::string& question);  // Answer a question
    
private:
    std::string difficulty;  // Difficulty level (easy, medium, hard)
};

#endif // TUTOR_H
