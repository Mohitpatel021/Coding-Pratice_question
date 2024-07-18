#include <iostream>

using namespace std;

int sum_of_digits_after_conversion(int n, int k) {
  if (n == 0) {
    return 0;
  }

  int remainder = n % k;
  int sum_of_digits = remainder;
  n = n / k;

  while (n > 0) {
    remainder = n % k;
    sum_of_digits += remainder;
    n = n / k;
  }

  return sum_of_digits;
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << sum_of_digits_after_conversion(n, k) << endl;
  return 0;
}