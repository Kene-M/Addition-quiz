                                        
/*

    This program will ask the user to calculate the sum of 2
    numbers ten times while giving feedback for answered questions.


1. Initialize the counters to 0
2. while loop: Stop executions when the # of questions asked is 10.

        Generate a random integer to be guessed.
        Display the question and ask the user to give the answer.

        Check if the question was answered incorrectly.
            If true: Display the correct answer to the user.

        Check if the question was answered correctly.
            If true: Increment the correct question counter.

        Increment the question count in each iteration.

3. Display the number of questions the user answered correctly.

*/


// This program will ask the user to calculate the sum of 2
// numbers ten times while giving feedback for answered questions.

#include <iostream>
#include <cstdlib>
#include <ctime>    // Needed for the time function

using namespace std ;

int main()
{
        // Declare variables.
    int number1 ;  // The first random integer.
    int number2 ;  // The second random integer.
    int questionCount = 0 ;  // Counter variable to hold the number of questions asked.
    int correctCount = 0 ;  // Counter variable to hold the number of correctly answered questions.

        // Check if the number of questions asked are between 1 to 10.
    while ( questionCount < 10 )
    {
            // Generate a random integer to be guessed.
        srand ( time (0));

        number1 = rand() ;
        number2 = rand() ;

        int answer ;  // To hold the user's answer.

            // Display the question and ask the user to give the answer.
        cout << "What is " << number1 << " + " << number2 << "? " ;
        cin >> answer ;

            // Check if the question was answered incorrectly.
        if ( number1 + number2 != answer )
        {
                // Display the correct answer to the user.
            cout << "Wrong answer." << endl ;
            cout << "Your correct answer is " << number1 + number2 << endl << endl ;
        }

            // Check if the question was answered correctly.
        else
        {
                // Increment the correct question counter.
            correctCount++ ;
        }

            // Increment the question count in each iteration.
        questionCount++ ;
    }

        // Display the number of questions the user answered correctly.
    cout << "Your have answered " << correctCount << " questions correctly." << endl ;

    return 0 ;
}

/*

    RUN 1: 109, 85, 73, 34, 79, 22, 65, 34, 73, 128.

What is 30 + 79? 109
What is 4 + 81? 85
What is 23 + 50? 73
What is 48 + 39? 34
Wrong answer.
Your correct answer is 87

What is 25 + 54? 79
What is 6 + 16? 22
What is 29 + 47? 65
Wrong answer.
Your correct answer is 76

What is 41 + 67? 34
Wrong answer.
Your correct answer is 108

What is 10 + 63? 73
What is 42 + 86? 128
Your have answered  7 questions correctly.

    ------------------------------------------------------

    RUN 2: 4, 0, 768, 2456, 0, 34567, 7899, 3789, 2, 189.

What is 1938 + 21920? 4
Wrong answer.
Your correct answer is 23858

What is 1961 + 31623? 0
Wrong answer.
Your correct answer is 33584

What is 1981 + 30577? 768
Wrong answer.
Your correct answer is 32558

What is 1991 + 30055? 2456
Wrong answer.
Your correct answer is 32046

What is 2004 + 7512? 0
Wrong answer.
Your correct answer is 9516

What is 2066 + 15124? 34567
Wrong answer.
Your correct answer is 17190

What is 2076 + 14601? 7899
Wrong answer.
Your correct answer is 16677

What is 2089 + 24827? 3789
Wrong answer.
Your correct answer is 26916

What is 2102 + 2284? 2
Wrong answer.
Your correct answer is 4386

What is 2108 + 23781? 189
Wrong answer.
Your correct answer is 25889

Your have answered 0 questions correctly.

*/