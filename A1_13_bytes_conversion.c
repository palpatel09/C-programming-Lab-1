#include<stdio.h>
//Question.13 convert bytes into KB, MB and GB
int main() {
    int bytes;
    printf("enter the size in bytes:");
    scanf("%d", &bytes);
    float kb = (float)bytes / 1024; // 1 KB = 1024 bytes
    float mb = (float)kb / 1024; // 1 MB = 1024 KB
    float gb = (float)mb / 1024; // 1 GB = 1024 MB
    printf("%d bytes is equal to %f KB,  %f MB, %f GB ", bytes, kb, mb, gb);
    return 0;
}