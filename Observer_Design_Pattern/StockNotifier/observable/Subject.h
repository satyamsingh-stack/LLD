#pragma once
#include <memory>
#include <string>
#include "../observer/Observer.h"
#include <vector>
#include <algorithm>
using namespace std;

class Subject {
public:
    virtual void attach(shared_ptr<Observer> obs) = 0;
    virtual void detach(shared_ptr<Observer> obs) = 0;
    virtual void notify(const string& stock, int quantity) = 0;
    virtual ~Subject() = default;
};
