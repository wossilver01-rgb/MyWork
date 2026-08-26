#include <stdio.h>


// Ao testar e analisar o código abaixo foi possível oberservar que:

int main(){
int a = 1, b = 2, c = 3, d = 4, e = 5;

printf(" a * b / c = %.3f\n ", (float) a * b / c);
// O resultado e 0.666, (float) tem usabilidade de transformar um resultado em ponto flutuante//

printf(" a * b %%  c + 1 = %d\n", a * b % c + 1);
//  1 * 2 = 2, 2%3 = 2, 2 + 1 = 3, o resultado e 3//

printf(" ++a * b - c-- = %d\n", ++a * b - c--);
// 2 * 2 = 4, 4 - 3 = 1, o resultado e 1//

printf(" 7 - -b * ++d = %d\n", 7 - -b * ++d); 
// 7 - (-2) * 5 = 7 + 10 = 17, o resultado  17//

printf(" a / b / c = %.3f\n", (float) a / b / c); 
//Um teste isolado dessa linha o resultado foi 0.167. Pela logica o resultado e 0.500 //

printf(" 7 + c * --d / e = %.3f\n", 7 + c * --d / (float) e); 
//7 + 2 * 4 / 5 = 7 + 1.6 = 8.600
// teste isolado resultado  e 8.800

printf(" 2 * a %% -b + c + 1 = %d\n", 2 * a % -b + c + 1 ); 
// Um teste isolado o resultado foi 4. pela logica o resultado e 3.

printf(" 39 / - ++e - + 29 %% c = %.3f\n", 39 / - ++e - + 29 % c);


 return 0; 
 }