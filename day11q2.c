//Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
int main()
{
  float sp,cp,percentage ;
  
  scanf("%f %f", &sp,&cp);
  
  if(sp>cp){
  percentage=((sp-cp)/cp)*100;
  printf("profit %.0f%%", percentage);
  }
  
  else if(cp>sp){
  percentage= ((cp-sp)/cp)*100;
  printf("loss %.0f%%",percentage);
  }
  
  else{
  printf("no loss no profit");}
  
return 0;
}


C:\Users\PRACHI SINGHAL\Downloads\c programming>day11q2
125 160
loss 22%

