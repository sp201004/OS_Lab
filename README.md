# Operating System Laboratory Experiments

## B.Tech SEC-A & NIT Agartala, 5th Semester (2022 Batch)

### Experiment List

#### 0. Study of UNIX /LINUX Shell Commands

- Navigate to the /home directory. List all contents, including hidden files.
- Create a directory named test_dir in your home directory. Remove the test_dir directory.
- Create a file named hello.txt in your home directory. Write "Hello, world!" to the file. Display the contents of hello.txt. Delete hello.txt.
- Copy the file /etc/hosts to your home directory. Copy the entire /etc/apt directory to a new directory named backup in your home directory.
- Move the file hosts (copied in Exercise 4) to the backup directory and rename it to hosts_backup.
- Change the permissions of the hosts_backup file to be readable, writable, and executable by the owner only.
- Display a list of current users. Show how long the system has been running. Display the system's memory usage in a human-readable format.
- Change date & time of Computer using command.
- Display the contents of /etc/passwd. Filter and display only lines containing the word "root".
- Redirect the list of all files and directories in /etc to a file named etc_list.txt in your home directory. Use a pipeline to display the contents of /etc/passwd and filter for lines containing "bin".

#### 1. Introduction to Shell Scripting - Write & execute the below listed programs

- A SHELL SCRIPT PROGRAM ON LEAP YEAR.
- A SHELL SCRIPT PROGRAM TO FIND OUT ODD & EVEN NUMBERS.
- A SHELL SCRIPT PROGRAM TO CHECK A PERSON ELIGIBLE FOR VOTING OR NOT.
- A SHELL SCRIPT PROGRAM TO FIND THE GREATEST NUMBER AMONG 3 NUMBERS.
- A SHELL SCRIPT PROGRAM FOR MULTILINE COMMENTS.

#### 2. Looping exercise Shell Scripting

- Write a shell script to print all natural numbers from 1 to n. - using while loop.
- Write a shell script to print all natural numbers in reverse (from n to 1). - using while loop.
- Write a shell script to calculate the factorial of a number using while loop.
- Write a shell script to find a number prime or not using for loop.
- Write a shell script to print the Fibonacci series up to n terms.
- Write a shell script to print the multiplication table using for loop.
- Write a shell script to count number of digits in a number.
- Write a shell script to check whether a number is palindrome or not.
- Write a shell script to find the sum of all even numbers between 1 to n using for loop.
- Write a shell script to print all odd number between 1 to n using while loop.

#### 3.Switch Case Exercise

- Write a Shell Script for the Arithmetic calculator.
- Write a Shell Script to find alphabet is vowel or not for both Upper & Lower case alphabet.
- Using the switch statement Write a Shell Script to input marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer. Calculate percentage and grade according to the following:
  Percentage >= 90% : Grade A
  Percentage >= 80% : Grade B
  Percentage >= 70% : Grade C
  Percentage >= 60% : Grade D
  Percentage >= 40% : Grade E
  Percentage < 40% : Grade F
- Write a Shell Script to take the hours and minutes as input by the user and show that whether it is AM or PM by using the switch statement.

#### 4. Command Line Arguments in Linux Shell Scripting

- Write a script for e-voting & all data of the voting person will be given as command-line arguments.
- Create a shell script to Print all Arguments with script names and the total number of arguments passed.
- Create a loop through all arguments in a shell script to find the palindrome numbers.
- Create a shell script to concatenate two strings given as command-line arguments.
- Write a shell script that gets five numbers from the command line and prints out their sum.

#### 5. Study How to Create a Process in UNIX Using `fork()` System Call

- WAP to create process and display PID & PPID for both parent & child processes. In switch cases also include a case for unsuccessful process creation.

#### 6. Implementation of Zombie Process, Orphan Process, Daemon Processes.

- 1. Create a program that demonstrates a Zombie Process. Use the ps command to check the process table and identify the zombie process.
- Write a program where the child process becomes an orphan and is adopted by the init process (PID 1).
- What is a Daemon Process? How do you create it in a C program?

#### 7. Implementation of FCFS & SJF scheduling

- A program to simulate the FCFS CPU scheduling algorithm.
- A program to simulate the SJF CPU scheduling algorithm.

#### 8. Implementation of Priority & RR scheduling

- A program to simulate the priority CPU scheduling algorithm.
- A program to simulate the Round Robin CPU scheduling algorithm.

#### 9. Study of Signal Handling & Implementation

- WAP C program to catch a signal.

#### 10. Study of Signal Implementation `SIGKILL`, `SIGSTOP`, and User Defined Signals

- WAP C program to implement `SIGKILL`, `SIGSTOP` and user defined signals.

#### 10. Study & Implementation of Thread Creation & Execution

- C program to implement Pthread Creation and Termination.
- Program to check the process id numbers of parent and child thread is same or different.
- Each thread prints a "Hello World!" message, and then terminates with a call to `pthread_exit()`.
- Program to implement `pthread_create()` argument passing.
