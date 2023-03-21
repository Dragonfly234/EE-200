
#include "problem2.h"


int main(int argc, char* argv[])
{

    char words[100] = { "Aa,Bb,Cc766,Dd,Ee,Ff,Gg,Hh,Ii,Jj,Kk,Ll,Mm,Nn,Oo,Pp,Qq,Rr,Ss,Tt,Uu,Vv,Ww,Xx,Yy,Zz,Ilove YOU!" };
    lower(&words);
    printf("%s", words);
    lower(NULL);
  return(0);
}

