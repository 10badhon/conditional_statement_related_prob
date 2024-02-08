// Write a program to check whether a triangle is Equilateral, Isosceles or Scalene. 
#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    
    cout << "Enter the length of side 1: ";
    cin >> s1;
    cout << "Enter the length of side 2: ";
    cin >> s2;
    cout << "Enter the length of side 3: ";
    cin >> s3;
    
    if (s1 == s2 && s2 == s3) {
        cout << "Triangle is Equilateral." << endl;
    }
  
    else if (s1 == s2 || s1 == s3 || s2 == s3) {
        cout << "Triangle is Isosceles." << endl;
    }
 
    else {
        cout << "Triangle is Scalene." << endl;
    }
    
    return 0;
}