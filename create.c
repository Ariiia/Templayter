#include "stdio.h"
#include <sys/stat.h>
#include <sys/types.h>

void file_create(char* path);
void file_write(char* path, char* data);
void directory_create(char* path);

int main()
{
    printf("Choose what project you want to create:\n"
           "1) C \n2) Python \n3) Node.js \n...\n");
    int answer = 0;
    scanf("%d", &answer);

    switch (answer) {
    case 1: // C
        directory_create("./include");
        directory_create("./src");
        file_create("./src/main.c");
        file_write("./src/main.c", "int main()\n{\n\treturn 0;\n}");
        break;
    }

    return 0;
}


void file_create(char* path)
{
    FILE* file_ptr = fopen(path, "w");
    fclose(file_ptr);
}

void file_write(char* path, char* data)
{
    FILE *file_ptr = fopen(path, "w");
    fprintf(file_ptr, "%s", data);
    fclose(file_ptr);
}

void directory_create(char* path)
{
    mkdir(path, 0644);
}
