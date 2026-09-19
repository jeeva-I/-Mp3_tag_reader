# MP3 Tag Reader & Editor

A command-line based **MP3 Tag Reader and Editor** developed in C to read and modify metadata stored in MP3 files.

## 📌 Project Overview

This project demonstrates how MP3 metadata can be accessed and modified using **C file handling, structures, pointers, strings, and command-line arguments**.

The application works with MP3 ID3 tag information and provides options to view and edit metadata from the terminal.

## ⚙️ Features

* Read MP3 ID3 tag information
* Display MP3 metadata through the command line
* Edit MP3 tag information
* Command-line argument based operation
* Help option for available commands
* File handling using C
* Validation of command-line options

## 🏷️ Supported MP3 Tags

The project works with common ID3 metadata fields such as:

* Title
* Artist
* Album
* Year
* Genre
* Comment

## 🛠️ Technologies Used

* **Language:** C
* **Platform:** Linux / WSL Ubuntu
* **Compiler:** GCC
* **Version Control:** Git & GitHub

## 🚀 How to Compile

Clone the repository:

```bash
git clone https://github.com/jeeva-I/-Mp3_tag_reader.git
```

Navigate to the project directory:

```bash
cd -Mp3_tag_reader
```

Compile the source files:

```bash
gcc *.c
```

Run the application:

```bash
./a.out
```

## 💻 Usage

### View MP3 Tags

```bash
./a.out mp3tag -v song.mp3
```

### Edit MP3 Tags

```bash
./a.out mp3tag -e song.mp3
```

### Help

```bash
./a.out mp3tag -h
```

## 📂 Project Structure

```text
Mp3_tag_reader/
│
├── *.c
├── *.h
└── README.md
```

The source files contain the implementation for command-line processing, MP3 file handling, tag reading, and tag editing.

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

* C programming
* File handling
* Structures
* Pointers
* Strings
* Command-line arguments
* Binary file operations
* Git and GitHub
* Debugging and program validation

## 👨‍💻 Author

**Jeeva I**

GitHub: https://github.com/jeeva-I
