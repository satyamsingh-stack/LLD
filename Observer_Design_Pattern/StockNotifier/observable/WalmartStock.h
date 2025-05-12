#pragma once
#include "Subject.h"
using namespace std;

class WalmartStock : public Subject {
private:
    std::vector<std::shared_ptr<Observer>> observers;
public:
    void attach(std::shared_ptr<Observer> obs) override;
    void detach(std::shared_ptr<Observer> obs) override;
    void notify(const std::string& stock, int quantity) override;
    void updateStock(const std::string& stock, int quantity);
};
