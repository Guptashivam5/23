#include<stdio.h>
void main(){
	char ch;
	printf("please enter an alphabet :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("the given alphabet is vowel");

	else
		printf("the given alphabet is constant");
		
}
