#pragma once
#include <iostream>

class SingletonClass {
public:
    // Static member function to access the SingletonClass instance
    static SingletonClass& getInstance();

private:
    // Private constructor to prevent external instantiation
    SingletonClass() {}

    // Private destructor to prevent deletion of the instance
    ~SingletonClass() {}

    // Make sure copy constructor and assignment operator are not accessible
    SingletonClass(const SingletonClass&) = delete;
    SingletonClass& operator=(const SingletonClass&) = delete;
};