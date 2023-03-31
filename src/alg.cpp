// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double step = 1;
  for (int i = 0; i < n; i++) {
    step *= value;
  }
  return step;
}

uint64_t fact(uint16_t n) {
  uint64_t f = 1;
    for (int i = 1; i <= n; i++) {
        f *=i;
    }
    return f;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double e = 1.0;
  for (int i = 1; i <= count; i++) {
    e += calcItem(x, i);
  }
  return e;
}

double sinn(double x, uint16_t count) {
  double s = 0.0;
  for (int i = 0; i < count; i++) {
    s += calcItem(x, 2*i+1) * pown(-1, i);
  }
  return s;
}

double cosn(double x, uint16_t count) {
  double c = 0.0;
  for (int i = 0; i < count; i++) {
    c += calcItem(x, 2*i) * pown(-1, i);
  }
  return c;
}
