### Tasks

#### Task 0: Creating Dynamic Library `libdynamic.so`
- **Objective**: Create a dynamic library named `libdynamic.so` containing various functions.
  - Functions to be included:
    ```c
    int _putchar(char c);
    int _islower(int c);
    int _isalpha(int c);
    int _abs(int n);
    int _isupper(int c);
    int _isdigit(int c);
    int _strlen(char *s);
    void _puts(char *s);
    char *_strcpy(char *dest, char *src);
    int _atoi(char *s);
    char *_strcat(char *dest, char *src);
    char *_strncat(char *dest, char *src, int n);
    char *_strncpy(char *dest, char *src, int n);
    int _strcmp(char *s1, char *s2);
    char *_memset(char *s, char b, unsigned int n);
    char *_memcpy(char *dest, char *src, unsigned int n);
    char *_strchr(char *s, char c);
    unsigned int _strspn(char *s, char *accept);
    char *_strpbrk(char *s, char *accept);
    char *_strstr(char *haystack, char *needle);
    ```
- **Instructions**:
  - Generate the dynamic library `libdynamic.so` with the listed functions.
  - Include a `main.h` file in your repository with prototypes for all the functions.

- **Execution & Verification**:
  - Compile and execute a sample program `0-main.c` using `libdynamic.so`.
  - Set `LD_LIBRARY_PATH` and verify successful execution of the program.

#### Task 1: Creating Dynamic Library `liball.so`
- **Objective**: Create a script to generate a dynamic library named `liball.so` from all `.c` files in the current directory.
- **Instructions**:
  - Create a script (`1-create_dynamic_lib.sh`) that compiles all `.c` files into `liball.so`.
- **Verification**:
  - Check symbols in the generated library `liball.so` using `nm -D --defined-only liball.so`.

**Repository Details**
- **GitHub Repository**: alx-low_level_programming
- **Directory**: 0x18-dynamic_libraries
- **Files**:
  - `libdynamic.so`, `main.h` for Task 0
  - `1-create_dynamic_lib.sh` for Task 1

