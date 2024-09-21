/*Create a program that finds the value of Angle B of the triangle. Angle A measures 20 degrees and side B will be inputted by the user.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){	
float sideA;
float sideB;
float sideC;
float sideCroot;
sideA = 20;
cout << "Enter the value for side B:";
cin >>sideB;
sideC = (sideA*sideA)+(sideB*sideB);
sideCroot = sqrt(sideC);
cout << "The length of side C is " << sideCroot << endl;

	 
	    return 0;

}
