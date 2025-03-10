
#include "student.h"
using namespace std;
//struct Student {
//    string firstName;
//    string lastName;
//    double attendance;
//    double groupWork;
//    vector<double> quizzes;
//    vector <double> labs;
//    vector <double> homework;
//    double midterm;
//    double finalExam;
//    double avgQuizzes;
//    double avgLabs;
//    double avgHomework;
//    double courseAverage;
//    string letterGrade;
//
//
//    void load(ifstream data) {
//        int ans;
//        data >> firstName;
//        data >> lastName;
//        data >> attendancel;
//        data >> groupWork;
//
//        cout << "How many quiz grades?: ";
//        cin >> ans;
//        for (int i = 0; i < ans; i++) {
//            data >> quizzes[i];
//        }
//        cout << endl << "How many lab grades?: "
//            cin >> ans;
//        for (int i = 0; i < ans; i++) {
//            data >> labs [i] ;
//        }
//        cout << endl << "How many homework grades?: "
//            cin >> ans;
//        for (int i = 0; i < ans; i++) {
//            data >> labs[i];
//        }
//
//        
//    }
//   
//};

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
double findMinQuiz(double q[]) {
    return (q[0] < q[1] ? (q[0] < q[2] ? (q[0] < q[3] ? q[0] : q[3]) : (q[2] < q[3] ? q[2] : q[3])) : (q[1] < q[2] ? (q[1] < q[3] ? q[1] : q[3]) : (q[2] < q[3] ? q[2] : q[3])));


}
double findAverageQuizScore(double q[]) {
    return (q[0] + q[1] + q[2] + q[3] - findMinQuiz(q[0], q[1], q[2], q[3])) / 3;


}
double findAverageHomeworkScore(double hw[]) {
    double hw1Percent = (hw[0] / 10.0) * 100.0; 
    double hw2Percent = (hw[1] / 10.0) * 100.0;  
    double hw3Percent = (hw[2] / 20.0) * 100.0;  
    double hw4Percent = (hw[3] / 20.0) * 100.0; 

   
    double averagePercent = (hw1Percent + hw2Percent + hw3Percent + hw4Percent) / 4.0;

    return averagePercent / 10.0;
}
double findAverageLabScore(double arr[]) {

    return (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7]) / 8;

}





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

