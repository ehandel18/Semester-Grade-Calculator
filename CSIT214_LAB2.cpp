#include <iostream>
using namespace std;

int main() {
    int numAssignments; // Variable for number of assignments
    float score; // Variable for score on each assignment
    int count = 0; // Variable for number of scores entered
    float total = 0; // Variable for sum of scores
    float avgScore = 0; // Variable for average of scores

    // ask user for number of assignments
    cout << " Please enter the number of assignments ";
    cin >> numAssignments;

    // main loop to get the total value of scores
    while (true) {
        cout << " Enter the score of your assignment ";
        cin >> score;
        //Ensure scores are betwee 0-100
        if (score >= 0 && score <= 100) {
            total = total + score; //add scores to the total
        } else {
            cout << " Enter a score between 0-100 \n";
            continue;
        }
        count = count + 1; //total number of scores entered so far
        if (count == numAssignments) { //break loop once all scores have been entered
            break;
        }
    }
    avgScore = total / numAssignments; //Calculate average scores
    cout << " Average score: " << avgScore;
    //Determine letter grade
    if (avgScore >= 90) {
        cout << " Grade: A";
    } else if (avgScore >= 80) {
        cout << " Grade: B";
    } else if (avgScore >= 70) {
        cout << " Grade: C";
    } else if (avgScore >= 60) {
        cout << " Grade: D";
    } else {
        cout << " Grade: F";
    }
    return 0;



}
