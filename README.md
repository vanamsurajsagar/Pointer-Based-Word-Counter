# Pointer-Based-Word-Counter in C
A highly efficient, command-line C utility that calculates the total number of words in a sentence. It leverages low-level **pointer arithmetic** and string manipulation instead of standard array indexing.

## 🚀 Features
- **Pointer-Driven Logic:** Iterates directly through memory addresses using pointer increments (`str++`) for optimized execution.
- **Robust Space Handling:** Utilizes state tracking flags to accurately handle consecutive spaces, tabs, and newlines without falsifying the word count.
- **Full Sentence Input:** Uses `fgets()` to safely read comprehensive lines of text, including spaces.

## 🛠️ How the Pointer Architecture Works
Instead of accessing elements via index blocks like `str[i]`, this application targets memory directly:
* **Dereferencing (`*str`):** Inspects the character value sitting at the current memory slot.
* **State Management (`inWord`):** Flips a boolean flag to track transitions between white spaces and character sets, isolating distinct words.
* **Pointer Arithmetic (`str++`):** Advances the pointer address step-by-step until hitting the null terminator (`\0`).

## 📋 Prerequisites
Ensure a modern standard C compiler is active in your terminal environment:
- **GCC** (Linux/Mac)
- **MinGW / MSVC** (Windows)
- Or any C-capable IDE (VS Code, Code::Blocks, Dev-C++)

## 💻 How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com
   cd YOUR_REPO_NAME
   ```

2. **Compile the program:**
   ```bash
   gcc word_counter.c -o word_counter
   ```

3. **Execute the compiled binary:**
   ```bash
   ./word_counter
   ```

## 📸 Sample Application Run
```text
Enter a sentence: GitHub repositories look great with clear documentation.
Total word count: 7
```

## 📄 License
This repository is open-source and free to use under the [MIT License](LICENSE).
