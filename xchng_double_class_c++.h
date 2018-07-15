#include <iostream>
#include <stdio.h>
#include <float.h>
#include <limits.h>

#define SIZE 100000000

class xchng_double {
public:
  void xchng(double &a, double &b) {
    std::cout << "a = " << a << " and b = " << b << '\n';

    b=((long int)a^(long int)b)+(((long int)((a-(long int)a)*SIZE)^(long int)((b-(long int)b)*SIZE))/(double)SIZE);

    a=((long int)a^(long int)b)+(((long int)((a-(long int)a)*SIZE)^(long int)((b-(long int)b)*SIZE))/(double)SIZE);

    b=((long int)a^(long int)b)+(((long int)((a-(long int)a)*SIZE)^(long int)((b-(long int)b)*SIZE))/(double)SIZE);

    std::cout << "a = " << a << " and b = " << b << '\n';

  }
};
