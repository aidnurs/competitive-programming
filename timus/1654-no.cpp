#include <iostream>
#include <string>
#include <stack>

int main(int argc, char const *argv[]) {
    int n,m;
    std::cin >> n >> m;
    int total=2;
    while (n!=1&&m!=1) {
        n--;
        m--;
        total+=2;
    }
    std::cout << total << '\n';
    return 0;
}
