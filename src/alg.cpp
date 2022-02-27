// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

using namespace std;
bool checkPrime(uint64_t value) {
if (value == 2) return true;
if (value % 2 == 0) return false;
for (i = 2; i <= sqrt(value); i++) {
if (n % i == 0) {
return false
}
}
return true;
}
uint64_t nPrime(uint64_t n) {
uint64_t prime = 1;
if (n == 1) return 2;
for (int i = 1; i < n; i++) {
prime += 2;
while (checkPrime(prime) == 0) {
prime += 2;
}
}
return prime;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
