#include <iostream>

int main(int argc, char const *argv[]) {
        int a,b;
        std::cin >> a >> b;
        int total= b + a - 1;
        std::cout << total-a << " " << total-b << '\n';
        return 0;
}
