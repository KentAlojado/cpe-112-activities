#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
  int bio;
  float length;
  float width;
  float area;
  float radius;
  float diameter;
  float legA;
  float legB;
  float hypotenuse;
  float finalhyp;
  float distance;
  float time;
  float velocity;
  double adjacent;
  double angle;
  double calculateA;
  double calculateB;
  
  cout << "Enter your desired number (1-5): ";
    while (!(cin >> bio) || bio < 0 || bio > 5) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter only numbers from 1-5: ";
}  
  
  switch (bio) {
  case 1:
    cout << "You just pressed 1. This app calculates the area of the rectangle." <<endl;
    cout << "Please enter the length: ";
    cin >>length;
    cout << "Please enter the width: ";
    cin >>width;
    area = length*width;
    cout << "Based on the information you provided the area is " <<area;
    break;
  case 2:
    cout << "You just pressed 2. This app calculates the diameter of a circle." <<endl;
    cout << "Please enter the radius: ";
    cin >>radius;
    diameter = radius*2;
    cout << "Based on the information you provided the diameter of the circle is " <<diameter;
    break;
  case 3:
    cout << "You just pressed 3. This app solves for the value of hypotenuse using Pythagorean Theorem." <<endl;
    cout << "Please value for leg A: ";
    cin >>legA;
    cout << "Please value for leg B: ";
    cin >>legB;
    hypotenuse =(legA*legA)+(legB*legB);
    finalhyp = sqrt(hypotenuse);
    cout << "The length of hypotenuse is: " <<finalhyp;
    break;
  case 4:
    cout << "You just pressed 4. This app solves for the Velocity." <<endl;
    cout << "Please enter value for distance: ";
    cin >>distance;
    cout << "Please enter value for time: ";
    cin >>time;
    velocity = distance/time;
    cout << "The velocity is: " <<velocity;
    break;
  case 5:
    cout << "You just pressed 5. This app demonstrates the CAH principle.";
    cout << "Please enter value for ADJACENT side: ";
    cin >>adjacent;
    cout << "Please enter value for DEGREE of an ANGLE: ";
    cin >>angle;
    calculateA = cos(angle)*3.14159/180;
    calculateB = adjacent/calculateA;  
    cout << "Cosine of 40 degrees is: " <<calculateA <<endl;
    cout << "The result is: " <<calculateB;
    break;
  }
  return 0;
}
