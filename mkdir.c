/* Rewriting mkdir command.
 * @lakshay khanna (1910991116)
 * C Project
 *Compilation: mkdir.c
 * Execution: ./a.out
 * source :-GEEKS FOR GEEKS
 */
#include<stdio.h>
#include<sys/stat.h>
int main(int argc,char* argv[])
{
  int i;
  i=mkdir(argv[1],0777);
  if(!i)
  {
      printf("CREATED SUCCESSFULLY");
  }
  else{
      
          printf("ERROR");
      
  }
}
