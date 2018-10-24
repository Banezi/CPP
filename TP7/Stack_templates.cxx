#include <iostream>

template <typename T>
Stack<T>::Stack(){
    ssize = 0;
    stack = NULL;
    head = -1;
}

template <typename T>
Stack<T>::Stack(const int & number_elt){
    if(number_elt>0){
        ssize = number_elt;
        stack = new T[number_elt];
        head = -1;
    }
    else{
        throw std::invalid_argument("Impossible d'initialiser la pile avec un nombre d'éléments negatifs ou nul");
    }
}

template <typename T>
Stack<T>::~Stack(){
    if (stack) {
        delete[] stack;
    }
}

template <typename T>
bool Stack<T>::empty(){
    return head == -1;
}

template <typename T>
void Stack<T>::push(const T & nouveau){
    if(head>=ssize)
        std::cout << "La pile est pleine" << std::endl;
    else{
        head++;
        stack[head] = nouveau;
    }
}

template <typename T>
T Stack<T>::pop(){
    T elt;
    if(head<0)
        throw std::invalid_argument("Impossible de supprimer un élément la pile est déjà vide");
        //std::cout << "Impossible de supprimer un élément la pile est déjà vide" << std::endl;
    else{
        T elt;
        elt = stack[head];
        head--;
    }
    
    return elt;
}

template <typename T>
T Stack<T>::top(){
    return stack[head];
}

template <typename T>
int Stack<T>::size(){
    return (head+1);
}