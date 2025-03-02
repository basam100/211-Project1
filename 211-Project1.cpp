
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

string calculateLetterGrade(double avg) {

    if (avg > 90) {
        return "A";
    }
    else if(avg > 80) {
        return "B";

    }
    else if (avg > 75) {
        return "C+";
    }
    else if (avg > 70) {
        return "C";
    }
    else if (avg > 60) {
        return "D";
    }
    return "F";

}
double findMinQuiz(double q1, double q2, double q3, double q4) {
    return (q1 < q2 ? (q1 < q3 ? (q1 < q4 ? q1 : q4) : (q3 < q4 ? q3 : q4)) : (q2 < q3 ? (q2 < q4 ? q2 : q4) : (q3 < q4 ? q3 : q4)));


}
double findAverageQuizScore(double q1, double q2, double q3, double q4) {
    return (q1 + q2 + q3 + q4 - findMinQuiz(q1, q2, q3, q4)) / 3;


}
double findAverageHomeworkScore(double hw1, double hw2, double hw3, double hw4) {
    double hw1Percent = (hw1 / 10.0) * 100.0; 
    double hw2Percent = (hw2 / 10.0) * 100.0;  
    double hw3Percent = (hw3 / 20.0) * 100.0;  
    double hw4Percent = (hw4 / 20.0) * 100.0; 

   
    double averagePercent = (hw1Percent + hw2Percent + hw3Percent + hw4Percent) / 4.0;

    return averagePercent / 10.0;
}
double findAverageLabScore(double q1, double q2, double q3, double q4, double q5, double q6, double q7, double q8) {
    return (q1 + q2 + q3 + q4 + q5 + q6 + q7 + q8) / 8;

}

struct Student {
    string firstName;
    string lastName;
    double attendance;
    double groupWork;
    double quizzes[4];
    double labs[8];
    double homework[4];
    double midterm;
    double finalExam;
    double avgQuizzes;
    double avgLabs;
    double avgHomework;
    double courseAverage;
    string letterGrade;
};


int main()
{
    string response;
    ifstream data;
    ofstream results1, results2;
    string name;
    double attendance, group, quiz, homework, final;
    do {

        cout << "Hello welcome to my calc: Enter file name (case sensitive)";
        cin >> response;
        data.open(response+".txt");
    } while (data);
  
}

