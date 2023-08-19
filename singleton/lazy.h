#pragma once
#include <iostream>

class Singleton {
public:
    static Singleton& instance() {
        static Singleton singleton;
        return singleton;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    void show() {
        std::cout << this << std::endl;
    }

private:
    Singleton() = default;
    ~Singleton() = default;
};