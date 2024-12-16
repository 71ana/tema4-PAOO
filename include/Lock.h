#ifndef LOCK_H
#define LOCK_H

#include "Uncopyable.h"
#include <memory>
#include <mutex>

class Lock : private Uncopyable {
    public:
        explicit Lock(std::mutex *m);

    private:
        std::shared_ptr<std::mutex> mutexPtr;
};

void unlock(std::mutex* pm);
#endif