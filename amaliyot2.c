#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *f = fopen("matn.txt", "r");
    char belgi;
    int katta=0;

    while ((belgi=fgetc(f)) != EOF)
    {
        printf("%c", belgi);
        katta += isupper(belgi);
    }
    printf("\nKatta harflar soni: %d ta\n", katta);
    
}