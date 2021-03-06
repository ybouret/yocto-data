#ifndef COMPLEXLIB_H
#define COMPLEXLIB_H
#include "paulslib.h"

#define PI_value   3.141592653589793238462643
#define PID2_value 1.570796326794896619231322

/* Prototypes */
COMPLEX Csqrt(COMPLEX);
COMPLEX Clog(COMPLEX);
COMPLEX Cexp(COMPLEX);
COMPLEX Csin(COMPLEX);
COMPLEX Ccos(COMPLEX);
COMPLEX Ctan(COMPLEX);
COMPLEX Casin(COMPLEX);
COMPLEX Cacos(COMPLEX);
COMPLEX Catan(COMPLEX);
COMPLEX Csinh(COMPLEX);
COMPLEX Ccosh(COMPLEX);
COMPLEX Ctanh(COMPLEX);
COMPLEX Casinh(COMPLEX);
COMPLEX Cacosh(COMPLEX);
COMPLEX Catanh(COMPLEX);
COMPLEX Cadd(COMPLEX,COMPLEX);
COMPLEX Csub(COMPLEX,COMPLEX);
COMPLEX Cmult(COMPLEX,COMPLEX);
COMPLEX Cmultd(COMPLEX,double);
COMPLEX Cdiv(COMPLEX,COMPLEX);
COMPLEX Cinv(COMPLEX);
COMPLEX Cdivd(COMPLEX,double);
COMPLEX Cpowd(COMPLEX,double);
double  Cabs(COMPLEX);

#endif

