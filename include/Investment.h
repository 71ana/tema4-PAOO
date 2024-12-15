#ifndef INVESTMENT_H
#define INVESTMENT_H

#include <memory> 
#include <iostream>

class Investment {
    public:
        virtual ~Investment() = default;
        virtual void showDetails() const = 0;
};

class Stock : public Investment {
    public:
        void showDetails() const override {
            std::cout << "This is a stock investment.\n";
        }
};

inline std::shared_ptr<Investment> createInvestment() {
    return std::shared_ptr<Investment>(new Stock());
}

inline std::auto_ptr<Investment> createInvestemntAuto() {
    return std::auto_ptr<Investment>(new Stock());
}

#endif 