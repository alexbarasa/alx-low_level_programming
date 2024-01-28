#include <unistd.h>
#define STDOUT_FILENO 1
void my_putchar(char c) {
    write(STDOUT_FILENO, &c, 1);
}
