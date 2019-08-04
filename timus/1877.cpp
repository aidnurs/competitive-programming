#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    std::string code1;
    std::string code2;
    std::cin >> code1 >> code2;
    int n1=stoi(code1);
    int n2=stoi(code2);
    if (n1%2==0||n2%2!=0) {
        std::cout << "yes" << '\n';
    }else{
        std::cout << "no" << '\n';
    }
    return 0;
}
