#include <stdio.h>
#include <stdlib.h>

void ana(int *arr,int *buff,int *used,int level);
int main (){
	int i, used[3],buff[3];
	int arr[3]={1,2,3};
	for(i=0;i<4;i++){
		used[i]=0;
	}
	ana(arr,buff,used,0);
	return 0;
}

void ana(int *arr,int *buff,int *used,int level){
	int i,j;
	if(level==3){
		for(j=0;j<3;j++)
		printf("%d",buff[j]);

		printf("\n");
		return;
	}
	for(i=0;i<3;i++){
		if(used[i]==0){
			used[i]=1;
			buff[level]=arr[i];

			ana(arr,buff,used,level+1);
			used[i]=0;

		}
	}
	return;

}
