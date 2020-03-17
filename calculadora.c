//esto es una calculadora basica
// el valor de entrada es "operacion" num1 num 2    "+12"
// donde operacion puede ser +.-.x./ mod, r(residuo) 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


float suma(float num1, float num2){
float result;
result=num1+num2;
//printf("%f",result);
return result;


}

float resta(float num1, float num2){
float result=num1-num2;
return  result;
}

float multiplicacion(float num1, float num2){
float result= num1*num2;
return result;


}

 int modulo ( int num1, int num2){
if(num2== 0 || num1==0){
printf("Error, divicion entre cero");

}
else {
int result= num1 % num2;
return result;

}

}
float divicion(float num1, float num2){
if(num2==0){
printf("Error, divicion entre cero");

}
else {
float result= num1 / num2;
return result;
//printf("%f", result);

}

}

int residuo(float num1, float num2){
if(num2==0){
printf("Error, divicion entre cero");

}
else {
int result= num1 / num2;
result=result*num2;
result =num1 -result;
return result;
//printf("%f", result);

}

}



int main(int argc, char**argv){
  float num1, num2;
char *operation=argv[1];
num1=atof(argv[2]);
num2=atof(argv[3]);

switch (*operation){

  case '+':
      printf("%f",suma(num1,num2) );
  break;

   case '-':
      printf("%f",resta(num1,num2) );
  break;
   case 'x':
      printf("%f",multiplicacion(num1,num2) );
  break;
   case '/':
      printf("%f",divicion(num1,num2) );
  break;
   case '%':
      printf("%d",modulo(num1,num2) );
  break;
  case 'r':
      printf("%d",residuo(num1,num2) );
  break;



}

return 0;
}