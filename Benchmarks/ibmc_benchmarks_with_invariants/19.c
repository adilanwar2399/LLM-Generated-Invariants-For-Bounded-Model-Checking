

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vnew2.c", 3, "reach_error"); }
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int __VERIFIER_nondet_int();

int abs(int x){
  return x < 0 ? -x : x;
}

int main()
{
    int z1 = __VERIFIER_nondet_int();
    int z2 = __VERIFIER_nondet_int();
    int z3 = __VERIFIER_nondet_int();
    int x = 0;
    int m = 0;
    int n = __VERIFIER_nondet_int();

    __invariant(n > 0 || n <= 0);
    __invariant(m == 0 || m < n);
    while (x < n) {
        if (__VERIFIER_nondet_int()) {
            m = x;
        }
        x = x + 1;
    }

    if(n > 0) {
       __VERIFIER_assert (m < n);
       //__VERIFIER_assert (m >= 0);
    }
}
