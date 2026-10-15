#include<stdio.h>

int main(){

    FILE *file = fopen("sonlar.txt", "r");
    int son;
    int yigindi = 0;

    while (fscanf(file,"%d",&son)!=EOF)
    {
        yigindi += son;
    }
    printf("Yigindi: %d", yigindi);

    fclose(file);
}