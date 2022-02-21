#include<iostream>
using namespace std;

int main(){
    int i;
    int n;
    int negativeElement;
    int num;
    int arr[num];

    cout<<"Enter the size of an array : ";
    cin>>num;

cout<<"Enter the elements of an array  : ";
    for(i = 0; i < num; i++){
        cin>>arr[i];
    }

    cout<<"All negative Elements of an array  are : ";

    for( i = 0 ; i < num ; i++){
        if (arr[i] < 0){
            cout<<arr[i];
        }
    }

    return 0;
}