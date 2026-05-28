
[![Arduino CI](https://github.com/RobTillaart/palindrome/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![Arduino-lint](https://github.com/RobTillaart/palindrome/actions/workflows/arduino-lint.yml/badge.svg)](https://github.com/RobTillaart/palindrome/actions/workflows/arduino-lint.yml)
[![JSON check](https://github.com/RobTillaart/palindrome/actions/workflows/jsoncheck.yml/badge.svg)](https://github.com/RobTillaart/palindrome/actions/workflows/jsoncheck.yml)
[![GitHub issues](https://img.shields.io/github/issues/RobTillaart/palindrome.svg)](https://github.com/RobTillaart/palindrome/issues)

[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/palindrome/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/palindrome.svg?maxAge=3600)](https://github.com/RobTillaart/palindrome/releases)
[![PlatformIO Registry](https://badges.registry.platformio.org/packages/robtillaart/library/palindrome.svg)](https://registry.platformio.org/libraries/robtillaart/palindrome)


# Palindrome

Arduino library to do palindrome experiments, including search in char arrays.


## Description

The palindrome library can test if a string is a palindrome and is able to find 
the longest palindrome within a character string.

Writing the library was triggered by a friend Reinier who was proud his name
was a palindrome.

The algorithm of finding a palindrome in a string is based upon the assumption
that every character can be the middle character of a palindrome. 
From there start comparing the chars on the left and the chars right.
As long as they match the palindrome "grows". 

This library is mainly for educational purpose, however other
applications are possible. Please share your ideas.

Feedback as always is welcome.

### tests

The library is tested with an Arduino UNO R3, random string of 1600 characters
(only 4 different characters).

Indicative performance figures, based upon demo.ino.

| function           | time (us) | pos | len | palindrome  |
|:-------------------|:---------:|:---:|:---:|:------------|
| findOddPalindrome  |   4848    | 871 |  11 | TGGCGCGCGGT |
| findEvenPalindrome |   2860    | 163 |   8 | GGGAAGGG    |
| findPalindrome     |   7700    | 871 |  11 | TGGCGCGCGGT |


## Interface

```cpp
#include "palindrome.h"
```

### Constructor

- **palindrome()** constructor.

### Functions

- **int findPalindrome(const char \* str, int & position, int & length)** find the longest palindrome in a string. (first occurrence).
- **int findEvenPalindrome(const char \* str, int & position, int & length)** find the longest palindrome in a string with even length. (first occurrence).
- **int findOddPalindrome(const char \* str, int & position, int & length)** find the longest palindrome in a string with odd length. (first occurrence).
- **bool isPalindrome(const char \* str)** checks if a string is a palindrome.
- **int palindromeCount(const char \* str)** returns the count of matching pairs in a string. 
This is at most the ```length / 2 + 1```.
- **float palindromePercentage(const char \* str)** returns the count as percentage 0.0 .. 100.0 %


## Operation

The examples show the basic working of the functions.


## Questions

- is an empty string a palindrome? (IMHO Yes)


## Future

#### Must

- update documentation

#### Should

- investigate case (in)sensitive flag?
- use the palindrome algorithm to match DNA
  - Adenine + Thymine, Guanine + Cytosine
  - thus ATTGCA.TGCAAT could be seen as an DNA-palindrome (always even)
  
#### Could

- function names?
  - palindromeCount -- symmetryCount?
  - palindromePercentage -- symmetryPercentage?
- improve algorithms
  - merge odd / even find algorithms?
- investigate Print interface?
- investigate palindrome for numbers - radix 2..16 (36?)
  - String(number).toCharArray();
- investigate ignore spaces flag?

#### Wont


## Support

If you appreciate my libraries, you can support the development and maintenance.
Improve the quality of the libraries by providing issues and Pull Requests, or
donate through PayPal or GitHub sponsors.

Thank you,

