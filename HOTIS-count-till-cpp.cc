// A C++ program to count till a user provided value.

#include <iostream>
#include <cstdint>

int main(int agrc, char* argv[]) {

  // We will count up to this value.
  int count_till = atoi(argv[1]);

  for (int i = 0; i < count_till; i++) {
    // Output
    std::cout << i <<std::endl;
  }

  return 0;
}
