#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    if (start.x == finish.x || start.y == finish.y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Coord start, finish;
    
    scanf("%d %d", &start.x, &start.y);
    scanf("%d %d", &finish.x, &finish.y);
    
    int result = canGet(start, finish);
    if (result) {
        printf("Ладья может попасть на конечную точку за один ход\n");
    } else {
        printf("Ладья не может попасть на конечную точку за один ход\n");
    }
    return 0;
}
