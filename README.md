*This project has been created as part of the 42 curriculum by mkotan.*

# ft_printf

## Description
`ft_printf` is a custom implementation of the standard C `printf()` function.
The project helps you understand **variadic functions** and **argument handling** in C, while reinforcing good programming practices and memory management.

It supports printing multiple types:

- `%c` — single character
- `%s` — string
- `%p` — pointer address in hexadecimal
- `%d` / `%i` — integer in decimal
- `%u` — unsigned integer
- `%x` / `%X` — hexadecimal (lowercase/uppercase)
- `%%` — literal percent sign

Once completed, `ft_printf()` can be added to your `libft` for use in other C projects at 42.

---

## Instructions

### Compilation
To compile the library, run the Makefile:

```bash
make

This will create:

libftprintf.a

Other Makefile commands:

make clean — remove object files

make fclean — remove object files and the library

make re — clean and rebuild the library
```
### Usage

Include the header in your C files:

#include "ft_printf.h"

Then call ft_printf() just like the standard printf():

ft_printf("Hello %s, number: %d\n", "world", 42);
## Resources
- [Linux man pages](https://man7.org/linux/man-pages/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [C Programming Reference (cppreference)](https://en.cppreference.com/w/c)
- [42 Intra](https://intra.42.fr)

### AI Usage
AI tools were used **only** for:
- Clarifying documentation and function behavior
- Understanding edge cases and constraints
- Reviewing explanations after personal implementation
- External help was used while writing this README to improve readability and formatting.

No code was copied or generated directly by AI.
All implementations were written and tested manually.
Notes
No global variables were used

All heap allocations are properly freed

The project follows the 42 Norm

Designed to be reused in future projects

Author
👤 mkotan
42 Kocaeli
