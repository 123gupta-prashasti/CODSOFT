#include<iostream>
using namespace std;

int main()
{

int num1;
cout<<"enter first number"<<endl;
cin >> num1;

int num2;
cout<<"enter second number"<<endl;
cin >> num2;

char op;
cout << "Enter operator (+, -, *, %): "; 
cin >> op;

switch(op){
  case '+':
  cout<<"sum of numbers is: "<< num1 + num2 <<endl;
  break;

  case '-':
  cout<<"Difference of numbers is: "<< num1- num2 <<endl;
  break;

  case '*':
  cout<<"product of numbers is: "<< num1 * num2 <<endl;
  break;

  case '%':
  cout<<"remainder of numbers is :"<< num1 % num2 <<endl;
  break;

  default:
  cout<<"Invalid operator!"<<endl;
  
}
return 0;
}

