#include <iostream>

int main(int argc, char **argv) {

  double a[1024], b[1024], c[1024];

  // Setting data up
  for (size_t i = 0; i<1024; i++) {
    a[i] = double(i)/10.0;
    b[i] = a[i] * 2.0;
  }

  // In principle, vectorizable loop 
  for (size_t i = 0; i<1024; i++) {
    c[i] = a[i] + b[i];
  }

  for (size_t i = 0; i<1024; i++) {
    std::cout << "c[" << i << "] = " << c[i] << std::endl;
  }

  return 0;
}
