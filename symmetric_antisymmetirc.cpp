#include "symmetric_antisymmetric.h"

int main()
{
    
   int a11, a12, a13;
   int a21, a22, a23;
   int a31, a32, a33;

   cout << "Enter elements of the matirix =\n" << endl;

   cout << "Enter value of a11 : ";
   cin >> a11;

   cout << "Enter value of a12 : ";
   cin >> a12;

   cout << "Enter value of a13 : ";
   cin >> a13;

   cout << "Enter value of a21 : ";
   cin >> a21;

   cout << "Enter value of a22 : ";
   cin >> a22;

   cout << "Enter value of a23 : ";
   cin >> a23;

   cout << "Enter value of a31 : ";
   cin >> a31;

   cout << "Enter value of a32 : ";
   cin >> a32;

   cout << "Enter value of a33 : ";
   cin >> a33;



    Matrix3d T;

    T << a11, a12, a13,
         a21, a22, a23,
         a31, a32, a33;

  cout << "Tensor =\n" << T << endl;

  cout << "Transpose of T =\n" << T.transpose() << endl;

  cout << endl; 



  cout << "Symmetric part =\n" << (T + T.transpose())/ 2 << endl;

  cout << endl;

  cout << "Antisymmetric part =\n" << (T - T.transpose())/ 2 << endl;

    
   return 0;
}
