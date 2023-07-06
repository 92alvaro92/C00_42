#include <unistd.h>

void ft_is_negative(int n){
    char positivo ='P';
    char negativo ='N';

    if (n > 0)
    {
        write(1, &positivo, 1);
    }
    else {
        write(1, &negativo, 1);
    }

}

int main(){
    int a = 1;
    int b = -1;
    ft_is_negative(a);
    ft_is_negative(b);
    return 0;
}