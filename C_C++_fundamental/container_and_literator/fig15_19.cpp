//
// Created by zwpdbh on 2018/9/1.
//

#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

template <typename T>
void pushElements(T &stackRef);

template <typename T>
void postElements(T &stackRef);

int main() {
    stack<int> intDequeStack;
    stack<int, vector<int> > intVectorStack;
    stack<int, list<int> > intListStack;
}

template <typename T>
void pushElements(T &stackRef) {
    for (int i = 0; i <10; ++i) {
        stackRef.push(i);
        cout << stackRef.top() << ' ';
    }
}

template <typename T>
void popElement(T &stackRef) {
    while (!stackRef.empty()) {
        count << stackRef.top() << ' ';
        stackRef.pop();
    }
}