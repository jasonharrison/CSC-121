// Project 2: Class scores
// Write a program that calculates the total grade for N classroom
// exercises as a percentage.  The user should input the value for
// N followed by each of the N scores and totals. Calculate the
// overall percentage (sum of the total points earned divided
// by the total points possible) and output it as a percentage.

#include <iostream>

using namespace std;

int main() {
    // Define/declare variables
    int numExercises, pointsReceived, pointsPossible;
    int totalPointsReceived = 0;
    int totalPointsPossible = 0;
    int counter = 1;

    // Capture the user's input into numExercises
    cout << "Enter the number of exercises to input: ";
    cin >> numExercises;

    while (counter <= numExercises) { // Loop until we are done entering all of our exercises
        // Capture the user's input for points received into pointsReceived
        cout << "Enter the points received for exercise " << counter << ": ";
        cin >> pointsReceived;
        // Add pointsReceived to totalPointsReceived
        totalPointsReceived += pointsReceived;

        // Capture points possible into pointsPossible
        cout << "Enter the points possible for exercise " << counter << ": ";
        cin >> pointsPossible;
        // Add pointsPossible to totalPointsPossible
        totalPointsPossible += pointsPossible;

        counter++; // Increment the counter in our loop
    }
    // Calculate the score as a percentage; use a float because we want a decimal value
    float score = float(totalPointsReceived) / totalPointsPossible * 100;
    cout.setf(ios::fixed); // sets decimal output to fixed notation
    cout.setf(ios::showpoint); // display decimal point
    cout.precision(1); // show one digit to the right of the decimal point

    // Show the user the result of our calculation
    cout << "Your total is " << totalPointsReceived << " out of " << totalPointsPossible << ", or " << score << "%";
    return 0;
}