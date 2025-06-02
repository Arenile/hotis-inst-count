// A C++ program to count till a user provided value.

#include <cstdio>
#include <cstdlib>
#include <cstdint>

int main(int agrc, char* argv[]) {

  // We will count up to this value.
  int count_till = atoi(argv[1]);

  for (int i = 0; i < count_till; i++) {
    // Output
    printf("%d\n", i);
  }

  return 0;
}
