// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int max = 10;                        ---> 1
// for (int i = 0; i < max; i++) {      ---> 1 + (n+1) + n
//   printf("%d", i);                   ---> n
// }

// Total: 3 + 3n
// Complexidade no pior caso: O(n)