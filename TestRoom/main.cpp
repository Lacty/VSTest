
#include <iostream>
#include <vector>


int main(){
  std::vector<int> va;

  va.emplace_back(10);

  std::cout << va.at(0) << std::endl;

  return 0;
}