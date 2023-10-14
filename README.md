# Matryoshka Doll Visualizer

## Overview

The Matryoshka Doll Visualizer is a console-based program that artfully illustrates the iconic Russian nesting dolls, commonly known as Matryoshka dolls. The program leverages user input to determine the number of dolls to be displayed, presenting a sequence of dolls that nest within each other.

## Features

1. **User Input**: The program begins by seeking the user's input, asking for the number of dolls they'd like to visualize.

2. **Top Sections Generation**:
   - Using loops, the program prints a series of forward slashes (`/`), symbolizing the top part of the doll.
   - The program smartly calculates the appropriate number of spaces needed before each slash to ensure accurate positioning. This calculation is tailored to the doll's sequence number and the current line being printed.

3. **Bottom Sections Generation**:
   - The program also uses backslashes (`\`) to depict the bottom half of the Matryoshka doll.
   - Again, precision is ensured in the positioning of these backslashes, using calculated spaces.

4. **Doll Separation**:
   - To enhance the visual clarity between nested dolls, the program introduces a series of dashes (`-`) after the representation of each doll.

5. **Scalability**:
   - Regardless of user input, the program ensures that the entire visual representation scales and adjusts correctly.

## Getting Started

### Prerequisites

- A C++ Compiler (e.g., `g++`).
- Familiarity with basic programming concepts like loops and conditional statements.

### How to Use

1. **Setup**:
   - Clone or download the repository containing the source code to your machine.
   - Navigate to the directory housing the program's source code.

2. **Compilation**:
   - Compile the source code using the following command:
     ```
     g++ -o Matryoshka main.cpp
     ```

3. **Execution**:
   - Run the program with:
     ```
     ./Matryoshka
     ```
   - Follow the on-screen instructions and input the desired number of Matryoshka dolls.

4. **Visualization**:
   - See the representation of your chosen number of Matryoshka dolls in the console.

