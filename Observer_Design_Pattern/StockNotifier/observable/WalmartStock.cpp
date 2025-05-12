#include "WalmartStock.h"
#include <iostream>
using namespace std;

void WalmartStock::attach(std::shared_ptr<Observer> obs) {
    observers.push_back(obs);
}

void WalmartStock::detach(std::shared_ptr<Observer> obs) {
    observers.erase(
        std::remove(observers.begin(), observers.end(), obs),
        observers.end()
    );
}

void WalmartStock::notify(const std::string& stock, int quantity) {
    for (auto& obs : observers) {
        obs->update("Walmart", stock, quantity);
    }
}

void WalmartStock::updateStock(const std::string& stock, int quantity) {
    std::cout << "[Walmart] Stock updated: " << stock << " - " << quantity << " units.\n";
    notify(stock, quantity);
}
