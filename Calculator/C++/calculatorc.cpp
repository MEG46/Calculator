#include <iostream>
using namespace std;
float sum(float num1,float num2,char ch){
	return num1 + num2;
}
float subs(float num1,float num2,char ch){
	return num1 - num2;
}
float mult(float num1,float num2,char ch){
	return num1 * num2;
}
float div(float num1,float num2,char ch){
	return num1 / num2;
}
void printres(float num1,float num2,char ch,float result){
	cout << num1 << " " << ch << " " << num2 <<" = " << result << endl;
}
void invalid(){
	cout << "Invalid Process!" << endl;
}
int main(){
	char ch;
	int count=1;
	float num1,num2,result;
	while(count>0){
		if(count==1){
			cout << "Please enter a number : ";
			cin >> num1;
			fflush(stdin);
			cout << "Please enter a process : ";
			cin >> ch;
			fflush(stdin);
			cout << "Please enter a number : ";
		    cin >> num2;
			fflush(stdin);
			if(ch=='+'){
				result=sum(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='-'){
				result=subs(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='*'||ch=='x'){
				result=mult(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='/'){
				if(num2==0){
					cout << "Couldn't divided by zero. Please enter a different number!" << endl;
				}else{
				result=div(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}
			}else{
				invalid();
			}
		}else{
			cout << "Num1 : " << num1 << endl;
		    cout << "Please enter a process : ";
		    cin >> ch;
			fflush(stdin);
			cout << "Please enter a number : ";
			cin >> num2;
			fflush(stdin);
			if(ch=='+'){
				result=sum(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='-'){
				result=subs(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='*'||ch=='x'){
				result=mult(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}else if(ch=='/'){
				if(num2==0){
					cout << "Couldn't divided by zero. Please enter a different number!" << endl;
				}else{
				result=div(num1,num2,ch);
				printres(num1,num2,ch,result);
				num1=result;
			}
			}else if(ch=='0'){
				count=0;
				cout << "Refreshed!" << endl;
			}else{
				invalid();
			}
		}
		count++;
	}
	return 0;
}