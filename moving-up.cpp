/*Create a program that will reuire your name, enable you to input your grades, 
then will tell you whether you'll be promoted to second year or not.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){	
char name[100];
float phys;
float gecI;
float gec9;
float gee9;
float gec4;
float cpeA;
float cpeB;
float geeA;
float nstp;
float gwa;
cout << "Enter your name: ";
cin >> name;
cout << "Hello " << name << "! " << endl;
cout << "Please enter your grade in PE: ";	 
cin >> phys;
cout << "Please enter your grade in GEC 1: ";	 
cin >> gecI;
cout << "Please enter your grade in GEC 9: ";	 
cin >> gec9;
cout << "Please enter your grade in GEE 9: ";	 
cin >> gee9;
cout << "Please enter your grade in GEC 4: ";	 
cin >> gec4;
cout << "Please enter your grade in CPE 111: ";	 
cin >> cpeA;
cout << "Please enter your grade in CPE 112: ";	 
cin >> cpeB;
cout << "Please enter your grade in GEE 22: ";	 
cin >> geeA;
cout << "Please enter your grade in NSTP: ";	 
cin >> nstp;
	gwa = (phys+gecI+gec9+gec4+cpeA+cpeB+geeA+nstp+gee9)/9;
cout << endl << "Your general average is: " << gwa;
if (gee9 < 75 || gec4 < 75){ 
cout << endl << "Your grade in GEC 4 is " <<gec4 <<" and GEE 9 is " <<gee9 << ".";
cout <<"Since you fail your pre-requisites, you will be an irregular student.";	
}
else {
cout << endl << "Congratulations, you'll be entering second year as a regular student!";	
}
	    return 0;

}
