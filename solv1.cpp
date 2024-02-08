// Write a program to check whether a given number is even or odd

#include<iostream>
using namespace std;
int main(){
      int num;
      cout<<"enter a number : ";
      cin>>num;

      if(num%2==0){
        cout<<num<<" is a even number";
      }
      else{
        cout<<num<<" is an odd number";
      }
}
