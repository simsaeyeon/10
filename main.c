#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	FILE*fp;
	fp=fopen("sample.txt","w");
	
	int i;
	char txt[30];
	
	for(i=0;i<3;i++){
		printf("input a word:");
		scanf("%s",txt);
		fprintf(fp,"%s\n",txt);
	}
	fclose(fp);
}
