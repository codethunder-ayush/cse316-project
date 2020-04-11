#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	char arr[50];
	printf("enter the string :");
	int i=0;
	while(i<10){
	scanf("%c",&arr[i]);
	i++;}
	int fd[2];	
	write(fd[1],arr,strlen(arr));
	int y=strlen(arr);	
	for(i=0;i<strlen(arr);i++)
		{
		if((int)arr[i]>=65 && (int)arr[i]<=90)
			{
				arr[i]=(int)arr[i]+32; //upper case
			
			}
		else if((int)arr[i]>=97 && (int)arr[i]<=122)
			{
				arr[i]=(int)arr[i]-32; //lower case
			
			}
		}
	close(fd[0]);//closing 
	read(fd[0],arr,strlen(arr));//fd[0]->read
	printf("\n\nreading from the file  :%s\n",arr);
	
}
