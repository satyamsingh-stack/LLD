#pragma once
#include "Subject.h"
using namespace std;

class AmazonStock : public Subject {
private:
    vector<shared_ptr<Observer>> observers;
public:
    void attach(shared_ptr<Observer> obs) override;
    void detach(shared_ptr<Observer> obs) override;
    void notify(const string& stock, int quantity) override;
    void updateStock(const string& stock, int quantity);
};
