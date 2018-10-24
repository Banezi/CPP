#ifndef Stack_H
#define Stack_H
// #include <sstream>
// #include <ostream>

template <typename T>
class Stack {
private:
    T* stack;
    int ssize;
    int head;
public:
    Stack();
    Stack(const int &);
    ~Stack();
    bool empty();
    void push(const T &);
    T pop();
    T top();
    int size();
};

#include "Stack_templates.cxx"

#endif
