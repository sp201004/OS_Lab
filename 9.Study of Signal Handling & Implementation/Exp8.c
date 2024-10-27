#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
void sig_handler(int signo){
  if(signo==SIGINT){
     printf("\n received SIGINT");
  }
}
int main(){
  if(signal(SIGINT, sig_handler)==SIG_ERR){
    printf("\n can't catch SIGINT");
  }
  while(1);
  sleep(1);
  return 0;
}         
