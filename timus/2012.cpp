#include <iostream>

int main(int argc, char const *argv[]) {
        int n;
        std::cin >> n;
        if (4*60-(12-n)*45>=0) {
            std::cout << "YES" << '\n';
        }else{
            std::cout << "NO" << '\n';
        }
        return 0;
}
