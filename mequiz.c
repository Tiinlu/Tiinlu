#include <stdio.h>
#include <stdlib.h> // for rand(), srand()
#include <time.h>   // for time()
#include <string.h> // for strcmp()

#define NUM_QUESTIONS 6 // set NUM_QUESTIONS to have a value

// Structure to store Q and A
typedef struct {
    //use char to store characters
    char question[100]; //no. of characters for question
    char correctAnswer[50]; //no. of characters for answer
} Question; // set the name of the structure here

// Function to shuffle the questions
void shuffleQuestions(Question quiz[], int numQuestions) {
    for (int i = numQuestions - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // Swap questions[i] and questions[j]
        Question temp = quiz[i];
        quiz[i] = quiz[j];
        quiz[j] = temp;
    }
}

int main() {
    // Array of questions and correct answers
    Question quiz[NUM_QUESTIONS] = {
        {"What is my favorite color bb?", "yellow"},
        {"Who is my favorite superhero?", "spiderman"},
        {"Ano favorite ulam ko?", "sinigang"},
        {"What's my favorite dessert?", "taho"},
        {"What's my favorite ice cream flavor?", "strawberry"},
        {"Favorite christmas delicacy?", "bibingka"}
    };

    char userAnswer[50];

    int score = 0;  // Initialize score to 0

    // Seed the random number generator
    srand(time(0));

    // Shuffle the questions
    shuffleQuestions(quiz, NUM_QUESTIONS);

    // Loop through the shuffled questions
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        // Print random question
        printf("%s\n", quiz[i].question);

        // Get the user's answer
        printf("Your answer: \n");
        scanf(" %[^\n]%*c", userAnswer); // Read input including spaces until newline

        // Check if the answer is correct
        if (strcmp(userAnswer, quiz[i].correctAnswer) == 0) {
            printf("YAYYY CORRECT!!! \n");
            score++;  // Increment score if the answer is correct
        } else {
            printf("MALI BLEHHHHH: %s.\n", quiz[i].correctAnswer);
        }

    }

    // Display the final score
    printf("Score: %d out of %d\n", score, NUM_QUESTIONS);
    printf("YAYYY congrats hehehe\n");

    return 0;
}
