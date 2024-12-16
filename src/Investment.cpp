#include "Investment.h"

void  Stock::showDetails() const {
    std::cout << "This is a stock investment.\n";
}

std::shared_ptr<Investment> createInvestment() {
    return std::shared_ptr<Investment>(new Stock());
}

std::auto_ptr<Investment> createInvestemntAuto() {
    return std::auto_ptr<Investment>(new Stock());
}