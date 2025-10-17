#include <stdio.h>

__attribute__((always_inline)) int read_reg(int reg){
    return reg + 1;
}

int main()
{
    int reg = 0;
    while(read_reg(reg) < 0);
}