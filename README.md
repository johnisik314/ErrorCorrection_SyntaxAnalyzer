# SyntaxAnalyzer: A Code Parsing Tool

## Project Overview

Welcome to SyntaxAnalyzer, a code parsing tool designed for analyzing and detecting errors in programming code. This project is a solo endeavor by John Isik from Queens College.

## Project Purpose

SyntaxAnalyzer serves as a tool to check the correctness of code written in a specific programming language. It breaks down the code into components, known as tokens, and verifies that they adhere to the language's grammar rules. If errors are found, SyntaxAnalyzer provides error messages to aid in debugging.

## Key Components

### Lexical Analyzer (LexicalAnalyzer.cpp)

The Lexical Analyzer, responsible for tokenizing the code, performs the following tasks:

- Scans and isolates individual tokens.
- Handles special keywords and symbols.
- Recognizes numeric literals and identifiers.
- Maintains code line tracking.

### Syntax Analyzer (SyntaxAnalyzer.cpp)

The Syntax Analyzer analyzes the structure of the code and ensures it follows the expected syntax rules. It offers the following features:

- Checks for correct declarations and statements.
- Identifies syntax errors and provides clear error messages.
- Supports various programming constructs like loops and conditionals.

## Error Detection and Correction

If SyntaxAnalyzer encounters errors in the code, it issues descriptive error messages. These messages indicate the type and location of the error, helping developers rectify issues and improve their code.

## How to Use

To employ SyntaxAnalyzer for code analysis:

1. Supply your code to the tool.
2. Let Syntax Analyzer assess your code for syntax errors.
3. If errors are detected, consult the error messages for guidance.
4. Make necessary corrections to your code.
5. Re-run SyntaxAnalyzer until your code is error-free.

## Acknowledgments

Special thanks to the faculty and mentors at Queens College for their support and guidance throughout the project.

## License

This project is provided under the terms of academic use. Feel free to use and share it for educational purposes.
