// Write a program to check whether an alphabet is a vowel or consonant.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter an lowercase alphabet : ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<" Vowel ";
    }
    else{
        cout<<" Consonant ";
    }
}