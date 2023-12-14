
#include<stdio.h>
#include<string.h>

//pointer version
char *pstrcat(char *str1,char *str2){
	char *p=str1;
	while(*p!='\0')
		p++;
	while(*(p)=*(str2)){
		p++;
		str2++;
	}
	return str1;
}
int main(){
	char str1[20],str2[20];
	char *str;
	printf("enter two strings\n");
	gets(str1);
	gets(str2);
	str=pstrcat(str1,str2);
	printf("result of pointer version is %s : ",str);
	printf("\n");
	return 0;
}


/*
//array version
int *astrcat(char str1[20],char str2[20]){
	int i=0;
	while(str1[i]!='\0')
		i++;
	while(str1[i++]=str2[j++])
		;
	return str1;
}
int main(){
	char str1[20],str2[20];
	char *str;
	printf("enter two strings\n");
	gets(str1);
	gets(str2);
	str=astrcat(str1,str2);
	puts(str);
	return 0;
}
*/



// strcat function version
/*
int main(){
	char str1[20],str2[20];
	printf("enter two strings : ");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("cat str1 and str2 : %s\n",str1);
	strcat(str1,"_one");
	printf("cat str1 and _one : %s\n",str1);
	return 0;
}
*/
 
