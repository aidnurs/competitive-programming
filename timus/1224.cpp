#include <iostream>

int main(int argc, char const *argv[]) {
    int n,m;
    std::cin >> n >> m;
    if (n==m) {
        std::cout << (n-1)*2 << '\n';
    }else if(n>m){
        std::cout << (m-1)*2 << '\n';
    }else{
        std::cout << (n-1)*2 << '\n';
    }
      return 0;
}
  
