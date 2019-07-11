#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int Dice(int);
int main(){
  srand((unsigned int)time(NULL));
  int value=0;
  int i;

 
  printf("Rolling the dice...\n");

  for(i=0;i<2;i++)
    value=value+Dice(i+1);

  
  printf("Total value:%d\n",value);
  
  if(value>=7) printf("You won!\n");
  else printf("You lost!\n");
  
  return 0;
}

int Dice(int i){
  int number;
  number=rand()%6+1;
  printf("Die %d:%d\n",i,number);
  return number;
}
