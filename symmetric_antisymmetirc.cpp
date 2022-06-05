#include "symmetric_antisymmetric.h"

int main()
{
    
    Matrix3d T; 

    T << 1, 2, 3,
         4, 2, 1,
         1, 1, 1;

  cout << "Tensor =\n" << T << endl;

  cout << "Transpose of T =\n" << T.transpose() << endl;

  cout << endl; 



  cout << "Symmetric part =\n" << (T + T.transpose())/ 2 << endl;

  cout << endl;

  cout << "Antisymmetric part =\n" << (T - T.transpose())/ 2 << endl;

    
   return 0;
}