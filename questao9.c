// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int n;                            ---> 1
// scanf("%d", &n);                  ---> 1
// for (int i = 0; i < n; i++) {     ---> 1 + (n+1) + n
//   printf("%d", i);                ---> n
// }

// Total: 4 + 3n
// Complexidade no pior caso: O(n)