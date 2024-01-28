#include <unistd.h>
#define STDOUT_FILENO 1
void _putchar(char c) {
    write(STDOUT_FILENO, &c, 1);
}
