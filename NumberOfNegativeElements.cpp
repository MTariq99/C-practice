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

cout<<"Enter the elements of array : ";
    for(i = 0; i < num; i++){
        cin>>arr[i];
    }
    for( i = 0 ; i < num ; i++){
        if (arr[i] < 0){
            n++;
        }
    }
    cout<<"the total counting of negative elements ara : "<<n;

    return 0;
}