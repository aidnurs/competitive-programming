#include <iostream>

int main(int argc, char const *argv[]) {
    int n;
    std::cin >> n;
    if (n>=1&&n<=4) {
        std::cout << "few" << '\n';
    }else if(n>=5&&n<=9){
        std::cout << "several" << '\n';
    }else if(n>=10&&n<=19){
        std::cout << "pack" << '\n';
    }else if(n>=20&&n<=49){
        std::cout << "lots" << '\n';
    }else if(n>=50&&n<=99){
        std::cout << "horde" << '\n';
    }else if(n>=100&&n<=249){
        std::cout << "throng" << '\n';
    }else if(n>=250&&n<=499){
        std::cout << "swarm" << '\n';
    }else if(n>=500&&n<=999){
        std::cout << "zounds" << '\n';
    }else if(n>=1000){
        std::cerr << "legion" << '\n';
    }
    return 0;
}
