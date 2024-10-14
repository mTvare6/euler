#include <stdbool.h>
#include <stdio.h>


static inline bool f(int r, int a, int b, int c){
  return a*a*(b+c)*(b+c) == r*r*(4*a*a + (b-c)*(b-c) );
}




#define R 2
#define X 10

int main(int argc, char *argv[]){

}
