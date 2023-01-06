#include<stdio.h>
void main(){
	int i=0,j=0;
	while(i<3){
		j=0;
		while(j<i){
			printf("%d %d\n",i,j);
			j++;
		}
		i++;
	}
}