#include <iostream>
#include <stdexcept>
using namespace std;
double calculator(double a, double b, string operation) {
    if (operation == "add")
        return a + b;
    else if (operation == "subtract")
        return a - b;
    else if (operation == "multiply")
        return a * b;
    else if (operation == "divide") {
        if (b == 0) throw invalid_argument("Cannot divide by zero");
        return a / b;
    } else {
        throw invalid_argument("Unsupported operation");
    }
}
int main() {
    try {
        cout << "Test 1 (Add): " << calculator(5, 3, "add") << endl;       // Expected: 8
        cout << "Test 2 (Divide): " << calculator(10, 2, "divide") << endl; // Expected: 5
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
