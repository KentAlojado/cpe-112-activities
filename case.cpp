/*Switch Program:
Uses five cases in which each case has own formula to perform.
Case 1: Area of Rectangle
Case 2: Diameter of a circle
Case 3: Pythagorean Theorem
Case 4: Velocity
Case 5: SOH CAH TOA sample. Highlights CAH principle
*/
#include <iostream>
#include <cmath>
#include <limits>
#include<math.h>
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
  double getCos;
  double calculateB;
  
  cout << "Enter your desired number (1-5): ";
    while (!(cin >> bio) || bio < 0 || bio > 5) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter only numbers from 1-5: ";
}  
  
  switch (bio) {
  /*Case 1: Area of Rectangle*/
  case 1:
    cout << "You just pressed 1. This app calculates the area of the rectangle." <<endl;
    cout << "Please enter the length: ";
    cin >>length;
    cout << "Please enter the width: ";
    cin >>width;
    area = length*width;
    cout << "Based on the information you provided the area is " <<area;
    break;
  /*Case 2: Diameter of a circle*/
  case 2:
    cout << "You just pressed 2. This app calculates the diameter of a circle." <<endl;
    cout << "Please enter the radius: ";
    cin >>radius;
    diameter = radius*2;
    cout << "Based on the information you provided the diameter of the circle is " <<diameter;
    break;
  /*Case 3: Pythagorean Theorem*/
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
  /*Case 4: Velocity*/
  case 4:
    cout << "You just pressed 4. This app solves for the Velocity." <<endl;
    cout << "Please enter value for distance: ";
    cin >>distance;
    cout << "Please enter value for time: ";
    cin >>time;
    velocity = distance/time;
    cout << "The velocity is: " <<velocity;
    break;
  /*Case 5: CAH*/
  case 5:
    cout << "You just pressed 5. This app demonstrates the CAH principle."<<endl;
    cout << "Please enter value for ADJACENT side: ";
    cin >>adjacent;
    cout << "Please enter value for DEGREE of an ANGLE: ";
    cin >>angle;
	getCos= angle*3.14/180;
    calculateB = adjacent/cos(getCos);  
    cout << "Cosine of 40 degrees is: " <<cos(getCos) <<endl;
    cout << "The result is: " <<calculateB;
    break;
  }
  return 0;
}
