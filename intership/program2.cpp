#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int n;
bool prime[1000000];

// This function use for unmarking non-prime number by use multiple of prime.
// For example, if P is prime, 2P 3P 4P ... are not prime.
void f_delete(int i){
    for (int index = 2*i; index <= n; index+=i){
            prime[index] = false;
    }
}

int main(int argc, char* argv[]) {
  //Input
  n = atoi(argv[1]);

  //Initial all number are prime
  for(int i=2;i<=n;i++){
      prime[i] = true;
  }

  //Strating ummark prime
  for(int i=2;i<=n; i++){
	if (prime[i]==true) f_delete(i);
  }
  
  // โชว์ค่าoutput
  for(int i=2;i<=n;i++) {
	if (prime[i]==true){
	    printf("%d " , i);
	}
  }
  return 0;
}
