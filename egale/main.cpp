#include <fstream>

typedef unsigned long long ull;

namespace func
{
   int PrimaCifra(ull x)
   {
      while (x > 9)
         x /= 10;
      return x;
   }

   int Cifre(ull x)
   {
      int cifre = 0;
      while (x)
      {
         cifre++;
         x /= 10;
      }

      return cifre;
   }
}

int main()
{
   std::ifstream fin ("egale.in");
   std::ofstream fout ("egale.out");
   int cer, i;
   fin >> cer;

   if (cer == 1)
   {
      unsigned long long a, b, p = 0, start;
      int cifre;
      fin >> a >> b;
      cifre = func::Cifre(a);
      for (i = 0; i < cifre; i++)
         p = p*10 + 1;

      start = func::PrimaCifra(a) * p;
      if (start < a)
         start += p;

      while (start <= b)
      {
         while (start % 10 != 0 && start <= b)
         {
            fout << start << ' ';
            start += p;
         }
         start ++;
         p = p*10 + 1;
      }
   }
   else /// cerinta este 2
   {
      int cifre = 1, cifremax, j;
      fin >> cifremax;
      for (; cifre <= cifremax; cifre++)
      {
         for (i = 1; i < 10; i++)
         {
            for (j = 0; j < cifre; j++)
               fout << i;
            fout << ' ';
         }
      }
   }
   return 0;
}
