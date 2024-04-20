int gcd(int a, int b) {
if (b == 0)
return a;
return gcd(b, a % b);
}
Aim: Implement the following methods
Name:- Anushka Tripathi
Roll no:- C1_02

int eulerTotient(int n) {
int count = 0;
int i;
for ( i = 1; i < n; i++) {
if (gcd(n, i) == 1)
count++;
}
return count;
}
void printCoprimes(int n) {
printf("Coprimes with respect to %d are: ", n);
int i;
for ( i = 1; i < n; i++) {
if (gcd(n, i) == 1)
printf("%d ", i);
}
printf("\n");
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
int totient = eulerTotient(n);
printf("Euler's Totient Function of %d is %d\n", n, totient);
printCoprimes(n);
return 0;
}