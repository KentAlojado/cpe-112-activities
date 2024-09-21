#include <iostream>
#include <limits>
using namespace std;
 
int main() {
  float memberWeek;
  float memberPrice;
  cout << "Weeks being delayed: ";
    while (!(cin >> memberWeek) || memberWeek < 1 || memberWeek > 6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number (1-6): ";
}  
  memberPrice = 50;
  for (int i=1;i<=memberWeek;i++){ 	
		  	memberPrice = memberPrice - (memberPrice*0.15);
			cout << "Price after week "<<i << " is "<<memberPrice <<endl;
			
	}  
    return 0;
}