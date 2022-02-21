#include<iostream>
using namespace std;

int main(){

int m1;
int m2;
int matrix[2][3];




for(m1=0; m1< 2; m1++){

for(m2 = 0 ; m2 < 3 ; m2++){

cout<<"Enter the interger : ";
cin>>matrix[m1][m2];

}

}

cout<<endl;

for(m1 =0 ; m1 < 2 ; m1++){

    for(m2 = 0 ; m2 < 3 ; m2++){
        cout<< "your entered intergers are  : ";
        cout<<matrix[m1][m2];

        cout<<endl;
    }


}

return 0;


}