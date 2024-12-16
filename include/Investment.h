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
        void showDetails() const override;
};

std::shared_ptr<Investment> createInvestment();
std::auto_ptr<Investment> createInvestemntAuto();

#endif 