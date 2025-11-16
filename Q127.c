#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each character and convert to uppercase
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);  
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully. Check output.txt\n");

    return 0;
}



