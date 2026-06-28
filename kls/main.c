#include <dirent.h>
#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[]){
    int showDetails = 0;
    int showHidden = 0;
    if (argc > 1){
        if (strcmp(argv[1], "-a") == 0){
            showDetails = 1;
        }
        else if(strcmp(argv[1], "-d") == 0){
            showHidden = 1;
        }
        else if(strcmp(argv[1], "-ad") == 0 || strcmp(argv[1], "-da") == 0){
            showDetails = 1;
            showHidden = 1;
        }
        else if(strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0){
            printf("kls (Kittyutils) v0.01\nRepo: https://github.com/kittyteggie/kittyutils\n");
            return 0;
        }
        else{
            printf("Usage: %s [-a] [-d] [-ad] [-v|--version]\n", argv[0]);
            return 1;
        }
    }
    DIR *directory = opendir(".");
    if(directory == NULL){
        perror("opendir");
        return 1;
    }
    struct dirent *directoryEntry;
    while((directoryEntry = readdir(directory)) != NULL){
        if(!showHidden && directoryEntry->d_name[0] == '.')
            continue;
        if(!showDetails){
            printf("%s\n", directoryEntry->d_name);
        }
        else{
            struct stat fileInfo;
            if(stat(directoryEntry->d_name, &fileInfo) != 0)
                continue;
            struct passwd *owner = getpwuid(fileInfo.st_uid);
            char dateString[32];
            strftime(
                dateString,
                sizeof(dateString),
                "%Y-%m-%d %H:%M",
                localtime(&fileInfo.st_mtime));
            printf("%-17s %10ld %-12s %s\n",
                   dateString,
                   (long)fileInfo.st_size,
                   owner ? owner->pw_name : "unknown",
                   directoryEntry->d_name);
        }
    }
    if(!showDetails)
        printf("\n");
    closedir(directory);
    return 0;
}
