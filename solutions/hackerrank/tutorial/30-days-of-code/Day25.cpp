// Day 25: Running Time and Complexity
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;

  cin >> t;

  for (int i = 0; i < t; i++) {
      int n;
      cin >> n;

      if( n >= 2 && isPrime(n)) {
          cout << "Prime" << endl;
      } else {
          cout << "Not prime" << endl;
      }
  }
  return 0;
}
