#include<stdio.h>

int main(){
  int burstTime[]={1,7,3,2,9,4};
  int totalTime=0,n=6;
  for(int i=0;i<n;i++){
    totalTime+=burstTime[i];
  }
  printf("Total time for execution: %d \n",totalTime);
  printf("Average waiting time: %.2f \n",(double)totalTime/(double)n);
}