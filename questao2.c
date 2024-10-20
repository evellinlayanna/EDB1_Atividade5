// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int numero;              ---> 1
// scanf("%d", &numero);    ---> 1
// if(numero % 2 == 0){     ---> 1
//   numero = numero + 1;   ---> 1
// } else{
//   numero = numero - 1;   ---> 1
// }
// printf("%d", numero);    ---> 1

// Total: 6 instruções
// Total: 3 instruções
// Complexidade no pior caso: Como não há loops ou recursões, o código executa
// um número fixo de operações independentemente do tamanho da entrada, então a
// complexidade é O(1).