# Project README

## Overview
The project is a simple C program that demonstrates the use of a custom deque (double-ended queue) implementation. The program initializes an empty deque, adds elements to both the front and back, prints the deque, removes elements from the front, and finally frees the deque.

## Features
- Initialization of a custom deque.
- Adding elements to the front and back of the deque.
- Printing the contents of the deque.
- Removing elements from the front of the deque.
- Freeing the deque memory.

## Project Structure
### Prerequisites
- C/C++ Compiler (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
To build and run the project, follow these steps:

1. **Navigate to the project directory:**
   ```sh
   cd /home/codeleaded/Hecke/C/Cmd_Deque
   ```

2. **Build the project for Linux:**
   ```sh
   make -f Makefile.linux all
   ```

3. **Run the executable:**
   ```sh
   make -f Makefile.linux exe
   ```

4. **Clean and rebuild (optional):**
   ```sh
   make -f Makefile.linux clean
   make -f Makefile.linux all
   ```

5. **Build for Windows (cross-compilation):**
   ```sh
   make -f Makefile.windows all
   ```

6. **Run the executable on Windows:**
   ```sh
   make -f Makefile.windows exe
   ```

7. **Clean and rebuild for Windows (optional):**
   ```sh
   make -f Makefile.windows clean
   make -f Makefile.windows all
   ```

8. **Build for Wine (Linux cross-compilation for Windows):**
   ```sh
   make -f Makefile.wine all
   ```

9. **Run the executable on Wine:**
   ```sh
   make -f Makefile.wine exe
   ```

10. **Clean and rebuild for Wine (optional):**
    ```sh
    make -f Makefile.wine clean
    make -f Makefile.wine all
    ```

11. **Build for WebAssembly using Emscripten:**
    ```sh
    make -f Makefile.web all
    ```

12. **Run the WebAssembly executable with wasmtime:**
    ```sh
    wasmtime build/Main.wasm
    ```

13. **Clean and rebuild for WebAssembly (optional):**
    ```sh
    make -f Makefile.web clean
    make -f Makefile.web all
    ```

By following these steps, you can successfully build and run the project on different platforms using the provided Makefiles.