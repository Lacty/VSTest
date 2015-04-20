
#include <iostream>
#include <vector>


int main(){
  std::vector<int> va;

  for (int i = 0; i < 10; ++i) {
    va.emplace_back(i);
    std::cout << va.at(i) << std::endl;
  }

  return 0;
}