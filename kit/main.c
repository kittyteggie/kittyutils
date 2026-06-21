#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buffer[1024];
     if (argc > 1 && strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0){
        printf("conkitenate (Kittyutils) v0.02\nRepo: https://github.com/kittyteggie/kittyutils\n");
        return 0;
    }
    if(argc != 2){
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if(file == NULL){
        printf("Error: Could not open file.\n");
        return 1;
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL){
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}
