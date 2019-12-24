#include <stdio.h>
// a () b = e
// ()  ()
// c () d =f
// g    h

int function(int e, int f, int g, int h);

int main()
{

int a,b,c,d;

scanf("%d%d%d%d", &a,&b,&c,&d);

  function (a,b,c,d);

  return 0;
}

int function(int e, int f, int g, int h){
  int a, b, c, d;
  int x;
  for (x=0;x<e;x++){
    a = x;
    b= e-a;
    c = g-a;
    d = h-b;

    if (a>0 && b>0 && c>0 && d>0 &&(f == d-c)){
      printf("%d + %d\n",a, b);
      printf("+   +\n",a, b);
      printf("%d + %d\n", c, d);
      printf("\n");
    }


  }
}
