#pragma once

#include <iostream>

class Singleton {
public:
    static Singleton* instance() {
        return singleton;
    }

    static void destrory() {
        if (singleton) {
            delete singleton;
            singleton = nullptr; 
        }
    }
    
    void show() {
        std::cout << this << std::endl;
    }

private:
    Singleton() = default;
    ~Singleton() = default;
private:
    static Singleton* singleton;
};

Singleton* Singleton::singleton = new Singleton();