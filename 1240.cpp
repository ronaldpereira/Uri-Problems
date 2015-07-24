/*
* Author : Ronald Pereira
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*/

#include <iostream>
#include <stack>
 
using namespace std;
 
void verificar();
 
int main()
{
   int N;
   cin >> N;
 
   for (int i=0; i<N; i++)
      verificar();
 
   return 0;
}
 
void verificar()
{
   string A, B;
   cin >> A >> B;
 
   stack<char> a, b;
 
   for (int i=0; i<A.size(); i++)
      a.push(A[i]);
 
   for (int i=0; i<B.size(); i++)
      b.push(B[i]);
       
 
   while (1)
   {
      if (a.empty() && !b.empty())
      {
         cout << "nao encaixa" << endl;
         break;
      }
 
      else if (!a.empty() && b.empty())
      {
         cout << "encaixa" << endl;
         break;
      }
 
      else if (a.empty() && b.empty())
      {
         cout << "encaixa" << endl;
         break;
      }
 
      if (a.top() != b.top())
      {
         cout << "nao encaixa" << endl;
         break;
      }
 
      a.pop();
      b.pop();
   }
}
