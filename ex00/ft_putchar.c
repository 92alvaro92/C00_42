#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    char myChar = 'A';
    ft_putchar(myChar);
    return 0;
}

