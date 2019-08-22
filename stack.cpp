#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include "limits.h"

using namespace std;

class MinStack {
private:
    std::vector<int> v;
public:
    MinStack() {

    }

    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v[v.size()];
    }

    int getMin() {
        int min=INT_MAX;
        for (int i = 0; i < v.size(); i++) {
            if (v[i]<min) {
                min=v[i];
            }
        }
        return min;
    }
};

int main(int argc, char const *argv[]) {
    MinStack* obj = new MinStack();
    obj->push(1);
    obj->push(-1);
    obj->push(-1);
    obj->push(-12);
    obj->push(2);
    obj->pop();
    int min=obj->getMin();
    std::cout << min << '\n';
    // minStack.getMin();   --> Returns -3.
    // minStack.pop();
    // minStack.top();      --> Returns 0.
    // minStack.getMin();   --> Returns -2.
    return 0;
}
