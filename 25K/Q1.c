#include <stdio.h>
#include <string.h>

int main(){
	user[] = "Fast1234";
	char username[30];
	printf("Enter the username: ");
	scanf("%s",username);
	//if(strcmpi(username , user ) == 0){
	if(strcmp(username , user) == 0){
		char passWord[20];
		printf("Enter the password: ");
		scanf("%s",passWord);
		
		int len = strlen(passWord);
		if(len >= 8){
			if( strchr(passWord, '@' || '#') == 0 ) printf("The password is good to go");
			else printf("Missing @ or #\n");
		}
		else printf("The length of password should be greater than or equal to 8\n");
	}	
	//}
	//else printf("user not matched");
}
