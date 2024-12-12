#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
    
    int num1;
    int num2;
    
    cout<<"Enter your first number = ";
    cin >> num1 ;
    
    cout<<"Enter your second number = ";
    cin >> num2 ;
    
    cout << endl;
    cout << "num 1 is = "<<num1 << endl;
    cout << "num 2 is = "<< num2  << endl ;
    cout<<endl;
    
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);
    
    float sum = num1+num2; 
    cout <<setw(30)<<"summation is = "<<sum ;
    cout<<endl;
    // <<setw(30) used for line management.
    // cout<<noshowpoint; use only when you want to hide point.
    float sub = num1-num2; 
    cout <<setw(30)<<"subtraction is = "<<sub ;
    cout<<endl;
    
    float mul = num1*num2; 
    cout <<setw(30)<<"multiplication is = "<<mul ;
    cout<<endl;
   
    double divide = (float)num1/num2; 
    cout <<setw(30)<<"devidation is = "<<divide ;
    cout<<endl;
    
    float rem = num1%num2; 
    cout <<setw(30)<<"reminder is = "<<rem ;
    cout<<endl;
   
   return 0;
   

   
}
