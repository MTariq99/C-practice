#include<iostream>
using namespace std;

int main(){
int num;
int sum  ;
int i = 1  ;

cout<<"Enter a Number : ";
cin>>num;


do{
    sum = sum + i;
        i++;


}while(i <= num );

    cout<<"the sum of all values are : "<<sum;


return 0;

}