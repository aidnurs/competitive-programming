#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    int n,m;
    std::cin >> n >> m;
    std::vector<int> v(n,0);
    int c;
    for (int i = 0; i < m; i++) {
        std::cin >> c;
        v[c-1]++;
    }
    for (int i = 0; i < v.size(); i++) {
        printf("%.2lf%%\n", (double)v[i]*100/m);
    }
    return 0;
}
