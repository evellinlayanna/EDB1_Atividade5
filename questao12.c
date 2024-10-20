// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// int n = 10;                      ---> 1
// int num[n];                      ---> 1
// for (int i = 0; i < n; i++) {    ---> 1 + (n+1) + n
//   if (num[i] % 2 == 0) {         ---> n
//     printf("%d", num[i]);        ---> n
//   }
// }

// Total: 4 + 4n
// Complexidade no pior caso: O(n)