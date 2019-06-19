#include <stdio.h>
#include <math.h>
void alter(int x,int y);
int main(){
	int x, y;
	printf("please input x and y:");
	scanf("%d %d",&x,&y);
	alter(x,y);
	return 0;
} 
void alter(int x,int y){
	printf("%d %d\n",x+y,abs(x-y));
}
