#include <iostream>
using namespace std;

int main() {
	int nom;
	cout <<"Enter desired number: ";
	cin >> nom;
	for (int i=1;i<=nom;i++)
					cout << "Number " <<i <<" cube of " <<i <<" is " << i*i*i <<endl;
    return 0;
}
