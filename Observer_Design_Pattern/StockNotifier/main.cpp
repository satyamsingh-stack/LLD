#include "observer/Customer.h"
#include "observable/AmazonStock.h"
#include "observable/WalmartStock.h"
using namespace std;

int main() {
    auto amazon = make_shared<AmazonStock>();
    auto walmart = make_shared<WalmartStock>();

    auto alice = make_shared<Customer>("Alice");
    auto bob = make_shared<Customer>("Bob");

    amazon->attach(alice);
    walmart->attach(alice);
    walmart->attach(bob);

    amazon->updateStock("Laptop", 20);
    walmart->updateStock("Smartphone", 15);

    walmart->detach(bob);
    walmart->updateStock("Headphones", 10);

    return 0;
}
