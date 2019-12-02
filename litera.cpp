#include "litera.h"
#include <iostream>

using namespace std;
 Litera::Litera(char arg=(a,b));{
     cout<<"arg jest równy= "<<endl;
 }
   Litera::Litera(const Litera& arg);{
       cout<<"arg="<<endl;

   }
        Litera::Litera(Litera&& arg);{

        }
        Litera::Litera& operator=(const Litera& arg);{

        }
        Litera::Litera& operator=(Litera&& arg);{

        }
        Litera::~Litera(){
            delete &a;
            delete &b;
        }
// tu prosze zdefiniowac wszystkie skladowe zadeklarowane w klasie Litera