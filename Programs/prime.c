#include<stdio.h>
#include<conio.h>

void main(){
  int n,flag=0;
  printf("Enter the Number to be checked if prime or not: ");
  scanf("%d",&n);
  for(int i=2;i<n;i++){
    if(n%i==0){
      flag=1;
    }
  }
  if(flag==0){
    printf("The given number is prime");
  }else{
    printf("The given number is not prime");
  }
}
