
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

string calculateLetterGrade(double avg) {

}
double findMinQuiz(double q1, double q2, double q3, double q4) {

}
void findAverageQuizScore(double q1, double q2, double q3, double q4) {

}
double findAverageHomeworkScore(double q1, double q2, double q3, double q4) {

}
double findAverageLabScore(double q1, double q2, double q3, double q4, double q5, double q6, double q7, double q8) {

}


int main()
{
    string response;
    ifstream data;
    ofstream results;
    string name;
    double attendance, group, quiz, homework, final;
    do {

        cout << "Hello welcome to my calc: Enter file name (case sensitive)";
        cin >> response;
        data.open(response+".txt");
    } while (data);
  
}

