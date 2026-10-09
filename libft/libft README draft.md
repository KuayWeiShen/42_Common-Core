# Libft - Your First C Library

> A custom C standard library recoding core C library functions and data structure utilities according to 42 School specifications.

[![42 Evaluation](https://img.shields.io/badge/42-Project-000000?style=flat&logo=42)](https://42.fr)
[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler](https://img.shields.io/badge/Compiler-cc-green.svg)]()

## Overview

`libft` is a foundational project at 42 School. The goal of this project is to re-create standard C library functions (`libc`) alongside custom utility functions for string manipulation, memory management, file descriptor output, and generic singly linked list operations.

This static library (`libft.a`) serves as the core utility library used across future 42 C projects (e.g., `get_next_line`, `ft_printf`, `so_long`, `minishell`).

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

### 3. Bonus Functions: Linked List Operations
Functions for manipulating generic linked lists using the `t_list` structure (`void *content`).

* **Node Creation & Adding:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **Inspection:** `ft_lstsize`, `ft_lstlast`
* **Deletion & Memory Cleansing:** `ft_lstdelone`, `ft_lstclear`
* **Iteration & Transformation:** `ft_lstiter`, `ft_lstmap`

---

## Getting Started

### Prerequisites
* A Unix-like environment (Linux or macOS)
* `cc` or `gcc` compiler
* `make` utility

### Building the Library

1. Clone the repository:
   ```bash
   git clone [https://github.com/your-username/libft.git](https://github.com/your-username/libft.git)
   cd libft