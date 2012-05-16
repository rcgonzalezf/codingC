#include <stdio.h>

long int loopFibonacci( int number);
long int recursiveFibonacci( int number);

int main()
{
  long int result = 0;
  int number;
  
  do{
    printf("Enter a number (0-10000) to get the fibonacci: ");
    scanf("%d",&number);
  }while(number < 0 || number >=10000 );

  result = loopFibonacci(number);
  printf("Fibonacci (for loop) of %d: %ld \n ",number,result);
  
  result = recursiveFibonacci(number);
  printf("Fibonacci (recursive) of %d: %ld \n ",number,result);
  
  return 0;
}

long int loopFibonacci( int number)
{
  long int result = 0;
  long int fiboN1 = 0;
  long int fiboN2 = 0;
  int i;
  for (i=0; i<= number; ++i)
    {
      if(i>1)
	{
	  result= fiboN1 + fiboN2;
	  fiboN2 = fiboN1;
	  fiboN1=result;
	}
      else
	{
	  fiboN1= (i == 1)?1:0;
          result = fiboN1;
	}
    }
  return result;
}

long int recursiveFibonacci( int number)
{
  if(number <= 1)
    {
      return number == 1? 1: 0 ;
    }
  else
    {
      return  recursiveFibonacci( number -1 ) + recursiveFibonacci( number-2);
    }
}

