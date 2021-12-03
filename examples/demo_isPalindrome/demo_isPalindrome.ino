//
//    FILE: demo_isPalindrome.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: search the longest palindrome
//    DATE: 2021-12-03
//     URL: https://github.com/RobTillaart/


#include "Arduino.h"
#include "palindrome.h"

palindrome pd;


void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  bool b = pd.isPalindrome("");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("a");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("aa");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("aaa");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("aaaa");
  Serial.println(b ? "true" : "false");
  Serial.println();

  b = pd.isPalindrome("ab");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("aba");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("abaa");
  Serial.println(b ? "true" : "false");
  b = pd.isPalindrome("aabaa");
  Serial.println(b ? "true" : "false");  
  b = pd.isPalindrome("abababa");
  Serial.println(b ? "true" : "false");
  Serial.println();

  Serial.println("done...");
}


void loop()
{
}


// -- END OF FILE --
