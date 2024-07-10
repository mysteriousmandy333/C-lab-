#include <iostream>
using namespace std;

class DISTANCE {
private:
    int feet;
    int inches;

public:
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        normalize(); 
    }

    void outputDistance() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

   
    DISTANCE addDistance(const DISTANCE& d) const {
        DISTANCE temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        temp.normalize(); 
        return temp;
    }

private:
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
};

int main() {
    DISTANCE d1, d2, d3;

    cout << "Enter the first distance:" << endl;
    d1.inputDistance();

    cout << "Enter the second distance:" << endl;
    d2.inputDistance();

    
    d3 = d1.addDistance(d2);

    
    cout << "The sum of the distances is: ";
    d3.outputDistance();

    return 0;
}
