
[![Arduino CI](https://github.com/RobTillaart/palindrome/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![Arduino-lint](https://github.com/RobTillaart/palindrome/actions/workflows/arduino-lint.yml/badge.svg)](https://github.com/RobTillaart/palindrome/actions/workflows/arduino-lint.yml)
[![JSON check](https://github.com/RobTillaart/palindrome/actions/workflows/jsoncheck.yml/badge.svg)](https://github.com/RobTillaart/palindrome/actions/workflows/jsoncheck.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/palindrome/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/palindrome.svg?maxAge=3600)](https://github.com/RobTillaart/palindrome/releases)


# Palindrome

Library for palindrome search


## Description

The palindrome library can test if a string is a palindrome and is able to find 
the longest palindrome within a character string.

The library is tested with an Arduino UNO, random string of 1600 characters.


## Interface

- **palindrome()** constructor.
- **int findPalindrome(const char \* str, int & position, int & length)**
- **int findEvenPalindrome(const char \* str, int & position, int & length)**
- **int findOddPalindrome(const char \* str, int & position, int & length)**
- **bool isPalindrome(const char \* str)**
- **float palindromePercentage(const char \* str)**


## Operation

The examples show the basic working of the functions.


## Future

- update documentation
- improve algorithms
- investigate Print interface?
- investigate palindrome for numbers - radix 2..16 (36?)


