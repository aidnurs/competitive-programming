#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[]) {
    int n,m;
    std::ifstream file( "1263.txt");
    std::stringstream buffer;
    buffer<<file.rdbuf();
    buffer >> n >> m;
    std::vector<int> v(n,0);
    int c;
    for (int i = 0; i < m; i++) {
        buffer >> c;
        v[c-1]++;
    }
    for (int i = 0; i < v.size(); i++) {
        printf("%.2lf\n", (double)v[i]*100/m);
    }
    return 0;
}
