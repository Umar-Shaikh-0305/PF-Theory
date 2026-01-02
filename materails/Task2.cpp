#include <stdio.h>

int main(){
	int x,y;
	
	printf("Enter the coordinates of a point:");
	scanf("%d %d", &x, &y);
	printf("%d is x coordinate and %d is y coordinate\n", x, y);
	
	if(x>0 && y>0){
		printf("point lie in 1st quadrant.");
	} else if(x<0 && y>0){
		printf("point lie in 2nd Quadrant.");
	} else if(x<0 && y<0){
		printf("point lie in 3rd Quadrant");
	} else{
		printf("point lie in 4th Quadrant");
		}
		return 0;
}
