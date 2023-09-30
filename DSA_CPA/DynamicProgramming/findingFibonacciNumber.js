const fib = (n, memo = {}) => {
  if (n in memo) return memo[n];
  if (n == 1) return 0;
  if (n <= 3) return 1;
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  return memo[n];
};

console.log(fib(10));
console.log(fib(20));
console.log(fib(30));
console.log(fib(60));
console.log(fib(70));
console.log(fib(80));
