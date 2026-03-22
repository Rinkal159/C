#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // FILE *file = fopen("colors.txt", "a");

    // char name[50];
    // printf("Name of color: ");
    // fgets(name, sizeof(name), stdin);

    // fprintf(file, "%s", name);

    // fclose(file);

    //&-------------------------------------------------------------------------------------------------

    //* Copy paste
    // //^ fgetc :
    // // reads character one at a time, then moves the pointer to next character, for fgetc, fopen must have defined as "r" : read a file
    // // it only has one parameter, the name of file pointer you want to read a character from

    // //^ fputc :
    // // it writes a character one at a time, then moves the character to next character, for fputc, fopen must have defined as "w" : write a file
    // // it has two parameters, first - the character you want to write and second - the name of file pointer in which you want to write

    // FILE *source = fopen("HelloFile.txt", "r");
    // FILE *destination = fopen("HelloFileCopy.txt", "w");

    // char ch;
    // while ((ch = fgetc(source)) != EOF)
    // {
    //     fputc(ch, destination);
    // }

    //&-------------------------------------------------------------------------------------------------

    //* Randomely gussing number of characters in the source file
    // FILE *source = fopen("HelloFile.txt", "r");
    // FILE *destination = fopen("HelloFileCopy.txt", "w");

    // char buffer[10];

    // fread(buffer, sizeof(char), 10, source);
    // fwrite(buffer, sizeof(char), 10, destination);

    // fclose(source);
    // fclose(destination);

    //&-------------------------------------------------------------------------------------------------

    //* Finding exact number of characters in the source file then copying the file
    // FILE *source = fopen("HelloFile.txt", "r");
    // FILE *destination = fopen("HelloFileCopy.txt", "w");

    // fseek(source, 0, SEEK_END);
    // long size = ftell(source);
    // rewind(source);

    // char *text = malloc(size + 1);

    // fread(text, sizeof(char), size, source);
    // text[size] = '\0';
    // fwrite(text, sizeof(char), size, destination);

    // free(text);
    // fclose(source);
    // fclose(destination);

    //&-------------------------------------------------------------------------------------------------

    //* copying character by character
    FILE *source = fopen("HelloFile.txt", "r");
    FILE *destination = fopen("HelloFileCopy.txt", "w");

    unsigned char text;

    while(fread(&text, sizeof(char), 1, source)) {
        fwrite(&text, sizeof(char), 1, destination);
    }

    fclose(source);
    fclose(destination);


    //* We have two ways of copying a file through fread and fwrite. 
    // First way: by creating an array where we first stores the content by fread, then frwrite from that array.
    // it needs fseek and ftell to first know the number of characters in the cource file, then creating a pointer and allocatoing that size of memory through malloc, then fread and fwrite.

    // second way:  by simply read and write character by character using while loop till fread is non-zero.
}