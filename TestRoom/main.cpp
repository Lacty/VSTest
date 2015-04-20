
#include <iostream>
#include <map>
#include <string>


int main(){
  std::map<int, std::string> map_test;

  int ID_test = 0;

  std::string str_temp;
  str_temp = "Visual Studio is God";

  map_test.insert(std::make_pair(ID_test, str_temp));

  auto it_temp = map_test.find(ID_test);

  std::cout << it_temp->second << std::endl;

  return 0;
}