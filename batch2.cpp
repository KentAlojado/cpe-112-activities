#include <iostream>
using namespace std;

int main() {
	float nomA;
	float nomB;
	float nomC;
	float nomD;
	float nomE;
	float sum;
	float ave;
	cout <<"Enter number 1: ";
	cin >> nomA;
	cout <<"Enter number 2: ";
	cin >> nomB;
	cout <<"Enter number 3: ";
	cin >> nomC;
	cout <<"Enter number 4: ";
	cin >> nomD;
	cout <<"Enter number 5: ";
	cin >> nomE;
	sum = nomA+nomB+nomC+nomD+nomE;
	ave = sum/5;
	cout <<"The sum of five numbers is " <<sum <<" and the average is " <<ave <<".";
}
