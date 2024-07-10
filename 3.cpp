#include <iostream>
using namespace std;

class PharmacyStore {
private:
    int storeQuantity;

public:
    // Constructor to initialize store quantity
    PharmacyStore(int quantity) : storeQuantity(quantity) {}

    // Member function to check the order
    void checkOrder(int orderQuantity) {
        if (orderQuantity > storeQuantity) {
            cout << "No enough quantity" << endl;
        } else {
            if (orderQuantity > 16 && storeQuantity <= 40) {
                cout << "You cannot order more than 16 items" << endl;
            } else {
                cout << "Your order is accepted" << endl;
            }
        }
    }
};

int main() {
    int storeQty, orderQty;

    // Input store quantity
    cout << "Enter the quantity of medicine in the store: ";
    cin >> storeQty;

    // Create PharmacyStore object
    PharmacyStore store(storeQty);

    // Input order quantity
    cout << "Enter the order quantity: ";
    cin >> orderQty;

    // Check the order
    store.checkOrder(orderQty);

    return 0;
}
