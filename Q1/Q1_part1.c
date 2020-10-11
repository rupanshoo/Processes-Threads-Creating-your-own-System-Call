/* 
   Name: Rupanshoo Saxena
   Roll_Number: 2019096 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int glVar = 10;  //initializing global variable



int main(){

   int forkVar;
   forkVar = fork();

   if(forkVar == 0)  //child process  --> decrements
   {
      printf("\nChild Process begins!\n");
      while(glVar>=-90){
         printf("%d ", glVar);
         glVar--;
      }
   }

   else   //parent process   --> increments
   {
      printf("\nParent process begins!\n");
      while(glVar<=100){
         printf("%d ", glVar);
         glVar++;
      }
   }

   return 0;
}