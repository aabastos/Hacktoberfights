#include <stdio.h>

int century(int year){
  int resp = 0;

  if(year % 100 == 0){
    resp = year / 100;
  }else{
    resp = (year / 100) + 1;
  }

  return resp;
}

int main(){
  printf("%d\n", century(2000));
}
