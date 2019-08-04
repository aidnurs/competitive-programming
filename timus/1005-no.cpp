#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    int n;
    std::cin >> n;
    std::vector<int> v;
    int c;
    for (int i = 0; i < n; i++) {
        std::cin >> c;
        v.push_back(c);
    }
    v.sort(v.begin(),v.end());
    int diff=0;
    if (n%2!=0) {//odd
        
    }else{

    }
    return 0;
}
