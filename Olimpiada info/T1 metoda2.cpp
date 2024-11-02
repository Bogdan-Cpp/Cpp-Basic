#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> p = {1, 12, 8};
    std::vector<int> n = {3, 2};
    std::vector<int> c = {10};
    
    std::sort(p.begin(), p.end());
    std::sort(n.begin(), n.end());
    std::sort(c.begin(), c.end());

    int maxim1 = p[p.size() - 1];
    int maxim2 = n[n.size() - 1];
    int maxim3 = c[c.size() - 1];

    std::cout << maxim3 << " " << maxim1 << " " << maxim2;

    std::cout << std::endl;
    system("pause");
    return 0;
}