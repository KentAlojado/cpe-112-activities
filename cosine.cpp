    #include <iostream>  
    #include<math.h>  
    using namespace std;  
    int main()  
    {   
        double d;
        double degrees;
        cout<<"Enter angle value: ";  
        cin >> d;
        degrees = d*3.14/180;
        cout<<"Cosine of an angle is : "<<cos(degrees);  
        return 0;  
    }  