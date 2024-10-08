/* write a program class shape implement it in derived class square,class rectangle and make circle_perimeter as the friend function square class
    class name : shape
    data member: shape_length
                 shape_width
    member function:getWidth()
                    getLength()
                    getperimeter()  -> virtual function 
*/


#include<iostream>
using namespace std;

class shape {
    protected:
    int shape_Width;
    int shape_Length;

    public:
    virtual int perimeter() = 0;
    void getLength(int a) {
        shape_Length = a;
    }
    void getWidth(int b) {
        shape_Width = b;
    }
};

class rectangle : public shape {
    public:
    int perimeter() {
        return 2 * (shape_Width + shape_Length);
    }
};

class square : public shape {
    public:
    int perimeter() {
        return 4 * shape_Length;
    }
    friend int circle_perimeter(square& obj);
};

int circle_perimeter(square& obj) {
    return 2 * 3.14 * obj.shape_Length; 
}

int main() {
    rectangle r;
    square s;
    r.getLength(6);
    r.getWidth(8);
    cout << "Perimeter of rectangle is: " << r.perimeter() << endl;

    s.getLength(5);
    cout << "Perimeter of square is: " << s.perimeter() << endl;
    cout << "Perimeter of circle with same side length as square is: " << circle_perimeter(s) << endl;

    return 0;
}