#include <iostream>
using namespace std;

#include <cstring>
int main(){
  char x;
  char name[10];
  std::cout << "Please enter a character: \n";
  cin.get(x);
  cin.ignore(); // Ignore the leftover newline
  std::cout << "Please enter your name: ";
  cin.getline(name, 10);
  cout.write(name, std::strlen(name));
  return 0;
}