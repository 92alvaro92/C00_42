#include <unistd.h>

void ft_print_comb(void) {
    int i, j, k;
    
    for (i = 0; i <= 7; i++) {
        for (j = i + 1; j <= 8; j++) {
            for (k = j + 1; k <= 9; k++) {
                char digits[3] = {i + '0', j + '0', k + '0'};
                
                write(1, digits, 3);
                
                if (i != 7)
                {
                    write(1, ", ", 2);
                }
                
            }
        }
    }
}

int main() {
    ft_print_comb();
    return 0;
}
