#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO
        if(choice < 1 || choice > 4) {
            cout << "Wrong number" << endl;
            cout <<"Enter your choice (1-4):" << endl;
            cin >> choice;
        }
        if(choice ==1) {
            cout <<"Enter the radius of a circle" << endl;
            cin >> radius;
            area = PI * radius * radius;
            cout << "The area of the circle is: " << area << endl;
        } else if(choice == 2) {
            cout << "Enter the length of the rectangle" << endl;
            cin >> height;
            cout << "Enter the width of the rectangle" << endl;
            cin >> width;
            area = height * width;
            cout << "The area of the rectangle is: " << area << endl;
        } else if(choice ==3) {
            cout << "Enter the base of the triangle" << endl;
            cin >> base;
            cout << "Enter the height of the triangle" << endl;
            cin >> height;
            area = base * height * 0.5;
            cout <<"The area of the triangle is: " << area << endl;
        } else if(choice ==4) {
            cout <<"Program stopped" << endl; 
            return 0;
        }
    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;

    return 0;
}
