#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    public:
    Rectangle(){
        length = 0;
        width = 0;
    }
    Rectangle(int a){
        length = a;
    }
    Rectangle(int a,int b){
        length = a;
        width = b;
    }
    Rectangle(Rectangle &obj){
        length = obj.length;
        width = obj.width;
    }
    int getSqArea(){
        return length*length;
    }
    int getRectArea(){
        return length*width;
    }
};
int main(){
    Rectangle obj;
    Rectangle obj2(4);
    Rectangle obj3(4,5);
    cout<<"Area of Rectangle"<<obj.getRectArea()<<endl;
    cout<<"Area of Square"<<obj2.getSqArea()<<endl;
    cout<<"Area of Rectangle"<<obj3.getRectArea()<<endl;
    obj = obj3;
    cout<<"Area of Rectangle"<<obj.getRectArea()<<endl;
}