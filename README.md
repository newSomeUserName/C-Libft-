*This project has been created as part of the 42 curriculum by tgerman.*

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to write a small
C library, `libft.a`, that re-implements a set of standard libc functions and
adds some extra utility functions. The library is meant to be reused in later
C projects of the curriculum.

Every function lives in its own `ft_*.c` file and is declared in `libft.h`.
The code follows the 42 Norm and uses no global variables.

## Instructions

Build the library:

```sh
make
```

This creates `libft.a` at the root of the repository. Other rules:

| Rule          | Effect                                   |
|---------------|------------------------------------------|
| `make` / `all`| compile the sources and create `libft.a` |
| `make clean`  | remove the object files                  |
| `make fclean` | remove the object files and `libft.a`    |
| `make re`     | rebuild everything from scratch          |

Use it in a program by including the header and linking the library:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Library content

### Part 1 - Libc functions

| Function | Description |
|----------|-------------|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character classification, return 1 or 0 |
| `ft_toupper`, `ft_tolower` | Convert a letter to upper / lower case |
| `ft_strlen` | Length of a string |
| `ft_memset`, `ft_bzero` | Fill memory with a byte / with zeros |
| `ft_memcpy`, `ft_memmove` | Copy memory (`ft_memmove` handles overlap) |
| `ft_memchr`, `ft_memcmp` | Search / compare memory |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy / concatenation |
| `ft_strchr`, `ft_strrchr` | First / last occurrence of a character |
| `ft_strncmp` | Compare at most `n` characters of two strings |
| `ft_strnstr` | Find a substring within the first `len` characters |
| `ft_atoi` | Convert a string to an `int` |
| `ft_calloc` | Allocate zero-filled memory |
| `ft_strdup` | Duplicate a string |

### Part 2 - Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Allocate a substring of `s` starting at `start`, at most `len` long |
| `ft_strjoin` | Allocate the concatenation of two strings |
| `ft_strtrim` | Allocate a copy of `s1` without the `set` characters at both ends |
| `ft_split` | Split a string on a delimiter into a NULL-terminated array |
| `ft_itoa` | Convert an `int` to an allocated string |
| `ft_strmapi` | Build a new string by applying `f` to each character |
| `ft_striteri` | Apply `f` to each character of a string in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a char / string / line / number to a file descriptor |

### Part 3 - Linked list

The list functions use this structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create a new node |
| `ft_lstadd_front`, `ft_lstadd_back` | Add a node at the beginning / end of a list |
| `ft_lstsize` | Count the nodes of a list |
| `ft_lstlast` | Return the last node of a list |
| `ft_lstdelone` | Free one node and its content |
| `ft_lstclear` | Free a node and all the following ones |
| `ft_lstiter` | Apply `f` to the content of each node |
| `ft_lstmap` | Create a new list from the results of `f` on each node |

## Resources

- The Linux and BSD manual pages (`man 3 strlen`, `man 3 strlcpy`, `man 3 calloc`, ...)
- [The 42 Norm](https://github.com/42School/norminette)
- [GNU make manual](https://www.gnu.org/software/make/manual/make.html)
- *The C Programming Language*, B. Kernighan and D. Ritchie

### AI usage

I didnot use ai at all
