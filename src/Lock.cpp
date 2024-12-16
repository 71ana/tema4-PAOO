#include "Lock.h"
#include <iostream>

Lock::Lock(std::mutex *m) : mutexPtr(m, unlock) {
    mutexPtr->lock();
    std::cout << "mutex locked\n";
}

void unlock(std::mutex* pm) {
        pm->unlock();
        std::cout << "mutex unlocked\n";
}