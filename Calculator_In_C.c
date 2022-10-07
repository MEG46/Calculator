#include <stdio.h>
int main(){
	char c;
	char ch;
	do{
	double num1,num2;
	printf("Please enter a number : ");
	scanf("%lf",&num1);
	fflush(stdin);
	printf("Please enter a process : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%lf",&num2);
	fflush(stdin);
	if(c=='+'){
		printf("%lf + %lf = %.5lf\n",num1,num2,(num1+num2));
	}else if(c=='-'){
		printf("%lf - %lf = %.5lf\n\n",num1,num2,(num1-num2));
	}else if(c=='x'){
		printf("%lf x %lf = %.5lf\n\n",num1,num2,(num1*num2));
	}else if(c=='*'){
		printf("%lf x %lf = %.5lf\n\n",num1,num2,(num1*num2));
	}else if(c=='/'){
		if(num2==0){
			printf("Couldn't be divided by 0.\n");
		}
		printf("%lf / %lf = %.5lf\n\n",num1,num2,(num1/num2));
		
	}else if(c=='%'){
		printf("%d %% %d = %d\n",(int)num1,(int)num2,((int)num1%(int)num2));
	}else{
		printf("Invalid Process!\n");
	}
	fflush(stdin);
	printf("Do you want to continue ? (Y / N) : ");
	scanf("%c",&ch);
	fflush(stdin);
	}while(ch!='N');
	return 0;
}