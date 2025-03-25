# C Snippets Repository

## Repository Cloning

To clone this repository to your local machine, follow these steps:

1. Open your terminal or command prompt
2. Navigate to the directory where you want to clone the repository
3. Run the following command:
   ```
   git clone https://github.com/HameezExE/c-snippets.git
   ```
4. Change into the repository directory:
   ```
   cd c-snippets
   ```

## Compiling and Running C Files

### Prerequisites

- Ensure you have GCC (GNU Compiler Collection) installed on your system
  - For Windows: Install MinGW or use Windows Subsystem for Linux (WSL)
  - For macOS: Install via Homebrew (`brew install gcc`)
  - For Linux: Install via package manager (e.g., `sudo apt-get install gcc`)

### Compilation and Execution

1. Navigate to the specific day or folder containing the C files

   ```
   cd day-1
   ```

2. Compile the C file using GCC

   - For hello.c:
     ```
     gcc hello.c -o hello
     ```
   - For hello-var.c:
     ```
     gcc hello-var.c -o hello-var
     ```
   - For hello-input.c:
     ```
     gcc hello-input.c -o hello-input
     ```

3. Run the compiled executable
   - For hello:
     ```
     ./hello
     ```
   - For hello-var:
     ```
     ./hello-var
     ```
   - For hello-input:
     ```
     ./hello-input
     ```

### Notes

- The `-o` flag specifies the output executable name
- On Windows, use `hello.exe` instead of `./hello`
- For hello-input, you'll be prompted to enter a name when running the program

## Troubleshooting

- Ensure you're in the correct directory before compiling
- Check that GCC is properly installed and configured in your system PATH
- Verify file permissions if you encounter any execution issues

## Contributing

Feel free to contribute additional C snippets or improvements to the repository!
