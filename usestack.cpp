// usestack.cpp - for CS 24 lab practice using stacks
// Judy Li, 3/4/19

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;
    
    //evaluate 8 5 *2 + [(8*5)+2]
    s.push(2);
    s.push(5);
    s.push(8);

    int right = s.top();
    s.pop();
    int left = s.top();
    s.pop();
    s.push(left*right);

    right = s.top();
    s.pop();
    left = s.top();
    s.pop();
    s.push(left + right);


    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
