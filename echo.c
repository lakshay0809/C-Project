/* Rewriting ECHO command.
 * @lakshay khanna (1910991116)
 * C Project
 *Compilation: echo.c
 * Execution: ./a.out
 */
#include<stdio.h>
int main(int argc,char* argv[])
{
  int i;
  if(argc<=1){
      printf("PLEASE ENTER ANY ARGUMENT");
  }
  else{
      for(i=0;i<argc;i++){
          printf("%s ",argv[i]);
      }
  }
}