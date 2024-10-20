// Calcule as quantidades de instruções, bem como a
// complexidade de pior caso (O) dos trechos de
// programas que se seguem.

// for (int i = 0; i < n; i++) {      ---> 1 + (n+1) + n
//   for (int j = 0; j < n; j++) {    ---> n + (n+1) + n
//     printf("%d", j);               ---> n*n
//   }
// }

// Total: 3 + 4n + n^2
// Complexidade no pior caso: O(n^2)