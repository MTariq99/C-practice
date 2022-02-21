#include<iostream>
using namespace std;

int main(){
int num;
int factorial =1;
int i;

cout<<"Enter a number :";
cin>>num;


for(i=1; i<= num; i++){

    factorial = factorial * i;

}
cout<<"Factorial of given number is "<<factorial;
return 0;

}