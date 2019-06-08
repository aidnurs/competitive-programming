#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
        unsigned long long arr[4];
        for (int i = 0; i < 4; i++) {
                std::cin >> arr[i];
        }
        for (int i = 3; i >= 0; i--) {
                std::cout << std::fixed;
                std::cout << std::setprecision(4);
                std::cout << sqrt(arr[i]) << '\n';
        }
        return 0;
}
