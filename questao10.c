// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int a = 0;                            ---> 1
// for (int i = 1; i < n; i++) {         ---> 1 + (n) + (n-1)
//   a++;                                ---> n-1
//   printf("%d", i);                    ---> n-1
// }
// printf("%d", a);                      ---> 1

// Total: 4n
// Complexidade no pior caso: O(n)