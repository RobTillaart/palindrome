#pragma once
//
//    FILE: palindrome.cpp
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: Arduino library to do palindrome experiments.
//     URL: https://github.com/RobTillaart/palindrome
//
//  HISTORY:
//  0.1.0  2021-12-02  initial version


#include "palindrome.h"


palindrome::palindrome()
{
}


bool palindrome::isPalindrome(const char * str)
{
  return false;
}


int palindrome::findPalindrome(const char * str, int & position, int & length)
{
  int posOdd = 0, lengthOdd = 0;
  int posEven = 0, lengthEven = 0;
  findOddPalindrome(str, posOdd, lengthOdd);
  findEvenPalindrome(str, posEven, lengthEven);
  if (lengthEven > lengthOdd)
  {
    position = posEven;
    length = lengthEven;
    return length;
  }
  position = posOdd;
  length = lengthOdd;
  return length;
}


int palindrome::findEvenPalindrome(const char * str, int & position, int & length)
{
  int sl = strlen(str);
  if (sl == 0) return -1;

  int newpos = 0;
  int newlen = 1;
  for (int i = 0; i < sl; i++)
  {
    if (str[i] != str[i + 1]) continue;
    int j = i - 1;
    int k = i + 2;
    while (0 <= j && k < sl)
    {
      if (str[j] != str[k]) break;
      j--;
      k++;
    }
    int pos = j + 1;
    int len = k - j - 1;
    if (len > newlen)
    {
      newlen = len;
      newpos = pos;
    }
  }
  position = newpos;
  length = newlen;
  return length;
}


int palindrome::findOddPalindrome(const char * str, int & position, int & length)
{
  int sl = strlen(str);
  if (sl == 0) return -1;

  int newpos = 0;
  int newlen = 1;
  for (int i = 1; i < sl; i++)
  {
    int j = i - 1;
    int k = i + 1;
    while (0 <= j && k < sl)
    {
      if (str[j] != str[k]) break;
      j--;
      k++;
    }
    int pos = j + 1;
    int len = k - j - 1;
    if (len > newlen)
    {
      newlen = len;
      newpos = pos;
    }
  }
  position = newpos;
  length = newlen;
  return length;
}


float palindrome::palindromePercentage(const char * str)
{
  return 0;
}




// -- END OF FILE --

