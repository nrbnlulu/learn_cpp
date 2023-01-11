#pragma once
#include <iostream>

class MyStaticClass {
public:
  static void print() { std::cout << "Hello from staticlib" << std::endl; };
};
