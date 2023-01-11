#include "SampleLib.h"
#include "mylib/somestaticlib.h"

int main(int argc, char **argv) {
  Sample::sayHi("Nir");
  MyStaticClass::print();
  return 0;
}
