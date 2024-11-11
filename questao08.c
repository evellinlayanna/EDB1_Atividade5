// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int max = 100;                      ---> 1
// int a = 0;                          ---> 1
// for (int i = 0; i < max; i++) {     ---> 1 + (n+1) + n
//   a = a + 1;                        ---> n
//   printf("%d", a);                  ---> n
// }

// Total: 4 + 3n
// Complexidade no pior caso: O(n)