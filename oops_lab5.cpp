#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    static const float PI; 
        static int count;      

public:
    Circle() : radius(0) {
        cout << "Object count: " << ++count << endl;
    }

    Circle(float r) : radius(r) {
        cout << "Object count: " << ++count << endl;
    }

    float getArea() const {
        return PI * radius * radius;
    }

    float getCircumference() const {
        return 2 * PI * radius;
    }

    static int getCount() {
        return count;
    }
};

const float Circle::PI = 3.14159;
int Circle::count = 0;

int main() {
    Circle obj1(5.0); 
        Circle obj2(10.0); 

    cout << "Object 1 - Radius: 5.0" << endl;
    cout << "Area: " << obj1.getArea() << endl;
    cout << "Circumference: " << obj1.getCircumference() << endl;

    cout << "Object 2 - Radius: 10.0" << endl;
    cout << "Area: " << obj2.getArea() << endl;
    cout << "Circumference: " << obj2.getCircumference() << endl;

    cout << "Total number of objects created: " << Circle::getCount() << endl;

    return 0;
}