// Write a program to find whether a given year is a leap year or not.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a year : ";
    cin>>num;
    
    if((num%4==0) && (num%100!=0) || (num%400==0)){
        cout<<" leap year ";
    }
    else {
        cout<<" its not leap year";
    }
}