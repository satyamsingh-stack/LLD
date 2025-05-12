#pragma once
#include "Observer.h"
#include <string>
using namespace std;

class Customer : public Observer {
private:
    string name;
public:
    Customer(const string& name);
    void update(const string& source, const string& stock, int quantity) override;
};
