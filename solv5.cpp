#include <iostream>
using namespace std;

int main() {
    int math, phy, che;
    cout << "Enter marks in Mathematics: ";
    cin >> math;

    cout << "Enter marks in Physics: ";
    cin >> phy;

    cout << "Enter marks in Chemistry: ";
    cin >> che;

    if (math >= 65 && phy >= 55 && che>= 50 && (math+ phy + che >= 190 || math + phy >= 140)) {
        cout << "Congratulations! You are eligible for admission.\n";
    } else {
        cout << "Sorry, you are not eligible for admission.\n";
    }
    
    return 0;
}