#include <stdio.h>

#define MAX_FIBONACCI 1000

unsigned long int loopFibonacci( int number);
unsigned long int recursiveFibonacci( int number);
unsigned long int recursiveArrayFibonacci(int number);

unsigned long int fibonacci[MAX_FIBONACCI];

int main()
{
  unsigned long int result = 0;
  int number;
  fibonacci[0]=0;
  fibonacci[1]=1;
  
  do{
    printf("Enter a number (0-%d) to get the fibonacci: ", MAX_FIBONACCI);
    scanf("%d",&number);
  }while(number < 0 || number > MAX_FIBONACCI );

  result = loopFibonacci(number);
  printf("Fibonacci (for loop) of %d: %ld \n ",number,result);

  result = recursiveArrayFibonacci(number);
  printf("Fibonacci (recursive using Array) of %d: %ld \n ",number,result);
  
  result = recursiveFibonacci(number);
  // worst performance
  printf("Fibonacci (recursive) of %d: %ld \n ",number,result);
  
  return 0;
}

unsigned long int loopFibonacci( int number)
{
  unsigned long int result = 0;
  unsigned long int fiboN1 = 0;
  unsigned long int fiboN2 = 0;
  int i;
  fiboN1 = number<= 1? number == 0? 0: 1 : 1;
  result = fiboN1; 
  for (i=2; i<= number; ++i)
    {
      result= fiboN1 + fiboN2;
      fiboN2 = fiboN1;
      fiboN1=result;
	
    }
  return result;
}

unsigned long int recursiveFibonacci( int number)
{
  if(number <= 1)
    {
      return number;
    }
  else
    {
      return  recursiveFibonacci( number -1 ) + recursiveFibonacci( number-2);
    }
}

unsigned long int recursiveArrayFibonacci(int number)
{
  if( number <= 1)
    {
      return number;
    }

  unsigned long int fiboN1 =fibonacci[number-1] != 0 ? fibonacci[number-1]:recursiveArrayFibonacci(number-1);
  unsigned long int fiboN2 =fibonacci[number-2] != 0 ? fibonacci[number-2]:recursiveArrayFibonacci(number-2);
  
  fibonacci[number]= fiboN1 + fiboN2;

  return fibonacci[number]; 

}
