#include <iostream>
#include <vector>
#include <numeric>

int main() {

   std::vector<int> v;
for(int i = 1; i <= 123; i++) {
       v.push_back(i);
   }
    auto k = std::accumulate(v.begin(), v.end(), 0);
    //std::accumulate is better than for loop
    std::cout << k << std::endl;
    return 0;
}
