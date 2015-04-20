
#include <iostream>


int main(){

  int a[10] = {0,1,2,3,4,5,6,7,8,9};

  for (auto& b : a){
    b += 1;
  }


  for (auto b : a){
    std::cout << b << std::endl;
  }

  return 0;
}