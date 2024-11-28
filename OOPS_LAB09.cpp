#include <iostream>
using namespace std;

template <class T>
class Test {
private:
    T answer;

public:
    Test(T n) {
        answer = n;
        cout << "Inside constructor" << endl;
    }

    T getNumber() {
        return answer;
    }
};

int main() {
    Test<int> numberInt(10);
    cout << "Integer number is: " << numberInt.getNumber() << endl;
    Test<float> numberFloat(12.29);  
    cout << "Float number is: " << numberFloat.getNumber() << endl;
    Test<char> numberChar('a');  
    cout << "Character is: " << numberChar.getNumber() << endl;
    Test <double> numberDouble(1243323525);
    cout << "double number is:" << numberDouble.getNumber()<<endl;
    Test <bool> numberBool(true);
    cout << "boolean number is:" << numberBool.getNumber()<<endl;
    return 0;
}
