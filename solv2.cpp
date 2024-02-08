//Write a program to check whether a given number is positive or negative.
 #include<iostream>
 using namespace std;
 int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    if(num>0){
        cout<<num<<" : positive number ";
    }
    else {
        cout<<num<<" : negative number ";
    }
 }