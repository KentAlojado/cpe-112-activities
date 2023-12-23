#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
int main() {
  string productName;
  float productPrice;
  cout << "Enter Product Name: ";
  cin >> productName;
  cout << "Enter Product Price: ";
  cin >> productPrice;
  cout << productName <<" price is: " <<productPrice <<endl;
  for (int i=1;i<=5;++i){
  	
		  	productPrice = productPrice - (productPrice*.12);
			cout << "Price after above week is: " <<productPrice <<endl;
			
	}  
    return 0;
}