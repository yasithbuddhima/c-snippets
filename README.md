# C Snippets Repository

## Repository Setup

### Cloning the Repository

```powershell
# Navigate to your development directory
cd ~/Documents/Code

# Clone repository
git clone https://github.com/HameezExE/c-snippets.git

# Enter repository
cd c-snippets
```

## Development Environment Setup

### Prerequisites Installation

#### Windows (PowerShell Admin Recommended)

```powershell
# 1. Install Chocolatey package manager
Set-ExecutionPolicy Bypass -Scope CurrentUser -Force
[System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072
iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))

# 2. Install development tools
choco install mingw git vscode -y

# 3. Verify installations
choco --version
gcc --version
git --version
code --version
```

#### macOS/Linux

```bash
# macOS using Homebrew
brew install gcc

# Debian/Ubuntu
sudo apt-get install build-essential
```

### Environment Configuration

```powershell
# Refresh PATH in current session
$env:PATH = [System.Environment]::GetEnvironmentVariable("Path", "Machine") + ";" + [System.Environment]::GetEnvironmentVariable("Path", "User")

# Verify critical paths in PATH
$env:PATH -split ';' | Where-Object { $_ -like "*mingw64\bin*" -or $_ -like "*Git\bin*" -or $_ -like "*VS Code*" }
```

## Compilation Guide

### Basic Compilation

```powershell
# Navigate to target directory
cd day-1

# Compile with output naming
gcc hello.c -o hello -Wall

# Execute program
.\hello.exe  # Windows
./hello      # macOS/Linux
```

### Advanced Compilation Options

```powershell
# Debug build
gcc -g hello-input.c -o debug_hello

# Optimized build
gcc -O2 hello-var.c -o optimized_hello

# Multi-file compilation
gcc main.c helper.c -o combined_program

# Create object file only
gcc -c module.c
```

## Workflow Tips

### PowerShell Navigation

```powershell
# Linux-style directory operations
ls          # List contents
pwd         # Show current path
mkdir src   # Create directory
touch new.c # Create file (if alias set)

# Path navigation
cd ..       # Move up
cd ~        # Home directory
cd \        # Root directory
```

### Common Flags Reference

| Flag    | Description                   | Example                        |
| ------- | ----------------------------- | ------------------------------ |
| `-o`    | Specify output filename       | `gcc input.c -o output`        |
| `-g`    | Include debugging information | `gcc -g debug.c -o debug`      |
| `-O2`   | Enable optimization level 2   | `gcc -O2 fast.c -o fast`       |
| `-Wall` | Show all warnings             | `gcc -Wall strict.c -o strict` |

## Troubleshooting

### Common Fixes

```powershell
# If MinGW not detected:
[System.Environment]::SetEnvironmentVariable("PATH", $env:PATH + ";C:\tools\mingw64\bin", [System.EnvironmentVariableTarget]::User)

# Verify compiler detection
where.exe gcc

# Check file existence
Test-Path hello.c

# Clean build artifacts
rm *.exe, *.o
```

### Diagnostic Commands

```powershell
# Check Chocolatey installation
choco list --local-only

# Verify PATH configuration
$env:PATH -split ';' | Select-String -Pattern 'mingw|git|code'

# Test fresh PowerShell session
pwsh -NoProfile -Command "gcc --version"
```

## Contribution Guidelines

1. Clone and create feature branch:

```powershell
git checkout -b feature/new-snippet
```

2. Test compilation with warnings enabled:

```powershell
gcc -Wall new_feature.c -o test_feature
```

3. Verify execution:

```powershell
.\test_feature.exe
```

4. Commit and push changes:

```powershell
git commit -m "feat: add new array example"
git push origin feature/new-snippet
```

**Note for Windows Users:** PowerShell supports most Linux-style commands. Use `Get-Alias` to see command mappings. For PATH changes to persist, add through System Properties or use `[Environment]::SetEnvironmentVariable()` with `User`/`Machine` targets.

**Performance Tip:** Combine compilation steps: `gcc -O3 -Wall -o optimized src1.c src2.c`
