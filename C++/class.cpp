#include <iostream>

class Car{
  public: 
     std::string brand;
     int year;

     void displayInfo(){
      std::cout  << "Thi is a class " ;
     };
};

int main(){
  Car myCar;
  myCar.displayInfo();
  return 0;
}