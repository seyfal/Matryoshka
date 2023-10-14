# Matryoshka

Matryoshka is a simplistic console program that generates a representation of the iconic Russian nesting dolls, known as Matryoshka dolls, based on user input.

## Overview

This program prompts the user for the number of dolls they'd like to see. It then generates a depiction of the dolls, from the largest to the smallest, each nested within the other. 

## Program Execution Steps

1. **Initialization**: Start by prompting the user for the number of dolls they'd like to generate.

2. **Generating Top Sections**:
   - Loop over the number of dolls. For each doll, print a series of forward slashes (`/`) representing the top of the doll.
   - For positioning, calculate the required spaces before each forward slash. This is dependent on the doll number and the line number. Use either loops or `setw()` for this.

3. **Generating Bottom Sections**:
   - Within the same loop, print the bottom half of the doll using backslashes (`\`).
   - Just as before, calculate the required spaces to position the backslashes correctly.

4. **Final Touches**:
   - To better delineate between dolls, print a series of dashes (`-`) after each complete doll.
   - Ensure that the entire representation scales correctly based on user input.

## Getting Started

### Prerequisites
- C++ Compiler (e.g., `g++`)
- Basic understanding of loops and conditional statements in C++

### Installation & Execution

1. Clone or download the repository to your system.
2. Navigate to the directory containing the program's source code.
3. Compile the source code:
```
g++ -o Matryoshka main.cpp
```
4. Execute the program:
```
./Matryoshka
```
5. Follow the on-screen prompts to generate your Matryoshka dolls.

## Conclusion

Matryoshka offers a delightful visual representation of a cultural icon, translating the intricate art of nesting dolls into lines of code. Dive into the challenge, and enjoy the process of creation!
