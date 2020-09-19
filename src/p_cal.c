#include "math.h"
#include "stdio.h"
#include "p_cal.h"





/* give 2 number and choose the opperator*/
int calculator(int num1,int num2,int operator)
{

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int root(int num1,int num);
int logarithm(int num1,int num);
int power(int num1,int num);


  int  result;
  int (*operation[7])(int, int);

  operation[0] = add;//choose + for add
  operation[1] = subtract;//choose - for sub
  operation[2] = multiply;//choose * for multiplication
  operation[3] = divide;// choose / for divide
  operation[5] = logarithm;//choose log for log value1 to base value2
  operation[6] = root;//choose root to find the root value
  operation[4] = power;//choose ^ for num1 power num 2



  result = operation[operator](num1, num2);


  return result;
}


int add(int num1, int num2)
{
  int intermidiate;
   intermidiate=num1-num2;
   return(intermidiate);
}

int subtract(int num1, int num2)
{
int intermidiate;
   intermidiate=num1-num2;
   return(intermidiate);
}

int multiply(int num1, int num2)
{
 int intermidiate;
   intermidiate=num1*num2;
   return(intermidiate);
}

int divide(int num1, int num2)
{
  if (num2 != 0)
    return (num1 / num2);
  else
    return 0;
}



float advance_calci(float num1,int operator)
{
    float square_root(float num1);
    float log_to_10(float num1);
    float natural_log(float num1);
    float exponential(float num1);
    float factorial(float number);
    float one_by(float number);
    float modulous(float number);
    float sine_fun(float num1);
    float cos_fun(float num1);
    float sec_fun(float num1);
    float cosec_fun(float num1);
   

    float result;
   float (*ope[12])(float);
    ope[0] = square_root;
  ope[1] = log_to_10;
  ope[2] = natural_log;
  ope[7] = factorial;
  ope[8] = one_by;
  ope[9] = modulous;
  ope[10]= exponential;
  ope[11]= cos_fun;
  ope[3] = sine_fun;
  ope[4] = sec_fun;
  ope[5] = cosec_fun;
 
    result = ope[operator](num1);
    return result;

}
float square_root(float num1)
{
   float value1;
   value1=sqrt(num1);
   return(value1);

}
float log_to_10(float num1)
{
   float value;
   value=log(num1)/log(10);
   return(value);

}
float natural_log(float num1)
{
   float value;
   value=log(num1);
   return(value);

}

float sine_fun(float num1)
{
   float value;
   value=sin(num1*(3.14/180));
   return(value);

}

float cos_fun(float num1)
{
   float value;
   value=cos(num1*(3.14/180));
   return(value);

}

float cosec_fun(float num1)
{
   float value;
   if(sin(num1*(3.14/180))==0){
    return 0;
   }
   else
    {
   value=1/sin(num1*(3.14/180));
   return(value);
    }}


float sec_fun(float num1)
{
   float value;
   if(cos(num1*(3.14/180))==0){
    return 0;
   }
   else
    {
   value=1/cos(num1*3.14/180);
   return(value);
    }
}

float one_by(float num1)
{
   float value;
   if(num1==0){
    return 0;
   }
   else{
   value=1/num1;
   return(value);
   }

}

float exponential(float num1)
{
   float value;
   value=exp(num1);
   return(value);

}
int power(int num1, int num2)
{
   int value;
   value=pow(num1,num2);
   return(value);
}

int logarithm(int num1, int num2) {
  int value;
  value=log(num1)/log(num2);
  return(value);
}
int root(int num1, int num2) {
    int value;
  if (num2 != 0)
    {
        value=pow(num1,(1/num2));
        return(value);

    }
  else
    return 0;}
float modulous(float num1)
{
   float value;
   value=abs(num1);
   return(value);

}

float factorial(float num1)
{

  if(num1 < 0)
    return -1;


  if(num1 == 0)
    return 1;


  return (num1 * factorial(num1-1));
}
int matrix(){
    int matrixs_sum();
    int matrix_sub();
    int matrix_mul();
    int (*opm[3])();
    opm[0]=matrixs_sum;
    opm[1]=matrix_sub;
    opm[3]=matrix_mul;
    return 0;
}

int matrixs_sum()
{

int row, coloum;
scanf("%d %d",&row,&coloum);
int index_r, index_c;
int mat1[row][coloum], mat2[row][coloum], mat3[row][coloum];
for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat1[index_r][index_c]);
}
for(index_r = 0; index_r < coloum; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat2[index_r][index_c]);
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
{
mat3[index_r][index_c] = mat1[index_r][index_c] + mat2[index_r][index_c];
}
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
printf("%d ", mat3[index_r][index_c]);
printf("\n");
}

return 0;
}

int matrix_sub()
{

int row, coloum;
scanf("%d %d",&row,&coloum);
int index_r, index_c;
int mat1[row][coloum], mat2[row][coloum], mat3[row][coloum];
for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat1[index_r][index_c]);
}
for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
scanf("%d",&mat2[index_r][index_c]);
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
{
mat3[index_r][index_c] = mat1[index_r][index_c] - mat2[index_r][index_c];
}
}

for(index_r = 0; index_r < row; index_r++)
{
for(index_c = 0; index_c < coloum; index_c++)
printf("%d", mat3[index_r][index_c]);
printf("\n");
}

return 0;
}

int matrix_mul()
{
int row, coloum, row1, column1, index_r, index_c, index, sum = 0;
int mat1[10][10], mat2[10][10], mat3[10][10];

printf("Enter number of rows and columns of mat1 matrix\n");
scanf("%d%d", &row, &coloum);
printf("Enter elements of matrix a\n");

printf("\nEnter number of rows and columns of mat2 matrix\n");
scanf("%d%d", &row1, &column1);

if (coloum != row1)
printf("\nThe matrices can’t be multiplied with each other.\n");
else
{
printf("\nEnter elements of matrix2\n");

for (index_r = 0; index_r < row1; index_r++)
for (index_c = 0; index_c < column1; index_c++)
scanf("%d", &mat2[index_r][index_c]);

for (index_r = 0; index_r < row; index_r++) {
for (index_c = 0; index_c < column1; index_c++) {
for (index = 0; index < row1; index++) {
sum = sum + mat1[index_r][index]*mat2[index][index_c];
}

mat3[index_r][index_c] = sum;
sum = 0;
}
}

printf("\nProduct of the matrices:\n");

for (index_r = 0; index_r < row; index_r++) {
for (index_c = 0; index_c < column1; index_c++)
printf("%d\t", mat3[index_r][index_c]);

printf("\n");
}
}

return 0;
}


































