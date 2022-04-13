/**
* @file Course Statistics
* @brief Identify, pass and count the courses to which students are applying.
* @author prof and albert
* @date 4/13/2022
*/
#include <stdio.h>
/**< defind a variable dot_product_slow, A, B, Length*/
int dot_product_slow(int A[], int B[], int length);
/**< defind a variable A,B */

/**
* @brief 10 billion operations
* @param A, B, Length
* @retval Returns the product of A and B after 10 billion operations
*/
int main(int argc, char *argv)
{
  int A[3] = {4,5,6};
  int B[3] = {7,8,9};
  int result = 0;

  for (int i = 0; i < 1000000000; i++)
  {
    result = dot_product_slow(A, B, 3);
  }
   
}
 
int dot_product_slow(int A[], int B[], int length)
{
  int result = 0;/**< defind a variable result*/
  for (int i = 0; i < length; i++)
  {
    result += A[i] * B[i];
  }
  return result;
}
