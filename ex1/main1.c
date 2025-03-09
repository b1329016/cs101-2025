#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE* fp;
	fp = fopen("a.bin" , "wb+");
	int a[] = {0,1,2};
	char b[] = "ABC";
	float c[] = {1.1,1.2,1.3};
	int aread[3];
	char bread[3] ;
	float cread[3];
	fwrite(a , sizeof(int) , 3, fp);
	fwrite(b , sizeof(char) , 3, fp);
	fwrite(c , sizeof(float) , 3, fp);
	
	fseek(fp, 0, SEEK_SET);
	fread(aread, sizeof(int), 3, fp);
	fread(bread, sizeof(char), 3, fp);
	fread(cread, sizeof(float), 3, fp);	
	
	for(int i=0 ; i<3 ; i++) {
		printf("%d " ,aread[i]);
	}
	printf("\n");
	for(int i=0 ; i<3 ; i++) {
		printf("%c " ,bread[i]);
	}
	printf("\n");
	for(int i=0 ; i<3 ; i++) {
		printf("%f " ,cread[i]);
	}	
	
    return 0;
}
