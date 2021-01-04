#include<stdio.h>
void mx_cube(int n);
void mx_pyramid(int n);
int main(){
    int n;
    scanf("%d",&n);
    mx_cube(n);
    printf("\n");
    mx_pyramid(n);
    return 0;
}