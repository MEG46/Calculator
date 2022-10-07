#include <stdio.h>
int main(){
	char c;
	char ch;
	do{
	int num1,num2;
	printf("Please enter a number : ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("Please enter a process : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&num2);
	fflush(stdin);
	if(c=='+'){
		printf("%d + %d = %d\n",num1,num2,(num1+num2));
	}else if(c=='-'){
		printf("%d - %d = %d\n",num1,num2,(num1-num2));
	}else if(c=='*'){
		printf("%d * %d = %d\n",num1,num2,(num1*num2));
	}else if(c=='/'){
		if(num==0){
		printf("%d / %d = %d\n",num1,num2,(num1/num2));
		}
	}else if(c=='%'){
		printf("%d %% %d = %d\n",num1,num2,(num1%num2));
	}else{
		printf("Invalid Process!");
	}
	fflush(stdin);
	printf("Do you want to continue ? (Y / N) : ");
	scanf("%c",&ch);
	fflush(stdin);
	}while(ch!='N');
	return 0;
}
