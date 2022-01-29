//O(n),S(1)
int power1(int a, int n){
  while (--n > 0){
    a *= a;
  }
  return a;
}

//O(log n),S(log n)
int power2(int a, int n){
  int b;

  if (n == 1)
    return a;
  
  b = power2(a, n / 2);

  b *= b;

  if (n % 2 != 0){
    b *= a;
  }

  return b;
}

//O(log n), S(1)
int power3(int a, int n){
  int b = 1;
  
  while (n > 0){

    if (n % 2 == 0){
      n /= 2;
      a *= a;
    }
    else{
      n--;
      b *= a;
    }

  }
  
  return b;
}