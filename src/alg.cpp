// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
        b = b - a;
      }
    }
    return a;
  }
