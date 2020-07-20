#include<stdio.h>
 
int main()
{
	char encryptText[100], decryptText[100];
	int option, encryptKey, decryptKey;
	//mainFunction
	while(1)
	{
		
		printf("1. Encrypt\n");
		printf("2. Decrypt\n");
		printf("Choose the function\n");
		scanf("%d", &option);
		
		switch(option) {
	      case 1 :
	        printf("Enter a message to encrypt: ");
			scanf("%s", encryptText);
			printf("Enter key: ");
			scanf("%d", &encryptKey);
			encrypt(encryptText, encryptKey);
	        break;
	      case 2 :
	        printf("\nEnter a message to decrypt: ");
			scanf("%s", decryptText);
			printf("Enter key: ");
			scanf("%d", &decryptKey);
			decrypt(decryptText, decryptKey);
	        break;
	      default :
	        printf("Invalid option\n" );
  		 }
	}
	
	return 0;
}

//function for encrypt
void encrypt(char encryptMessage[100], int enKey){
	
	char ch1;
	int i;
	
	for(i = 0; encryptMessage[i] != '\0'; ++i)
	{
			ch1 = encryptMessage[i];
			
			if(ch1 >= 'a' && ch1 <= 'z'){
				ch1 = ch1 + enKey;
				
				if(ch1 > 'z'){
					ch1 = ch1 - 'z' + 'a' - 1;
				}
				
				encryptMessage[i] = ch1;
			}
			else if(ch1 >= 'A' && ch1 <= 'Z'){
				ch1 = ch1 + enKey;
				
				if(ch1 > 'Z'){
					ch1 = ch1 - 'Z' + 'A' - 1;
				}
				
				encryptMessage[i] = ch1;
			}
		}
		
	printf("Encrypted message: %s \n\n", encryptMessage);
}

//function for decrypt
void decrypt(char decryptMessage[100], int deKey)
{
	
	char ch;
	int j;
	
	for(j = 0; decryptMessage[j] != '\0'; ++j)
	{
	ch = decryptMessage[j];
	
	if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - deKey;
		
		if(ch < 'a')
		{
			ch = ch + 'z' - 'a' + 1;
		}
		
		decryptMessage[j] = ch;
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch - deKey;
		
		if(ch < 'A')
		{
			ch = ch + 'Z' - 'A' + 1;
		}
		
		decryptMessage[j] = ch;
	}
}

	printf("Decrypted message: %s \n\n", decryptMessage);
	

}



