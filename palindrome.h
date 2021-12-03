#pragma once
//
//    FILE: palindrome.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: Arduino library to do palindrome experiments.
//     URL: https://github.com/RobTillaart/palindrome
//


#include "Arduino.h"

#define PALINDROME_LIB_VERSION         (F("0.1.0"))


class palindrome
{
  public:
    palindrome();

    bool isPalindrome(const char * str);

    int findPalindrome(const char * str, int & position, int & length);
    int findEvenPalindrome(const char * str, int & position, int & length);
    int findOddPalindrome(const char * str, int & position, int & length);

    float palindromePercentage(const char * str);

  private:

};


// -- END OF FILE --


