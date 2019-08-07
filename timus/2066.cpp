#include <iostream>

int main(int argc, char const *argv[]) {
    int a,b,c;
    int tmp=0;
    std::cin >> a >> b >> c;
    if (a>b) {
        if (a>c) {
            tmp=a;
            a=c;
            c=tmp;
        }else{
            tmp=a;
            a=b;
            b=tmp;
        }
    }else{
        if (b>c) {
            tmp=b;
            b=c;
            c=tmp;
            if (a>b) {
                tmp=a;
                a=b;
                b=tmp;
            }
        }
    }
    if (b+c>b*c) {
        std::cout << a-(b+c) << '\n';
    }else{
        std::cout << a -(b*c) << '\n';
    }
    return 0;
}
