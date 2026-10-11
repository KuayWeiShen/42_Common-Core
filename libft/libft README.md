*This project has been created as part of the 42 curriculum by wkuay

# Libft - My First C Library

> A custom C standard library recoding core C library functions and data structure utilities according to 42 School specifications.

## Overview

`libft` is a foundational project at 42 School. The goal of this project is to re-create standard C library functions (`libc`) alongside custom utility functions for string manipulation, memory management, file descriptor output, and generic singly linked list operations.

This static library (`libft.a`) serves as the core utility library used across future 42 C projects.

---

## Features & Implemented Functions

### 1. Libc Re-implementations
Recoded standard functions matching `man` specifications with identical behavior and memory safety.

* **Character Checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_toupper`, `ft_tolower`
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Conversions:** `ft_atoi`

### 2. Additional Utility Functions
Helper functions designed to simplify string operations and output writing.

* **String Allocation & Manipulation:** `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Operations
Functions for manipulating generic linked lists using the `t_list` structure (`void *content`).

* **Node Creation & Adding:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **Inspection:** `ft_lstsize`, `ft_lstlast`
* **Deletion & Memory Cleansing:** `ft_lstdelone`, `ft_lstclear`
* **Iteration & Transformation:** `ft_lstiter`, `ft_lstmap`

---

## Getting Started

### Prerequisites
* `cc` compiler # Generic compiler
* `make` utility

### Building the Library

1. Clone the repository:
   ```bash
   git clone [git@vogsphere.42singapore.sg:vogsphere/intra-uuid-f5db9a26-270a-412a-88b0-f87586817e74-7714824-wkuay]
   cd libft
2. Compile the core library
   make
3. Other Makefile targets
   make clean  # Removes object files (.o)
   make fclean # Removes object files (.o) and compiled library (libft.a)
   make re     # Performs fclean and rebuilds the library from scratch
   
### Reference Resources
1. https://en.cppreference.com/
2. https://www.gnu.org/software/make/manual/make.html
3. https://makefiletutorial.com/
4. https://www.geeksforgeeks.org/c/linked-list-in-c/

### AI Usage Disclosure
In accordance with 42 School guidelines, AI tools were utilised during this project for the following specific tasks

1. Makefile Debugging: Troubleshooting syntax errors, tab space indentation issues (missing separator), and structuring linked list targets.
2. Compilation Warning Analysis: Resolving pointer qualification warnings (-Wincompatible-pointer-types-discards-qualifiers) and type-sign mismatch comparisons (-Wsign-compare).
3. Code Review & Formatting Checks: Validating Norminette compliance regarding function line limits (under 25 lines) and variable declaration scopes.
