#include <iostream>
using namespace std;

int main() {
	float sum = 0;
	float nomave;
	int nom;
    for (int i=0;i<=9;i++){
     cout <<"Enter number " << i+1 <<":";
	 cin >>nom;	
	 sum+=nom;
	 nomave=sum/10;
	}
    cout <<"The sum is " <<sum <<" and the average is " <<nomave <<".";
    
    return 0;
}
