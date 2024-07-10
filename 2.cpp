#include <iostream>
using namespace std;

class NumberSet {
private:
    int num1, num2, num3;

public:
    
    void inputNumbers() {
        cout << "Enter three numbers:" << endl;
        cin >> num1 >> num2 >> num3;
    }

    
    int findMax() {
        int max = num1;
        if (num2 > max) {
            max = num2;
        }
        if (num3 > max) {
            max = num3;
        }
        return max;
    }

   
    int findMin() {
        int min = num1;
        if (num2 < min) {
            min = num2;
        }
        if (num3 < min) {
            min = num3;
        }
        return min;
    }
};

int main() {
    NumberSet numbers;

    numbers.inputNumbers();

    cout << "Maximum number: " << numbers.findMax() << endl;
    cout << "Minimum number: " << numbers.findMin() << endl;

    return 0;
}
