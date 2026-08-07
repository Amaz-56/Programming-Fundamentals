# Assignment 4: C++ File Handling (CRUD Operations)

**Student Name:** Amaz Majeed  
**Roll No:** 048  
**Class:** SE-2A  
**University:** Superior University  
**Program:** Software Engineering  

## Project Overview
This repository contains the C++ source code for Assignment 4, which demonstrates fundamental file handling techniques. The programs collectively implement Create, Read, Update, and Delete (CRUD) operations on a text file named `students.txt`.

## Source Code Descriptions

### 1. Create/Write Records
* **Description:** Takes user input to record the data (Roll No, Name, and Marks) of 5 students and writes this data into a new file named `students.txt`.
* **Key Concepts:** `ofstream`, sequential writing to a file.

### 2. Read Records
* **Description:** Reads all student records from `students.txt`, displays them in a formatted tabular layout, and calculates the total count of stored records.
* **Key Concepts:** `ifstream`, reading from files, EOF iteration.

### 3. Update Record 
* **Description:** Prompts the user for a specific Roll No, searches for it in `students.txt`, and updates the corresponding student's marks in-place.
* **Key Concepts:** `fstream` (read/write mode), stream positioning using `seekp()` and `tellg()`, fixed-width formatting with `<iomanip>`.

### 4. Delete Record 
* **Description:** Asks the user for a Roll No to delete, copies all other non-matching records to a temporary file (`temp.txt`), deletes the original file, and renames the temporary file to `students.txt`.
* **Key Concepts:** `ifstream`, `ofstream`, temporary file creation, file `remove()` and `rename()` functions from `<cstdio>`.

## How to Run
1. Compile each C++ file using a standard compiler (e.g., GCC or MSVC).
   ```bash
   g++ filename.cpp -o filename
   ```
2. **Important Execution Order:** First run the file containing the **Create** logic to generate the `students.txt` file and populate it with initial data.
3. Once the text file is created, run the Read, Update, or Delete programs to manipulate and view the stored records.
