#A Python program to count till a user provided value.

import sys

# We will count up to this value.
count_till = int(sys.argv[1])

for i in range(count_till):
  # Output
  print(i)
