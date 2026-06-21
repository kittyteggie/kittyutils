#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1 &&
        (strcmp(argv[1], "--version") == 0 ||
         strcmp(argv[1], "-v") == 0)) {
        printf("meow (Kittyutils) v0.02\nRepo: https://github.com/kittyteggie/kittyutils\n");
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        printf("%s", argv[i]);
        if (i < argc - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
