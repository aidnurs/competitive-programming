#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  do {
    if (n % 2 == 0) {
      std::cout << 0 << '\n';
    } else {
      std::cout << 1 << '\n';
    }
    n /= 2;
  } while (n > 0);
  return 0;
}
