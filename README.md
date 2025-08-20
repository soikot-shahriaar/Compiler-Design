# Compiler Design Fundamentals

**C Programming Exercises for Lexical Analysis & Pattern Matching**

A comprehensive collection of C programs implementing core compiler design concepts including lexical analysis, regular expression pattern matching, string processing algorithms, and parser development using Flex and Bison.

## Project Structure

### Bison/
Progressive Bison parser and Flex lexer programs (ordered from simplest to most complex):
- **`task1.l/.y`** - Number Recognition (Simplest) - Basic integer recognition and validation
- **`task2.l/.y`** - Arithmetic Expression Calculator - Supports +, -, *, / with operator precedence and division by zero handling
- **`task3.l/.y`** - C-like Language Token Analyzer - Recognizes numbers, C keywords (if, else, while, return, int, void), identifiers, and operators
- **`info.txt`** - Complete compilation commands and execution instructions for all tasks

### Flex/
Flex (Fast Lexical Analyzer) programs for token recognition and analysis:
- **`lex1.l`** - Basic Token Identifier - Recognizes digits, numbers, characters, words, operators, whitespace
- **`lex2.l`** - Token Counter - Same as lex1 but with counting functionality for each token type
- **`lex3.l`** - File-based Token Analyzer - Reads and analyzes tokens from input.c file with statistics
- **`lex4.l`** - C Language Keyword/Identifier Analyzer - Distinguishes between C keywords and user-defined identifiers
- **`input.c`** - Sample C source code file for testing lex3.l and lex4.l
- **`info.txt`** - Compilation commands and usage instructions for all Flex programs

### LabTasks/
Advanced lexical analysis and parsing exercises:
- **`task1.l`** - Comprehensive C Token Analyzer - Recognizes integers, floating-point numbers, C keywords, identifiers, operators, and punctuation
- **`task2.l/.y`** - Advanced Arithmetic Calculator - Complete lexer-parser combination with error handling
- **`input.c`** - Test file for Lab Task programs

### Identifiers/
Identifier validation programs implementing programming language rules:
- **`identifier-01.c`** - Basic Identifier Validator - Checks standard identifier rules (letter/underscore start, alphanumeric continuation)
- **`identifier-02.c`** - Enhanced Identifier Validator - Includes special rules for 2-character identifiers (prevents `__` and `_0` patterns)

### RegEx/
15 Regular Expression Pattern Matching Programs:
- **`Q-01.c`** - `(a|b)*` - Any combination of 'a' and 'b' (including empty string)
- **`Q-02.c`** - `ab*` - Strings starting with 'a' followed by zero or more 'b's
- **`Q-03.c`** - `a+` - One or more repetitions of 'a'
- **`Q-04.c`** - `a*` - Zero or more repetitions of 'a'
- **`Q-05.c`** - `(ab)+` - One or more repetitions of 'ab'
- **`Q-06.c`** - `(ab)*` - Zero or more repetitions of 'ab'
- **`Q-07.c`** - `a?` - Zero or one occurrence of 'a'
- **`Q-08.c`** - `a{2,4}` - Between 2 and 4 occurrences of 'a'
- **`Q-09.c`** - `(a|b)*a(a|b)*` - Strings containing at least one 'a'
- **`Q-10.c`** - `(a|b)*abb` - Sequences ending with 'abb'
- **`Q-11.c`** - `(a|b)*a(a|b)*a(a|b)*` - Strings with at least two 'a's
- **`Q-12.c`** - `(a|b)*a(a|b)*b(a|b)*` - Strings with at least one 'a' followed by at least one 'b'
- **`Q-13.c`** - `(a|b)*a(a|b)*a(a|b)*a(a|b)*` - Strings with at least three 'a's
- **`Q-14.c`** - `(a|b)*a(a|b)*b(a|b)*a(a|b)*` - Strings with at least two 'a's and one 'b'
- **`Q-15.c`** - `(a|b)*a(a|b)*b(a|b)*b(a|b)*` - Strings with at least one 'a' and two 'b's

