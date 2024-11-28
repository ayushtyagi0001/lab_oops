// Write a function for hierchichal inhertance

#include<iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout<<"Enter name:";
        cin>>name;
    }
    void display(){
    cout<<"Name :"<<name<<endl;
    }
};
class Sport:public Person{
    int m = 50;
    public:
    void display(){
        Person::display();
        cout<<m<<endl;
    }
};
class Student: public Person{
    int n = 100;
    public:
    void display(){
        Person::display();
        cout<<n<<endl;
    }
};
class Result:public Sport,public Student{
    int x=150;
    public:
    void display(){
        Sport::read();
        Student::read();
        Sport::display();
        Student::display();
        cout<<x<<endl;
    }
};
int main(){
    Sport sp;
    Student st;
    Result rs;
    sp.read();
    sp.display();
    st.read();
    st.display();
    rs.display();
    return 0;
}