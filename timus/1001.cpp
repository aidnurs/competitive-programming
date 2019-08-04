#include <iostream>
#include "math.h"
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    std::ifstream infile("1001.txt");
    std::vector<int> v;
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    for (int i = v.size()-1; i >=0 ; i--) {
        printf("%.4lf\n", sqrt(v[i]));
    }
    return 0;
}
