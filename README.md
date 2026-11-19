# 🚀 C++/Data Structures & Algorithms Fundamentals

> 💡 **Note:** This repository is a ongoing learning effort and is currently **not completed**. Some files or folders may be empty or in progress as I take my time to learn and implement each concept.

---

This repository serves as a structured timeline of my learning journey, moving from basic syntax to complex data structures and algorithms.

---

## 📂 Repository Structure

The project right now is organized logically into three major phases:

- **`01_cpp_fundamentals/`** - Core language concepts including basic syntax, pointers, references and more.

- **`02_data-structures_algorithms/`** - Implementations of standard data structures and problem solving including Linked Lists, Array, String, Searching/Sorting, Recursion and more.

---

## 🛠️ Environment Setup

Before running the code, you need to ensure you have `Git` and a `C++` compiler installed on your machine. Follow the guide below for your operating system:

### 1. Linux

> [!WARNING]
> The command below is specifically for **Debian/Ubuntu-based distributions (like Linux Mint or Pop!\_OS)**. If you are using a different distribution (like Arch, Fedora, or openSUSE), packages and commands will vary. Please check your specific distribution's documentation online to install Git and the base development tools.

Run the following command for **Debian/Ubuntu-based distributions**

```bash
sudo apt update && sudo apt install build-essential git -y
```

### 2. Windows

- **For Git:** Download and install [Git for Windows](https://git-scm.com/install/windows).

- **For C++ Compiler:** The easiest way to get g++ on Windows is by downloading [MinGW-w64 via MSYS2](https://www.msys2.org) or installing the "Desktop development with C++" workload via [Visual Studio Community](https://visualstudio.microsoft.com).

> [!WARNING]
> Make sure both `Git` and `MinGW` are added to your system's environment **PATH** variables.

> [!TIP]
> For Windows, It's always much better to install Linux using WSL 2.
> You get much faster compilation speed and no headache of setting up PATH variables etc.
> It also keeps your whole dev toolchain in one place, which is much easier to manage using terminal.

### 3. macOS

macOS makes this incredibly simple via the Terminal. Running this command will prompt you to install Apple's Command Line Tools, which includes both Git and the Clang C++ compiler (g++ alias):

```bash
xcode-select --install
```

---

## 💻️ Running Code Locally

### 1. Clone the repository:

Open terminal in a folder (the one you would like to clone the repo in) and run the following command in your respective terminal/konsole:

```bash
git clone https://github.com/rensyntax/cpp-dsa-fundamentals.git
```

> `git clone example.git` is command which you use when you want to clone any public repository from github to your local system.

### 2. Navigate into the directory:

Run the following command to navigate to following files of repo:

```bash
cd cpp-dsa-fundamentals/01_cpp_fundamentals/basic_syntax
```

> `cd example_folder` is the command you run when you want to navigate between folders in terminal, using `cd ..` you can return back to location before the `example_folder` or any folder for that matter.

> [!NOTE]
> Replace `01_cpp_fundamentals/basic_syntax` to whatever location you want to navigate.

### 3. Compile the file:

Run the following command in your respective terminal:

```bash
  g++ main.cpp -o main
```

> `g++ main.cpp` tells compiler to compile file named `main.cpp`.
> `-o main` tells the compiler to name the binary output file `main`,
> If you just run `g++ main.cpp` compiler will compile the file and give default name `a.out` to binary output file.

> [!NOTE]
> replace `main.cpp` with the name of the file you would like to run.

---

> 📝 **Small Note:** You might notice that some of the code inside the `01_cpp_fundamentals/` directory looks a bit messy, slightly incorrect, or even cringe. This is entirely intentional. That code is from when i just started learning C++ and Instead of rewriting or deleting it to look perfect, I have chosen to leave it exactly as it was written.

---

## 📄 License

This Repository is open-source and licensed under the MIT License - see at [LICENSE](LICENSE).

---

`thank you for reading, have a nice day ahead 👋`

-- kikyoito
