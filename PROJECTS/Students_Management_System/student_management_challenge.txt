# C++ Mini-Project Challenge: Student Management System

## 1. Project Goal

Build a console-based C++ program that lets a user register students, view their details, and calculate their grades.

## 2. Menu

When the program runs, display a menu similar to this:

```text
===== STUDENT MANAGEMENT SYSTEM =====

1. Register Student
2. View Student Details
3. Calculate Grade
4. Exit

Enter your choice:
```

The menu should keep appearing until the user chooses **Exit**.

## 3. Requirements

### 1. Create a `Student` Class

* Include a student's name, registration number, and marks.
* Add a constructor to initialize the student's information.

### 2. Register a Student

* Ask the user to enter the student's information.
* Store the information so it can be viewed later.

### 3. View Student Details

* Display the saved student's name, registration number, and marks.

### 4. Calculate the Grade

* Use conditional statements to determine the grade from the marks.

### 5. Build a Repeating Menu

* Use a loop to keep showing the menu until the user chooses Exit.

### 6. Use Functions

Create separate functions for:

* Registering a student.
* Viewing student details.
* Calculating the grade.

### 7. Handle Invalid Input

* Marks below `0` or above `100` should be rejected.
* Invalid menu choices should produce an error message.

## 4. Grading System

|  Marks | Grade |
| -----: | :---: |
| 80–100 |   A   |
|  70–79 |   B   |
|  60–69 |   C   |
|  50–59 |   D   |
|   0–49 |   F   |

## 5. C++ Concepts to Practice

* Classes and objects
* Constructors
* Variables and data types
* Functions and parameters
* Conditional statements (`if`, `else if`, `else`)
* Loops
* Switch statements
* Input and output

## 6. Rules

* Use a class named `Student`.
* Use at least three functions.
* Use `if`, `else if`, and `else` for grading.
* Use a loop to repeat the menu.
* Use a `switch` statement to handle menu choices.
* Validate marks and menu choices.

## 7. Bonus Challenge

Allow the user to register and manage **multiple students** instead of only one.

**Hint:** You could use a `vector<Student>` to store multiple student objects.

## 8. Recommended Build Order

1. Create the `Student` class with its attributes and constructor.
2. Write a function to register a student.
3. Write a function to calculate the student's grade.
4. Write a function to display student details.
5. Connect the functions using the menu and loop.

## 9. Starting Task

Begin by writing only the `Student` class, including its attributes and constructor. Test it before building the rest of the program.

Do your best to solve the challenge independently before looking for a complete solution.
