#include <stdio.h>
#include <string.h>

int main(){
	char firstName[15];
	char lastName[15];
	printf("Enter your first name: ");
	scanf("%s",firstName);
	printf("Enter you last name: ");
	scanf("%s",lastName);
	
	printf("Hello %s\n",strcat(firstName , lastName)); // greeting
	
	if(strstr(lastName, "Ali") ){
		printf("%s",strcat(firstName , "(VIP)"));
	}
	
	printf("The Nickname is %s",strncpy(lastName , firstName , 2)); // tried with Hamza Ahmed
}

