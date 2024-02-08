//Write a program to accept a coordinate point in an XY coordinate system and determine in 
// which quadrant the coordinate point lies. 
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the fourth quadrant." << endl;
    } else if (x == 0 && y != 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies on the y-axis." << endl;
    } else if (x != 0 && y == 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies on the x-axis." << endl;
    } else {
        cout << "The coordinate point (" << x << "," << y << ") lies at the origin." << endl;
    }

    return 0;
}