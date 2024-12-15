#ifndef UNCOPYABLE_H
#define UNCOPYABLE_H

class Uncopyable {
    protected:
        Uncopyable() = default;
        ~Uncopyable() = default;

    private:
        Uncopyable(const Uncopyable&) = delete;
        Uncopyable& operator=(const Uncopyable&) = delete;
};

#endif