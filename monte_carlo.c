#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int n ){
   int incircle = 0;

  for ( int i=0; i<n ;i++ ){
  float x = frandom();
  float y= frandom();
  float  d= x*x + y*y;
  if ( d <= 1 ){
   incircle++;
   }
  }
  float pi = 4*(float)incircle/n;
   return pi;   

  }
float mc_pi(int n ){
   int incircle = 0;

  for ( int i=0; i<n ;i++ ){
  float x = frandom();
  float y= frandom();
float mc_pi(int n ){
   int incircle = 0;

  for ( int i=0; i<n ;i++ ){
  float x = frandom();
  float y= frandom();
  float  d= x*x + y*y;
  if ( d <= 1 ){
   incircle++;
   }
  }
  float pi = 4*(float)incircle/n;
   return pi;   

  }
  float  d= x*x + y*y;
  if ( d <= 1 ){
   incircle++;
   }
  }
  float pi = 4*(float)incircle/n;
   return pi;   

  }



float frandom() {
  long int q = random();
  float ret = (float)q/(float)RAND_MAX;
  return ret;
}
float mc_pi(int n ){
   int incircle = 0;
   
  for ( int i=0; i<n ;i++ ){
  float x = frandom();
  float y= frandom();
  float  d= x*x + y*y;
  if ( d <= 1 ){
   incircle++;
   }
  }
  float pi = 4*(float)incircle/n;
   return pi;   
  
  }
int main(void) {
  float pi0;
  float pi1;
