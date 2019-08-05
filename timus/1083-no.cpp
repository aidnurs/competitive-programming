#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    int n;
    std::string str;
    std::cin >> n >> str;
    int size=str.size();
    int total=1;
    if (n%2!=0) {
        while (n!=n%size) {
            total*=n;
            n-=size;
        }
    }else{
        while (n!=size) {
            total*=n;
            n-=size;
        }
    }
    std::cout << total << '\n';
    return 0;
}
