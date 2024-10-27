#include<stdio.h>

int main(){
  int n=5,waitTotalTime=0;
  int execTime[]={4,1,2,3,7};
  int arrivalTime[]={1,2,1,1,2};
  for(int i=0;i<n;i++){
    waitTotalTime+=(execTime[i]-arrivalTime[i]);
  }
  printf("Total Waiting time: %d \n",waitTotalTime);
  printf("Average waiting time: %.2f \n", (double)waitTotalTime/(double)n);
}