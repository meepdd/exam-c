#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

struct University* biggestUniversity(struct University data[], int n) {
    if (n <= 0) {
        return NULL;
    }
    
    struct University* maxUniversity = &data[0];
    
    for (int i = 1; i < n; i++) {
        if (data[i].numberOfStudents > maxUniversity->numberOfStudents) {
            maxUniversity = &data[i];  
    }
    }
    return maxUniversity;
}

int main() {
    struct University universities[] = {
        {"MSU", 51354, 5},
        {"HSE", 45972, 5},
        {"Sirius University", 1200, 5},
        {"Innopolis", 18000, 4},
        {"MGIMO", 15987, 3},
        {"Sinergiya", 999, 1}
    };
    
    int size = sizeof(universities) / sizeof(universities[0]);
    
    struct University* maxUniversity = biggestUniversity(universities, size);
    
    if (maxUniversity != NULL) {
        printf("%s\n", maxUniversity->name);
        printf("%d\n", maxUniversity->numberOfStudents);
        printf("%d\n", maxUniversity->rating);
    } else {
        printf("Ошибка: массив университетов пустой.\n");
    }
    
    return 0;
}
