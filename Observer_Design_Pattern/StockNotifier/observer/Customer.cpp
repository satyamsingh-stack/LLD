#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(const string& name) : name(name) {}

void Customer::update(const string& source, const string& stock, int quantity) {
    cout << "[Notification for " << name << "] " << source
              << " has " << quantity << " units of " << stock << " in stock.\n";
}
