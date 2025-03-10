#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    double attendance;
    double groupWork;
    vector<double> quizzes;
    vector <double> labs;
    vector <double> homework;
    double midterm;
    double finalExam;
    double avgQuizzes;
    double avgLabs;
    double avgHomework;
    double courseAverage;
    string letterGrade;


    void load(ifstream data) {
        int ans;
        data >> firstName;
        data >> lastName;
        data >> attendancel;
        data >> groupWork;

        cout << "How many quiz grades?: ";
        cin >> ans;
        for (int i = 0; i < ans; i++) {
            data >> quizzes[i];
        }
        cout << endl << "How many lab grades?: "
            cin >> ans;
        for (int i = 0; i < ans; i++) {
            data >> labs[i];
        }
        cout << endl << "How many homework grades?: "
            cin >> ans;
        for (int i = 0; i < ans; i++) {
            data >> homework[i];
        }
        data >> finalExam;


    }

};