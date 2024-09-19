#ifndef NUMPALI_H
#define NUMPALI_H

/*
 *Function: reverseNums
 *Usage: gives the reverse of a "sequence" of nums
 *------------------------------------------------
 *The fucntion takes a long int, num, and returns
 *the reverse of the num. For example, the num
 *"123" would be "321" after the reverseNums func.
 *It continuously runs using a while loop because
 *the nums are not consistently the same length.
 *To get the reverse you divide the num by 10 to
 *get the remainder, which is the last digit. Then,
 *rebuild the number backwards. You still have to
 *remove the last digit by dividing it by 10.
 */

long reverseNums (long num);

/*
 *Function: checkPali
 *Usage: checks if num is a palindrome
 *------------------------------------
 *This function takes a long integer as
 *the input and checks if the number is
 *a palindrome. It uses a bool to check
 *if the num is equal to the reversed
 *num and returns true or false.
 */

bool checkPali(long num);

/*
 *Function: findPali
 *Usage: finds the palindrome of a num
 *------------------------------------
 *The function takes a long integer as
 *the input and counts the number of
 *times the number is reversed and added.
 *It loops through a while loop until
 *the num is a palindrome.There is a
 *top limit value of 4,294,967,295.
 */

void findPali(long num);

  #endif
