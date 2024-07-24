#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Ошибка: Необходимо передать хотя бы одно число.\n");
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    
    printf("Сумма: %d\n", sum);
    return 0;
}