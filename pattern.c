/*
 Purpose: 
 Input: 4
 Output: 
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4

Author: Prajakta Khiste
*/
#include<stdio.h>
int main(){
    int n,l,m,p,z;
    printf("enter a number\n");
    scanf("%d",&n);
    m=(n*2)-2;        //for n=4, m=6
    int arr[m+1][m+1];//array to print the given pattern arr[7][7]
    l=n; 
    p=m;
    z=l;
    for(int i=0,k=m;i<=k;i++,k--){ //to divide rows of array in two symetrial parts
        for(int j=0,y=m;j<=y;j++,y--){ // to divide column of array in two symentrical parts
            if((i<=j)&&(j<=k)){
                    arr[i][j]=z; 
                    arr[k][j]=z;
                    arr[i][y]=z;
                    arr[k][y]=z;
            }
            else if(j<p){
                    arr[i][j]=l-j;
                    arr[i][y]=l-j;
                    arr[k][j]=l-j;
                    arr[k][y]=l-j;
            }
            
        }
        p--;
        z--;
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}