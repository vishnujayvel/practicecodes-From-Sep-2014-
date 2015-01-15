#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
double triangle[3][3];
double rotate[3][3];
void display(double tri[3][3]){
	line(tri[0][0],tri[1][0],tri[0][1],tri[1][1]);
	line(tri[0][1],tri[1][1],tri[0][2],tri[1][2]);
	line(tri[0][2],tri[1][2],tri[0][0],tri[1][0]);
}
void rotate1(double deg){
	double temp1[3][3],temp2[3][3],ans[3][3];
	double rad=(deg*3.14)/180;
	int i,j,k;
	double trans[3][3]={0};
	trans[0][0]=trans[1][1]=trans[2][2]=1;
	trans[0][2]=-triangle[0][0];
	trans[1][2]=-triangle[1][0];
	
	rotate[0][0]=rotate[1][1]=cos(rad);
	rotate[0][1]=-sin(rad);
	rotate[1][0]=sin(rad);
	rotate[0][2]=rotate[1][2]=rotate[2][0]=rotate[2][1]=0;
	rotate[2][2]=1;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 temp1[i][j]=0;
			for(k=0;k<3;k++){
			        temp1[i][j]+=(rotate[i][k]*trans[k][j]);
			}
		}
	}
	trans[0][2]=triangle[0][0];
	trans[1][2]=triangle[1][0];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 temp2[i][j]=0;
			for(k=0;k<3;k++){
			        temp2[i][j]+=(trans[i][k]*temp1[k][j]);
			}
			printf("%d",temp2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			 ans[i][j]=0;
			for(k=0;k<3;k++){
			        ans[i][j]+=(triangle[i][k]*temp2[k][j]);
			        
			}
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	//display(ans);
	
			
}
void translate(){
	

}
int main(){
	int gd=DETECT,gm;
	printf("\nEnter Ist coordinates of triangle:");
    scanf("%f %f",&triangle[0][0],&triangle[1][0]);
    printf("\nEnter 2nd coordinates of triangle:");
    scanf("%f %f",&triangle[0][1],&triangle[1][1]);
    printf("\nEnter 3rd coordinates of triangle:");
    scanf("%f %f",&triangle[0][2],&triangle[1][2]);
    triangle[2][0]=triangle[2][1]=triangle[2][2]=1;
    initgraph(&gd,&gm,NULL);
    display(triangle);
    rotate1(45.0);
    delay(50000);
    
}
    

	

