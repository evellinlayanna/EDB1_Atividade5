// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int x = 0;                 ---> 1
// x = x + 1;                 ---> 1
// printf("%d", resultado);   ---> 1

// Total: 3 instruções
// Complexidade no pior caso: Como não há loops ou recursões, o código executa
// um número fixo de operações independentemente do tamanho da entrada, então a
// complexidade é O(1).