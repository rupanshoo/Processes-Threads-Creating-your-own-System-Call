/* 
   Name: Rupanshoo Saxena
   Roll_Number: 2019096 
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int gloVar = 10;

void *childFunc(){   //child function  --> decrememnts

   printf("\nChild Process begins!\n");
   while(gloVar>=-90){
         printf("%d ", gloVar);
         gloVar--;
   }

   return NULL;
}

int main(){   //Parent thread --> incrementing

   //child thread's ID
   pthread_t child;
   
   //to create a child thread
   pthread_create(&child, NULL, &childFunc, NULL);
   
   
   //ensures that main(parent) thread waits until the parent thread finishes
   pthread_join(child, NULL);

   printf("\nParent process begins!\n");
      while(gloVar<=100){
         printf("%d ", gloVar);
         gloVar++;
      }

   return 0;
}