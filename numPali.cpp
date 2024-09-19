#include "numPali.h"
#include <iostream>
using namespace std;


long reverseNums (long num) {
  long rNums = 0;
  while (num > 0) {
    long lastNum  = num % 10;
    rNums = rNums * 10 + lastNum;
    num = num / 10;
  }
  return rNums;
}


bool checkPali(long num) {
  return num == reverseNums(num);
}


void findPali(long num) {
  int count = 0;
  while(num <= 4294967295) {
    long rNums = reverseNums(num);
    num = num + rNums;
    count++;

    if (checkPali(num)) {
      cout << count << " " << num << endl;
      return;
    }
    if (num > 4294967295) {
      cout << "Palindrome exceeds parameters" << endl;
      return;
    }
  }
}
