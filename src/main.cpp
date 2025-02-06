#include <iostream>
#include <string>
#include "tutor.h"
#include "ai_connector.h"

using namespace std;

int main() {
    cout << "Welcome to the AI-Powered Interactive STEM Tutor!" << endl;
    
    // Initialize the tutor object
    Tutor tutor;

    // Provide an introduction or instructions
    cout << "This tutor will help you with various STEM subjects. Let's start!" << endl;

    // Ask user for the subject or topic they need help with
    string subject;
    cout << "Please enter the subject you need help with (e.g., Math, Physics, Chemistry): ";
    getline(cin, subject);

    // Initialize AI model to help adjust the difficulty level
    AIConnector aiConnector;
    string difficultyLevel = aiConnector.getDifficultyLevel(subject);

    // Set the difficulty for the tutor
    tutor.setDifficulty(difficultyLevel);

    // Ask the user for a question in the given subject
    string question;
    cout << "Please enter your question: ";
    getline(cin, question);

    // Tutor provides an answer, potentially using the AI model
    string answer = tutor.answerQuestion(question);

    // Display the answer
    cout << "Answer: " << answer << endl;

    // Ask if the user wants to try another question
    char retry;
    cout << "Would you like to ask another question? (y/n): ";
    cin >> retry;
    cin.ignore();  // to clear out the newline from the buffer

    if (retry == 'y' || retry == 'Y') {
        main();  // Restart the process
    } else {
        cout << "Thank you for using the AI-Powered Tutor. Goodbye!" << endl;
    }

    return 0;
}
