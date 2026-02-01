# Copilot Instructions for MCS-UNI-2026

## Project Overview
This is a simple C++ console application for the MCS-UNI-2026 university course. The main program (`main.cpp`) outputs the course name "MCS-2026" to the console.

## Architecture
- **Entry Point**: `main.cpp` - Single source file with a basic `main()` function.
- **Data Files**: 
  - `Links.txt`: Contains Google Sheets links for course notes and attendance.
  - `Students.txt`: List of enrolled students with names.
- **Build Output**: `main` executable (compiled binary).

## Developer Workflows
- **Compile**: Use `g++ main.cpp -o main` to build the executable.
- **Run**: Execute `./main` to print "MCS-2026" to stdout.
- **Debug**: No specific debugging setup; use standard gdb or lldb for C++ debugging.

## Code Patterns
- Uses standard C++ libraries (`<iostream>` for console output).
- Simple procedural structure with no classes or complex logic.
- Output format: Plain text with newline.

## Key Files
- `main.cpp`: Core application logic (3 lines of code).
- `Links.txt`: Course resources (read-only data).
- `Students.txt`: Student roster (read-only data).

## Conventions
- No build system (e.g., Makefile, CMake) - manual compilation.
- No version control workflows beyond basic git (if used).
- Data files are plain text, edited manually.

## External Dependencies
- None; relies only on standard C++ library.

Focus on maintaining simplicity and direct compilation. Avoid introducing complex build tools or frameworks unless course requirements change.