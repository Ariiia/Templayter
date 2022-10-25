#include "stdio.h"
#include "stdlib.h"
#include <sys/stat.h>
#include <sys/types.h>

void file_create(char* path);
void directory_create(char* path);

int main()
{
    return 0;
}


void file_create(char* path)
{
    FILE* file_ptr = fopen(path, "w");
    fclose(file_ptr);
}

void directory_create(char* path)
{
    mkdir(path, 0644);
}
