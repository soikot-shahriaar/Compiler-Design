# Compiler Design Fundamentals

**C Programming Exercises for Lexical Analysis & Pattern Matching**

A comprehensive collection of C programs implementing core compiler design concepts including lexical analysis, regular expression pattern matching, and string processing algorithms.

## Folders

### Identifiers/
- `identifier-01.c` - Basic identifier validation (checks if string starts with letter/underscore, followed by letters/digits/underscores)
- `identifier-02.c` - Enhanced identifier validation with special rules for 2-character identifiers (prevents `__` and `_0` patterns)

### RegEx/
15 programs implementing regular expression patterns:
- `Q-01.c` - `(a|b)*` - Any combination of 'a' and 'b' (including empty string)
- `Q-02.c` - `ab*` - Strings starting with 'a' followed by zero or more 'b's
- `Q-03.c` - `a+` - One or more repetitions of 'a'
- `Q-04.c` - `a*` - Zero or more repetitions of 'a'
- `Q-05.c` - `(ab)+` - One or more repetitions of 'ab'
- `Q-06.c` - `(ab)*` - Zero or more repetitions of 'ab'
- `Q-07.c` - `a?` - Zero or one occurrence of 'a'
- `Q-08.c` - `a{2,4}` - Between 2 and 4 occurrences of 'a'
- `Q-09.c` - `(a|b)*a(a|b)*` - Strings with at least one 'a'
- `Q-10.c` - `(a|b)*abb` - Sequences ending in 'abb'
- `Q-11.c` - `(a|b)*a(a|b)*a(a|b)*` - Strings with at least two 'a's
- `Q-12.c` - `(a|b)*a(a|b)*b(a|b)*` - Strings with at least one 'a' followed by at least one 'b'
- `Q-13.c` - `(a|b)*a(a|b)*a(a|b)*a(a|b)*` - Strings with at least three 'a's
- `Q-14.c` - `(a|b)*a(a|b)*b(a|b)*a(a|b)*` - Strings with at least two 'a's and one 'b'
- `Q-15.c` - `(a|b)*a(a|b)*b(a|b)*b(a|b)*` - Strings with at least one 'a' and two 'b's

### Untitled/
Class tasks for string processing:
- `classTask01.c` - Count vowels and frequency of each vowel in a string
- `classTask02.c` - Count articles (a, an, the) in text
- `classTask03.c` - Count frequency of each word in a string
- `classTask04.c` - Find word with maximum frequency in a string

### Flex/
Flex (Fast Lexical Analyzer) programs for lexical analysis:
- `lex1.l` - Basic token identification (digits, numbers, characters, words, operators)
- `lex2.l` - Token identification with counting
- `lex3.l` - Token analysis from C source code file (input.c)
- `lex4.l` - Keyword and identifier recognition in C code
- `input.c` - Sample C source file for testing Flex programs

### LabTasks/
Advanced lexical analysis and parsing exercises:
- `task1.l` - Comprehensive C token analyzer (integers, floats, keywords, identifiers, operators, punctuation)
- `task2.l` - Calculator lexer (recognizes numbers and arithmetic operators)
- `task2.y` - Calculator parser using Bison (implements arithmetic expression evaluation with precedence)

## Program Features

### Regular Expression Programs
Each RegEx program implements a specific pattern matching algorithm:
- Interactive input validation
- Clear pattern descriptions with examples
- Efficient string processing algorithms
- Comprehensive error handling

### String Processing Programs
Advanced text analysis capabilities:
- Vowel counting and frequency analysis
- Article detection in natural language text
- Word frequency analysis
- Statistical text processing

### Flex Programs
Professional lexical analysis tools:
- Token recognition and classification
- Source code analysis
- Custom pattern matching rules
- Integration with C programming

### Lab Tasks
Production-ready compiler components:
- Complete lexical analyzer for C language
- Arithmetic expression calculator
- Parser-lexer integration
- Error handling and reporting

## Usage

### Compiling C Programs
```bash
gcc program.c -o program
./program
```

### Compiling Flex Programs
```bash
flex program.l
gcc lex.yy.c -o program
./program
```

### Compiling Bison Programs
```bash
bison -d program.y
flex program.l
gcc lex.yy.c program.tab.c -o program
./program
```

## Learning Objectives

This collection covers:
- **Lexical Analysis**: Token recognition and classification
- **Pattern Matching**: Regular expression implementation
- **String Processing**: Text analysis and manipulation
- **Compiler Design**: Lexer and parser development
- **C Programming**: Advanced string and character handling

Perfect for students learning compiler design, automata theory, and advanced C programming concepts. 