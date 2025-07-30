#include <iostream>

namespace radius_first {
    double radius_set = 3.0;
}

// typedef std::string str;
using str = std::string;

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using radius_first::radius_set;


    const double pi = 3.14159;

    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;

    // Print the results
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "This project uses C++14 standard." << endl;

    cout << "Radius from namespace: " << radius_set << endl;
    cout << "Local radius: " << radius << endl;

    str message = "This project demonstrates area and circumference calculations.";
    cout << message << endl;
    cout << "End of area_circum.cpp" << endl;

    return 0;
}