/* Rewriting cp command.
 * @lakshay khanna (1910991116)
 * C Project
 *Compilation: cp.c
 * Execution: ./a.out
 */
#include<stdio.h>
int main(int agrc, char* argv[]){
    FILE *f1,*f2;
    f1=fopen(argv[1],"r");
    f2=fopen(argv[2],"w");
    if(!f1 || !f2 || argc!=3){
        printf("error");
    }
    char c;
    while((c=fgetc(f1))!=EOF){
        fputc(c,f2)
    }
    fclose(f1);
    fclose(f2);
}