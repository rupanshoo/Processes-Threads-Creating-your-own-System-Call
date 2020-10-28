/* 
   Name: Rupanshoo Saxena
   Roll_Number: 2019096 
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#define call 440

int main(int argc, char * argv){
	long pid;
	char filename[1000];
   printf("Enter PID\n");
	scanf("%ld", &pid);
   printf("Enter file Name with .txt extension\n");
	scanf("%s", filename);
	
	long ret = syscall(call,pid,filename);
	if(ret ==0) printf("works");
	else printf("doesnot work");
	return ret;
}