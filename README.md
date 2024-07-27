# Get Next Line

The "Get Next Line" project is an implementation of the `get_next_line` function, which allows reading one line at a time from a file efficiently. This is a practical example using basic file and memory handling techniques in C.

## Project Structure

The project consists of three main files:

1. **`get_next_line.h`**: Header file containing function declarations and necessary definitions for the project.
2. **`get_next_line.c`**: Implementation of the `get_next_line` function, including file reading and text splitting into lines.
3. **`get_next_line_utils.c`**: Utility functions such as `ft_calloc` and `ft_strjoin` that assist with memory and string manipulation.

## Files

### `get_next_line.h`

This is the project's header file. It defines the `BUFFER_SIZE` constant, includes necessary libraries, and declares functions used in the project.

### `get_next_line.c`

This file contains the implementation of the following functions:
- **`char **ft_split(char *str)`**: Splits a string into lines and returns an array of strings.
- **`char *read_all_file(int fd)`**: Reads the entire content of the file and returns it as a string.
- **`char *get_next_line(int fd)`**: Returns the next line from the specified file descriptor.

### `get_next_line_utils.c`

This file implements utility functions:
- **`void *ft_calloc(size_t size, size_t count)`**: Allocates memory and initializes it to zero.
- **`char *ft_strjoin(char *s1, char *s2)`**: Concatenates two strings and returns the result.

## Compilation

To compile the project, you can use a command like the following:

```bash
gcc -Wall -Wextra -Werror -o get_next_line get_next_line.c get_next_line_utils.c

