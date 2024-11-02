#include <iostream>
#include <vector>

int main(){
    std::vector<int> p = {1, 12, 8};
    std::vector<int> n = {3, 2};
    std::vector<int> c = {10};
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
   
    for(int i = 0; i < p.size(); i++){
        for(int j = 0; j < p.size() - i - 1; j++){
            if(p[j] > p[j + 1]){
               temp1 = p[j];
               p[j] = p[j + 1];
               p[j + 1] = temp1;
            }
        }
    }
    for(int a = 0; a < n.size(); a++){
        for(int b = 0; b < n.size() - a - 1; b++){
            if(n[b] > n[b + 1]){
               temp2 = n[b];
               n[b] = n[b + 1];
               n[b + 1] = temp2;
            }
        }
    }
    for(int x = 0; x < c.size(); x++){
        for(int y = 0; y < c.size() - x - 1; y++){
            if(c[y] > c[y + 1]){
               temp3 = c[y];
               c[y] = c[y + 1];
               c[y + 1] = temp3;
            }
        }
    }

    int maxim1 = p[p.size() - 1];
    int maxim2 = n[n.size() - 1];
    int maxim3 = c[c.size() - 1];

    std::cout << maxim3 << " " << maxim1 << " " << maxim2;

    std::cout << std::endl;
    system("pause");
    return 0;
}