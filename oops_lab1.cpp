//write a setter and getter program in C++

#include <iostream>
using namespace std;

class Employee {
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    Employee myobj;
    myobj.setSalary(50000);
    cout << myobj.getSalary();
    return 0;
}