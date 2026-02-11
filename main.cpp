#include <iostream>

// Forward declarations
class Class1;
class Class2;

// Include implementation files directly (temporary, simple)
#include "class1.cpp"
#include "class2.cpp"

int main() {
    Class1 c1;
    Class2 c2;

    c1.sayHello();
    c2.sayHello();

    return 0;
}
