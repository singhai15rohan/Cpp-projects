#include <iostream>

class MyClass {
private:
    int data;
    static int staticData; // Declare a static data member

public:
    MyClass(int value) : data(value) {}

    int getData() {
        return data;
    }

    // Static member function to access the static data member
    static int getStaticData() {
        return staticData;
    }

    static void setStaticData(int value) {
        staticData = value;
    }
};

// Define and initialize the static data member outside the class
int MyClass::staticData = 0;

int main() {
    // Create instances of MyClass
    MyClass obj1(42);
    MyClass obj2(17);

    // Access the data member using instances
    std::cout << "obj1";
}