### Untitled/
String Processing and Text Analysis Programs:
- **`classTask01.c`** - Vowel Counter and Frequency Analyzer - Counts total vowels and frequency of each vowel (a, e, i, o, u)
- **`classTask02.c`** - Article Counter - Counts occurrences of articles (a, an, the) in text
- **`classTask03.c`** - Word Frequency Analyzer - Analyzes frequency of each word in a string
- **`classTask04.c`** - Maximum Frequency Word Finder - Identifies the word with highest frequency

## Key Features

### Bison Programs (Parser Development)
- **Progressive Complexity**: From simple number recognition to complex token parsing
- **Memory Management**: Clean approach using direct `yytext` references (no memory leaks)
- **Error Handling**: Comprehensive error reporting with context information
- **Operator Precedence**: Proper mathematical operator precedence in arithmetic expressions
- **Professional Formatting**: Consistent code style and structure

### Flex Programs (Lexical Analysis)
- **Token Classification**: Automatic recognition of different token types
- **File Processing**: Direct file input capability for source code analysis
- **Statistical Analysis**: Token counting and frequency analysis
- **C Language Support**: Keyword recognition and identifier validation

### Regular Expression Programs
- **Pattern Matching**: Implementation of complex regex patterns using finite state machines
- **Interactive Testing**: User-friendly input validation with clear feedback
- **Comprehensive Coverage**: From basic patterns to complex multi-condition expressions
- **Educational Examples**: Clear documentation with valid/invalid string examples

### String Processing Programs
- **Text Analysis**: Advanced string manipulation and analysis algorithms
- **Natural Language Processing**: Article detection and word frequency analysis
- **Character Processing**: Vowel counting and character classification
- **Statistical Functions**: Frequency analysis and maximum value identification

## Compilation and Execution

### Standard C Programs
```bash
gcc program.c -o program
./program
```

### Flex Programs
```bash
flex program.l
gcc lex.yy.c -o program
./program
```

### Bison Programs (Complete Process)
```bash
# For Bison tasks (replace X with 1, 2, or 3)
flex taskX.l
bison -d taskX.y
gcc lex.yy.c taskX.tab.c -o taskX
./taskX

# Example: Task 1 (Number Recognition)
flex task1.l
bison -d task1.y
gcc lex.yy.c task1.tab.c -o task1
./task1
```

### Lab Tasks (Flex + Bison Integration)
```bash
# For LabTasks directory
flex task2.l
bison -d task2.y
gcc lex.yy.c task2.tab.c -o calculator
./calculator
```

## Learning Progression

### Beginner Level
1. **RegEx Programs** - Understanding pattern matching fundamentals
2. **Identifier Programs** - Basic validation logic
3. **String Processing** - Text manipulation algorithms

### Intermediate Level
4. **Flex Programs** - Lexical analysis and token recognition
5. **Bison Task 1** - Basic parser development
6. **Bison Task 2** - Arithmetic expression parsing

### Advanced Level
7. **Bison Task 3** - Complex token parsing with multiple token types
8. **Lab Tasks** - Production-ready compiler components
9. **Integration Projects** - Combining multiple concepts

## Educational Objectives

This comprehensive collection covers:
- **Lexical Analysis**: Token recognition, classification, and statistical analysis
- **Syntax Analysis**: Grammar rules, precedence handling, and parse tree construction
- **Pattern Matching**: Regular expression implementation and finite state machines
- **String Processing**: Advanced text analysis and manipulation algorithms
- **Compiler Design**: Complete lexer-parser development pipeline
- **Memory Management**: Safe programming practices and resource management
- **Error Handling**: Robust error detection and reporting mechanisms
- **Professional Development**: Code organization, documentation, and best practices

## Technical Specifications

- **Language**: C Programming Language
- **Tools**: Flex (Fast Lexical Analyzer), Bison (Parser Generator)
- **Platform**: Cross-platform compatible (Windows, Linux, macOS)
- **Standards**: ANSI C compatible with modern compiler support
- **Dependencies**: GCC compiler, Flex, Bison

Perfect for computer science students learning compiler design, automata theory, formal languages, and advanced C programming concepts. Each program includes comprehensive documentation, example inputs/outputs, and educational explanations.