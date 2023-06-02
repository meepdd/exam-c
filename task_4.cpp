#include <stdio.h>

void changeRegister(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    changeRegister(str);

    printf("%s", str);

    return 0;
}
