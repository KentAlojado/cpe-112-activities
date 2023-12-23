/*Create a program that will reuire your name, enable you to input your grades, 
then will tell you whether you'll be promoted to second year or not.*/
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main(){	

char name[100];
float subjectAone;
float subjectAtwo;
float subjectAthree;
float subjectAfour;
float subjectBone;
float subjectBtwo;
float subjectBthree;
float subjectBfour;
float subjectCone;
float subjectCtwo;
float subjectCthree;
float subjectCfour;
float subjectDone;
float subjectDtwo;
float subjectDthree;
float subjectDfour;
float subtotalA;
float subtotalB;
float subtotalC;
float subtotalD;
float gwa;
cout << "Enter your name: ";
cin >> name;
cout << "Hello " << name << "! " << endl;

cout << "Please enter your grade in Subject A (first grading): ";
    while (!(cin >> subjectAone) || subjectAone < 50 || subjectAone > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject A (second grading): ";
    while (!(cin >> subjectAtwo) || subjectAtwo < 50 || subjectAtwo > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject A (third grading): ";
    while (!(cin >> subjectAthree) || subjectAthree < 50 || subjectAthree > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject A (fourth grading): ";
    while (!(cin >> subjectAfour) || subjectAfour < 50 || subjectAfour > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}


cout << "Please enter your grade in Subject B (first grading): ";
    while (!(cin >> subjectBone) || subjectBone < 50 || subjectBone > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject B (second grading): ";
    while (!(cin >> subjectBtwo) || subjectBtwo < 50 || subjectBtwo > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject B (third grading): ";
    while (!(cin >> subjectBthree) || subjectBthree < 50 || subjectBthree > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject B (fourth grading): ";
    while (!(cin >> subjectBfour) || subjectBfour < 50 || subjectBfour > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}



cout << "Please enter your grade in Subject C (first grading): ";
    while (!(cin >> subjectCone) || subjectCone < 50 || subjectCone > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject C (second grading): ";
    while (!(cin >> subjectCtwo) || subjectCtwo < 50 || subjectCtwo > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject C (third grading): ";
    while (!(cin >> subjectCthree) || subjectCthree < 50 || subjectCthree > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject C (fourth grading): ";
    while (!(cin >> subjectCfour) || subjectCfour < 50 || subjectCfour > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}


cout << "Please enter your grade in Subject D (first grading): ";
    while (!(cin >> subjectDone) || subjectDone < 50 || subjectDone > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject D (second grading): ";
    while (!(cin >> subjectDtwo) || subjectDtwo < 50 || subjectDtwo > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject D (third grading): ";
    while (!(cin >> subjectDthree) || subjectDthree < 50 || subjectDthree > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

cout << "Please enter your grade in Subject D (fourth grading): ";
    while (!(cin >> subjectDfour) || subjectDfour < 50 || subjectDfour > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (50-100): ";
}

subtotalA = (subjectAone+subjectAtwo+subjectAthree+subjectAfour)/4;
subtotalB = (subjectBone+subjectBtwo+subjectBthree+subjectBfour)/4;
subtotalC = (subjectCone+subjectCtwo+subjectCthree+subjectCfour)/4;
subtotalD = (subjectDone+subjectDtwo+subjectDthree+subjectDfour)/4;
gwa = (subtotalA+subtotalB+subtotalC+subtotalD)/4;

cout << endl << "Your Subject A average is: " << subtotalA;
cout << endl << "Your Subject B average is: " << subtotalB;
cout << endl << "Your Subject C average is: " << subtotalC;
cout << endl << "Your Subject D average is: " << subtotalD;
cout << endl << "Your general average is: " << gwa;

	    return 0;

}
