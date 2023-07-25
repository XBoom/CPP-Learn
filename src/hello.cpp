#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

template<typename T>
    string type_name() {
        string name = typeid(T).name();
        return name;
}

int main() {
    int num = 42;
    double pi = 3.14159;
    char letter = 'A';
    bool is_true = true;
    auto name = 1e6+7;

    cout << "Type of num: " << type_name<decltype(num)>() << endl;
    cout << "Type of pi: " << type_name<decltype(pi)>() << endl;
    cout << "Type of letter: " << type_name<decltype(letter)>() << endl;
    cout << "Type of is_true: " << type_name<decltype(is_true)>() << endl;
    cout << "Type of name: " << type_name<decltype(name)>() << endl;

    return 0;
}
