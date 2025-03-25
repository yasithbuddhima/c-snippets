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

#### Windows Installation Options:

1. **Using Chocolatey** (Recommended):

   - First, install Chocolatey (package manager for Windows):
     ```
     @"%SystemRoot%\System32\WindowsPowerShell\v1.0\powershell.exe" -NoProfile -InputFormat None -ExecutionPolicy Bypass -Command "[System.Net.ServicePointManager]::SecurityProtocol = 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))" && SET "PATH=%PATH%;%ALLUSERSPROFILE%\chocolatey\bin"
     ```
   - Then install MinGW:
     ```
     choco install mingw
     ```

2. Alternative Methods:

   - Install MinGW manually from official sources
   - Use Windows Subsystem for Linux (WSL)

3. For macOS: Install via Homebrew

   ```
   brew install gcc
   ```

4. For Linux: Install via package manager
   ```
   sudo apt-get install gcc
   ```

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
- After installing MinGW via Chocolatey, you may need to restart your terminal or IDE
- Ensure Chocolatey installation was successful by running `choco -v`

## Contributing

Feel free to contribute additional C snippets or improvements to the repository!
