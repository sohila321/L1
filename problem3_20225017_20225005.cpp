#include <iostream>
using namespace std;
 int** matrixTranspose(int** mat, int r, int c)
{
  
    int** resultmat = new int*[c];
    for (int i = 0; i < c; i++) 
        resultmat[i] = new int[r];
    
 for (int i =0 ; i < r ; i++)
 {
    for (int j = 0 ; j < c; j++)
    {
        resultmat[j][i] = mat[i][j];
    }
 }
 return resultmat;
}

void inputmat(int **mat, int r, int c)
{
    
    for (int i = 0; i < r; i++)
       { 
        for (int j = 0; j < c; j++)
          { 
             cout << " Enter row "<< i+1<< " Col. " << j+1 << "  " ;
             cin >> mat[i][j];
             }
       }
}
void outputmat(int** matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
         {
            cout <<  matrix[i][j] << "  ";
        }
        cout << endl;
        
    }
}
int main()
{    int ** MAT ; int **ResultMat ; 
    int rowsOfMatrix ,colsOfMatrix ;
    cout << " Enter num of rows : ";
    cin >> rowsOfMatrix;
    cout << " Enter num of clomes : ";
    cin >> colsOfMatrix;
    MAT = new int*[rowsOfMatrix];
    for (int i = 0; i < rowsOfMatrix; i++) 
        MAT[i] = new int[colsOfMatrix];

     inputmat(MAT , rowsOfMatrix ,colsOfMatrix);
     outputmat(MAT , rowsOfMatrix ,colsOfMatrix);
     
    ResultMat = matrixTranspose(MAT,rowsOfMatrix ,colsOfMatrix  );
    cout << " \n After transpose : \n";
   outputmat(ResultMat , colsOfMatrix, rowsOfMatrix);

    for (int i = 0; i < rowsOfMatrix; i++) {
        delete[] MAT[i];
    }
    delete[] MAT;

    for (int i = 0; i < colsOfMatrix; i++) {
        delete[] ResultMat[i];
    }
    delete[] ResultMat;

 

  return 0;   
}