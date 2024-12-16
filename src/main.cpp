#include "Investment.h"
#include "Lock.h"
#include <mutex>
#include <iostream>
#include <memory>

int main() {
    
    std::cout<<"share_ptr";
    std::shared_ptr<Investment> investment = createInvestment();
    investment->showDetails(); 

    std::shared_ptr<Investment> investment2 = investment;
    investment->showDetails(); 
    investment2->showDetails();

    std::cout<<"auto_ptr";
    std::auto_ptr<Investment> autoInvestment = createInvestemntAuto();
    autoInvestment->showDetails();

    std::auto_ptr<Investment> autoInvestment2 = autoInvestment;
    if(autoInvestment.get() == nullptr) {
        std::cout << "auto_ptr behaved accordingly\n";
    }

    std::mutex m;
    {
        Lock lock(&m);
        std::cout << "critical section under lock management\n";
    } 

    return 0;
}