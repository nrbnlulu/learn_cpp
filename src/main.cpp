#include "SampleLib.h"
#include "mylib/somestaticlib.h"
#include "shared/substractlib/substract.h"

#include <iostream>

int main(int argc, char **argv) {
  Sample::sayHi("Nir");
  MyStaticClass::print();
  std::cout << Substract::substract(55, 22) << std::endl;
  return 0;
}
