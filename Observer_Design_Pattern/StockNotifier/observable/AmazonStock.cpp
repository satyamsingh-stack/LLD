#include "AmazonStock.h"
#include <iostream>
using namespace std;

void AmazonStock::attach(shared_ptr<Observer> obs) {
    observers.push_back(obs);
}

void AmazonStock::detach(shared_ptr<Observer> obs) {
    observers.erase(
        remove(observers.begin(), observers.end(), obs),
        observers.end()
    );
}

void AmazonStock::notify(const string& stock, int quantity) {
    for (auto& obs : observers) {
        obs->update("Amazon", stock, quantity);
    }
}

void AmazonStock::updateStock(const string& stock, int quantity) {
    cout << "[Amazon] Stock updated: " << stock << " - " << quantity << " units.\n";
    notify(stock, quantity);
}
