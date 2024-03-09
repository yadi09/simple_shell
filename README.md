# 0x16. C - Simple Shell

![shell](https://miro.medium.com/v2/resize:fit:720/format:webp/1*owO1J3oJvbhkCEWvHRCU_Q.png)

 
## Resources :books:

### Read or watch:

* [Unix shell](https://en.wikipedia.org/wiki/Unix_shell)
* [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
* [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)
* [Everything you need to know to start coding your own shell concept page]()
* [Resources_for_the_shell_project.docx](https://docs.google.com/document/d/1dpniqFW6AxZWi3vplBi8z6htE0ELE7vg/edit?usp=sharing&ouid=100111470824880404318&rtpof=true&sd=true)

### man or help:

* ' sh (Run sh as well) '

## Learning Objectives : :dart:

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

### Who designed and implemented the original Unix operating system

 **Ken Thompson and Dennis Ritchie are credited with designing and implementing the original Unix operating system at Bell Labs in 1969.**

**Here's a breakdown of their contributions:**

- **Ken Thompson:**
    - Led the initial development of Unix on a PDP-7 minicomputer.
    - Wrote the first versions of Unix in assembly language.
    - Created the B programming language, a precursor to C, for Unix development.
    - Designed key Unix features like the file system, process management, and shell.

- **Dennis Ritchie:**
    - Collaborated closely with Thompson on Unix development.
    - Created the C programming language, which became Unix's primary language.
    - Rewrote most of Unix in C, making it more portable and powerful.
    - Developed essential Unix tools like the compiler, assembler, and debugger.

**Other notable contributors to early Unix development include:**

- **Douglas McIlroy:**
    - Invented Unix pipes and the concept of software tools that work together.
- **Rudd Canaday:**
    - Wrote the first Unix text editor, ed.
- **Joe Ossanna:**
    - Developed the device file system and text formatting tools.

**Unix's innovative features:**

- **Multitasking:** Allowed multiple users to run programs simultaneously.
- **Portability:** Written in C, making it easier to adapt to different hardware.
- **Hierarchical file system:** Organized files in a logical, tree-like structure.
- **Text-based tools:** Emphasized simple, command-line programs for efficient interaction.
- **Modular design:** Promoted code reuse and easy maintenance.

**Unix's legacy:**

- **Foundation for modern operating systems:** Its concepts and design principles influenced Linux, macOS, Android, and many others.
- **Popular in servers, workstations, and embedded systems:** Known for its stability, security, and performance.
- **Significant impact on computer science and software development:** Shaped programming languages, software engineering practices, and networking technologies.


###  Who wrote the first version of the UNIX shell

The credit for writing the first version of the UNIX shell goes to **Ken Thompson** at Bell Labs, back in 1971. This shell, simply called **sh**, was included in Versions 1 through 6 of Unix, serving as the primary way for users to interact with the operating system.

While sh laid the groundwork for future shells, it was relatively basic by today's standards. It lacked many features we now take for granted, such as scripting capabilities, advanced flow control, and extensive variable support. However, it introduced core elements that became fundamental to later shells, including:

* **Piping:** Allowing the output of one command to be used as the input for another.
* **Simple control structures:** Using `if` and `goto` statements for conditional execution.
* **Filename wildcarding:** Matching multiple files based on patterns.

Despite its limitations, the Thompson shell paved the way for more sophisticated shells, such as the Bourne shell (sh) and the C shell (csh), which further expanded upon its capabilities and flexibility. These later shells, developed by different teams, ultimately replaced the original sh as the main Unix shells in subsequent versions.

So, while many contributors have shaped the landscape of Unix shells throughout history, **Ken Thompson deserves recognition for writing the very first version, sh, and setting the stage for its evolution.**


### Who invented the B programming language (the direct predecessor to the C programming language)

**Ken Thompson and Dennis Ritchie are credited with inventing the B programming language at Bell Labs around 1969.**

**Here's a breakdown of their roles:**

- **Ken Thompson:**
    - Initiated the development of B, primarily for use in writing the first Unix operating system.
    - Drew inspiration from BCPL, a language he had used previously on the Multics project.
    - Designed B to be concise and efficient for systems programming tasks.

- **Dennis Ritchie:**
    - Collaborated closely with Thompson on B's development.
    - Helped refine its syntax and semantics.
    - Later, played a central role in evolving B into the C language.

**Key features of B:**

- **Typeless language:** Treated all data as words, offering flexibility but also potential for errors.
- **Limited control structures:** Had basic `if` and `goto` statements, but lacked structures like `while` or `for` loops.
- **Focus on system-level programming:** Well-suited for tasks like file I/O, memory management, and process control.

**B's role in the evolution of C:**

- C was essentially a direct descendant of B, incorporating significant improvements and addressing its limitations.
- Ritchie added data types, more control structures, and better modularity to C, making it more versatile and reliable.
- C eventually replaced B as the primary language for Unix development and became a widely used language for systems programming in general.

**While B is no longer actively used, its legacy lives on through C and its numerous descendants, which continue to shape modern programming languages and systems development.**


### [How does a shell work](https://medium.com/@muxanz/how-the-shell-works-internally-when-entering-a-command-42f08458870)

 **Here's a breakdown of how a shell works:**

**1. Providing a User Interface:**

- Displays a prompt, inviting the user to enter commands.
- Accepts typed commands from the user.
- Presents the output of executed commands to the user.

**2. Parsing Commands:**

- Breaks down the entered command line into components:
    - The command name (the program to execute).
    - Any arguments or options for the command.

**3. Locating Executables:**

- Searches for the executable file corresponding to the command name.
- Uses a system-defined search path (usually specified in the PATH environment variable).

**4. Executing Commands:**

- Creates a new process for the command to run in.
- Passes any arguments or options to the process.
- Waits for the process to finish executing.
- Retrieves the process's exit status (success or failure).

**5. Handling Input/Output:**

- Redirects input and output from/to files or other programs as specified in the command.
- Uses redirection operators like ">" for output and "<" for input.

**6. Providing Scripting Capabilities:**

- Allows for writing scripts (sequences of commands) to automate tasks or create more complex workflows.
- Offers control structures like loops and conditional statements for logic within scripts.

**7. Managing Environment Variables:**

- Stores and retrieves environment variables, which are key-value pairs that hold configuration information.
- Passes environment variables to child processes, influencing their behavior.

**8. Interacting with the Operating System:**

- Acts as a bridge between the user and the operating system's core services.
- Uses system calls to interact with the kernel (the core of the operating system) for tasks like accessing files, managing processes, and communicating with hardware.

**Key Points:**

- Shells are essential for interacting with Unix-like operating systems and automating tasks.
- They offer a powerful way to control the system and create custom workflows.
- Popular shells include Bash, Zsh, and Fish, each with its own features and syntax.


### [What is a pid and a ppid]( )

In the world of computers, processes are constantly running, allowing your system to do everything from displaying images to playing music. To keep track of these processes and manage them effectively, operating systems assign two important identifiers: **PID** and **PPID**.

**PID** stands for **Process ID**. It's a unique number assigned to each running process, acting like its fingerprint. This number ensures there's no confusion amongst processes and allows the operating system to refer to them specifically. Think of it like a social security number for your computer programs.

**PPID** stands for **Parent Process ID**. This number tells you which process created the current process. Every process is born from another process, forming a sort of family tree. The PPID helps track this lineage and understand the relationships between processes. It's like knowing who your parent program is in the computer world.

Here's a simple analogy: imagine you're running a restaurant. Each order (process) has a unique table number (PID) to keep it organized. But sometimes, one order is split into two separate checks (child processes). The PPID would be like the main table number, reminding everyone that both checks originated from the same order.

Here are some reasons why PIDs and PPIDs are important:

* **Monitoring resource usage:** By tracking their PIDs, you can see which processes are using the most CPU, memory, or disk space.
* **Troubleshooting problems:** If a program crashes or behaves strangely, its PID can help identify it and diagnose the issue.
* **Managing processes:** You can use PIDs and PPIDs to kill processes, suspend them, or change their priorities.
* **Understanding application structure:** Studying PPIDs can reveal how complex programs are built and how their components interact.

* How to manipulate the environment of the current process

**Here are the specific ways to manipulate the environment of the current process in C:**

**1. Accessing Environment Variables:**

- **`getenv()` function:**
   - Retrieves the value of a specified environment variable.
   - Syntax: `char *getenv(const char *name);`
   - Returns a pointer to the value string, or NULL if the variable is not found.
   - Example:
     ```c
     char *homedir = getenv("HOME");
     printf("Home directory: %s\n", homedir);
     ```

- **`environ` variable:**
   - Global array of strings containing all environment variables and their values.
   - Syntax: `extern char **environ;`
   - Iterate through it to access individual variables.
   - Example:
     ```c
     for (char **env = environ; *env != NULL; env++) {
         printf("%s\n", *env);
     }
     ```

**2. Modifying Environment Variables:**

- **`setenv()` function:**
   - Sets or modifies an environment variable.
   - Syntax: `int setenv(const char *name, const char *value, int overwrite);`
   - Returns 0 on success, -1 on error.
   - Example:
     ```c
     setenv("EDITOR", "vim", 1);  // Set or overwrite EDITOR variable
     ```

- **`putenv()` function:**
   - Similar to `setenv()`, but doesn't allow controlling overwriting.
   - Syntax: `int putenv(char *string);`
   - Example:
     ```c
     putenv("TMPDIR=/tmp");  // Set TMPDIR variable
     ```

- **`unsetenv()` function:**
   - Removes an environment variable.
   - Syntax: `int unsetenv(const char *name);`
   - Returns 0 on success, -1 on error.
   - Example:
     ```c
     unsetenv("EDITOR");  // Remove EDITOR variable
     ```

**Key Points:**

- Changes made to environment variables within a process typically only affect that process and its children created using `fork()`.
- To launch a new process with a modified environment, use `execve()` or similar functions.
- Be cautious when modifying environment variables, as incorrect changes can affect program behavior or system stability.
- Consider using language-specific features for safer and more convenient environment manipulation if available.

### What is the difference between a function and a system call

 **Here's a breakdown of the key differences between functions and system calls:**

**Functions**

* **Definition:** Reusable blocks of code within a program that perform specific tasks.
* **Location:** Defined within the program's code or in external libraries.
* **Execution:** Run in the user space of the program, meaning they don't have direct access to hardware or kernel resources.
* **Access:** Called by other parts of the program using function calls.
* **Privileges:** Limited to operations within the program's scope and permissions.
* **Examples:** `print()`, `sqrt()`, `sort()`, `open_file()` (from a library).

**System Calls**

* **Definition:** Interfaces provided by the operating system kernel to access system resources and services.
* **Location:** Implemented within the kernel, the core of the operating system.
* **Execution:** Require a context switch to kernel mode, where they have privileged access to hardware and system resources.
* **Access:** Invoked by programs using system calls, which are special instructions that trigger a switch to kernel mode.
* **Privileges:** Can perform operations that user-level programs cannot, such as accessing hardware, managing files, creating processes, and communicating over networks.
* **Examples:** `read()`, `write()`, `open()`, `close()`, `fork()`, `exec()`.

**Key Differences in Summary:**

| Feature       | Function          | System Call          |
|----------------|-------------------|----------------------|
| Location       | User space       | Kernel space         |
| Privileges     | Limited           | Privileged           |
| Execution mode | User mode         | Kernel mode           |
| Purpose        | Encapsulate tasks | Access system services|
| Examples       | `print()`, `sort()` | `read()`, `fork()`, `open()` |

**Additional Considerations:**

* **Performance:** System calls generally have higher overhead than function calls due to the context switch to kernel mode.
* **Security:** System calls need to be carefully designed to prevent security vulnerabilities, as they operate with elevated privileges.
* **Portability:** Functions are often more portable across different operating systems, while system calls are specific to a particular OS.


### How to create processes

**Here's a detailed guide on how to create processes in C:**

**1. Using the `fork()` system call:**

- **Purpose:** Creates a new process (child process) that's an almost identical copy of the current process (parent process).
- **Syntax:** `pid_t fork(void);`
- **Return value:**
    - In the parent process, it returns the PID of the child process.
    - In the child process, it returns 0.
    - On error, it returns -1.

**Example:**

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
    } else if (pid == 0) {
        printf("I am the child process (PID: %d)\n", getpid());
    } else {
        printf("I am the parent process (PID: %d)\n", getpid());
    }

    return 0;
}
```

**2. Using the `exec()` family of functions:**

- **Purpose:** Replaces the current process image with a new program.
- **Common variants:**
    - `execl()`: Takes a list of arguments.
    - `execv()`: Takes an array of arguments.
    - `execle()`: Includes environment variables.
    - `execve()`: Takes an array of environment variables.
- **Syntax:** `int execl(const char *path, const char *arg0, ..., (char *)0);`
- **Return value:** Only returns if there's an error (-1).

**Example:**

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
    } else if (pid == 0) {
        execl("/bin/ls", "ls", "-l", (char *)0); // Replace child process with "ls -l"
    } else {
        printf("Parent process waiting for child to finish\n");
        wait(NULL); // Wait for child process to terminate
    }

    return 0;
}
```

**Key points:**

- Use `fork()` to create a new process, and `exec()` to replace its image with a new program.
- Handle errors appropriately (e.g., using `perror()` or `strerror()`).
- Consider using `wait()` or `waitpid()` in the parent process to synchronize with the child process.
- Be mindful of resource usage and potential for race conditions in multi-process applications.

### What are the three prototypes of main


* How does the shell use the PATH to find the programs

 **Here's how the shell uses the PATH to find programs:**

1. **PATH Environment Variable:**
   - The shell consults the `PATH` environment variable, which stores a list of directories separated by colons (:).
   - Each directory in the PATH represents a potential location for executable programs.

2. **Searching for the Program:**
   - When you enter a command without specifying its full path, the shell:
     - Splits the command name from its arguments.
     - Iterates through the directories in the PATH, one by one.
     - In each directory, it checks for an executable file with the same name as the command.

3. **Resolving Symbolic Links:**
   - If the shell finds a symbolic link to an executable within a PATH directory, it follows the link to locate the actual file.

4. **Executing the Program:**
   - If the shell finds a matching executable:
     - It creates a new process to run the program.
     - It passes any arguments you provided to the program.

5. **"Command Not Found" Error:**
   - If the shell doesn't find the program in any of the PATH directories, it displays a "command not found" error message.

**Key Points:**

- The PATH order matters: The shell searches directories in the PATH from left to right. If a program exists in multiple PATH directories, the first one encountered will be executed.
- PATH can be modified: You can customize the PATH using commands like `export PATH=$PATH:/new/directory` to add new directories or adjust the search order.
- Shell-specific variations: Different shells might have slightly different PATH handling mechanisms, but the core principles remain the same.

**Example:**

- If your PATH is `/usr/local/bin:/usr/bin:/bin` and you type `ls`, the shell will first look for `ls` in `/usr/local/bin`, then `/usr/bin`, and finally `/bin`.
- If it finds `ls` in `/usr/bin`, it will execute that version of `ls`.


### How to execute another program with the execve system call

**Here's a guide on executing another program using the `execve` system call in C:**

**1. Include Necessary Header:**

```c
#include <unistd.h>
```

**2. Prepare Arguments:**

- **Path to the executable file:** Store as a `const char *` string.
- **Arguments to pass to the program:** Place in an array of `char *` strings, with the last element being a null pointer (`(char *)0`).
- **Environment variables:** If needed, create an array of `char *` strings in the format `"VAR1=VALUE1"`, with the last element being a null pointer.

**3. Call `execve`:**

```c
int execve(const char *filename, char *const argv[], char *const envp[]);
```

- **`filename`:** Path to the executable file.
- **`argv`:** Array of arguments to pass to the program.
- **`envp`:** Array of environment variables (optional).

**4. Handle Errors:**

- `execve` only returns if there's an error, indicating failure.
- Check the return value (-1) and use `perror()` or `strerror()` to get error details.

**Example:**

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    char *args[] = {"ls", "-l", (char *)0};  // Arguments for "ls -l"

    if (execve("/bin/ls", args, NULL) == -1) {  // Execute "ls -l"
        perror("execve failed");
        return 1;
    }

    // This line won't execute if execve succeeds
    printf("This line won't be printed if execve succeeds.\n");

    return 0;
}
```

**Key Points:**

- `execve` replaces the current process image with the new program, effectively ending the original program's execution.
- Ensure the path to the executable is correct and accessible.
- Handle errors appropriately to prevent unexpected behavior.
- Be mindful of security implications when executing external programs, especially untrusted ones.


* How to suspend the execution of a process until one of its children terminates

**Here are common methods to suspend the execution of a process until one of its children terminates:**

**1. Using the `wait()` system call:**

- **Purpose:** Blocks the calling process until one of its child processes terminates.
- **Syntax:** `pid_t wait(int *status);`
- **Return value:** The PID of the terminated child process, or -1 on error.
- **Stores exit status:** If `status` is not NULL, it stores the child's exit status in the variable pointed to by `status`.

**2. Using the `waitpid()` system call:**

- **Purpose:** More flexible wait function, allowing control over which child process to wait for.
- **Syntax:** `pid_t waitpid(pid_t pid, int *status, int options);`
- **Options:**
    - `WNOHANG`: Don't block if no child is ready to terminate.
    - `WUNTRACED`: Also wait for stopped (traced) children.

**Example (C):**

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1 = fork();

    if (pid1 < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid1 == 0) {
        // Child process 1
        sleep(2);  // Simulate work
        printf("Child 1 exiting\n");
        exit(0);
    } else {
        pid_t pid2 = fork();

        if (pid2 < 0) {
            perror("Fork failed");
            exit(1);
        } else if (pid2 == 0) {
            // Child process 2
            sleep(5);  // Simulate work
            printf("Child 2 exiting\n");
            exit(0);
        } else {
            // Parent process
            printf("Parent waiting for a child to terminate...\n");

            int status;
            pid_t terminated_pid = wait(&status);

            printf("Child process %d terminated with status %d\n", terminated_pid, status);
        }
    }

    return 0;
}
```

**Key Points:**

- Use `wait()` or `waitpid()` to synchronize parent and child processes.
- Choose the appropriate function based on your specific needs for control and flexibility.
- Handle errors appropriately to ensure robust execution.
- Consider using additional options for more advanced control over the waiting behavior.

### What is EOF / “end-of-file”?

 **EOF (End-of-File)** is a condition in computer programming that indicates that there is no more data to be read from a file or input stream. It signals the end of the available data, marking the boundary where a program should stop reading.

**Here's how EOF is handled in different contexts:**

**1. Input Streams:**

- When a program reads from an input stream (e.g., a file, keyboard input, network socket), it continues reading bytes until it encounters EOF.
- EOF is often represented by a special character or value, depending on the programming language and operating system.
- Common ways to signal EOF:
    - **File Input:** The operating system typically marks the end of a file with a specific byte sequence.
    - **Keyboard Input:** Pressing Ctrl+D on Unix-like systems or Ctrl+Z on Windows often signals EOF.
    - **Network Sockets:** The remote server can close the connection, indicating EOF.

**2. Programming Languages:**

- **C:** The `getchar()` function returns EOF when it reaches the end of input.
- **Python:** The `input()` function raises an `EOFError` exception when it encounters EOF.
- **Java:** The `read()` method of input streams returns -1 to indicate EOF.
- **JavaScript:** The `read()` method of file objects returns null when there's no more data.

**3. Text Files:**

- Some text editors and tools use a special character (often Ctrl+Z or Ctrl+D) to represent EOF within the file itself.
- This allows them to distinguish between the actual content of the file and the end of the file.

**4. Command-Line Tools:**

- Many command-line tools use EOF to signal the end of input.
- For example, the `cat` command prints the contents of a file to the console, stopping when it reaches EOF.

**Importance of Handling EOF:**

- Properly handling EOF is crucial for preventing errors and ensuring correct program behavior.
- Programs should check for EOF when reading input to avoid attempting to read beyond the available data.
- This prevents issues like infinite loops or buffer overflows.


## Essential Functionalities of the Simple Shell:
> Displays a prompt "#cisfun$ " and waits for user input.\
> Runs all commands of type "executable program" (ls and /bin/ls).\
> Runs the following build_in commands: **exit**, **env**, **setenv** and **unsetenv**.\
> Handles commands with arguments.\
> Handles the PATH global variable.\
> Handles The EOF (End Of File) condition.\
> Handles the Ctrl + C signal -> It doesn't exit the shell

## Files description
 - **AUTHORS** -> List of contributors to this repository
 - **man_1_simple_shell** -> Manual page for the simple_shell
 - **shell.h** -> Header file
 - **shell.c** -> main function
	- **sig_handler** -> handles the Ctrl + C signal
	- **_EOF** -> handles the End Of File condition
 - **string.c**
	- **_putchar** -> prints a character
	- **_puts** -> prints a string
	- **_strlen** -> gives the length of a string
	- **_strdup** -> copies a string in a newly allocated memory
	- **concat_all** -> concatenates 3 strings in a newly allocated memory
 - **line_exec.c**
	- **splitstring** -> splits a string into an array of words
	- **execute** -> executes a command using execve
	- **realloc** -> reallocates a memory block
	- **freearv** -> frees a 2 dimensional array
 - **linkpath.c**
	- **_getenv** -> returns the value of a global variable
	- **add_node_end** -> adds a node in a singly linked list
	- **linkpath** -> creates a singly linked list for PATH directories
	- **_which** -> finds the pathname of a command
	- **free_list** -> frees the linked list of PATH value
 - **checkbuild.c**
	- **checkbuild** -> checks if a command is a build-in command
 - **buildin.c**
	- **exitt** -> handles the exit buildin command
	- **_atoi** -> converts a string into an integer
	- **env** -> prints the current environment
	- **_setenv** -> Initialize a new global variable, or modify an existing one
	- **_unsetenv** -> remove a global variable

****
## List of allowed functions and system calls for this project
 - access (man 2 access)
 - chdir (man 2 chdir)
 - close (man 2 close)
 - closedir (man 3 closedir)
 - execve (man 2 execve)
 - exit (man 3 exit)
 - _exit (man 2 _exit)
 - fflush (man 3 fflush)
 - fork (man 2 fork)
 - free (man 3 free)
 - getcwd (man 3 getcwd)
 - getline (man 3 getline)
 - isatty (man 3 isatty)
 - kill (man 2 kill)
 - malloc (man 3 malloc)
 - open (man 2 open)
 - opendir (man 3 opendir)
 - perror (man 3 perror)
 - read (man 2 read)
 - readdir (man 3 readdir)
 - signal (man 2 signal)
 - stat (__xstat) (man 2 stat)
 - lstat (__lxstat) (man 2 lstat)
 - fstat (__fxstat) (man 2 fstat)
 - strtok (man 3 strtok)
 - wait (man 2 wait)
 - waitpid (man 2 waitpid)
 - wait3 (man 2 wait3)
 - wait4 (man 2 wait4)
 - write (man 2 write)
****




