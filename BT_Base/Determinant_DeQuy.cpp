#include<iostream>
#include<cmath>
#define max 15
using namespace std;

double determinant(double matrix[max][max], int n) {
    double det = 0;
    if (n==1) {return matrix[0][0];} 
	else if (n==2) {return matrix[0][0]*matrix[1][1] - matrix[1][0]*matrix[0][1];} 
	
	else {
        for (int p = 0; p < n; p++) {
            double Matrix_jr[max][max];
            for (int i = 1; i < n; i++) {
                int j1 = 0;
                for (int j = 0; j < n; j++) {
                    if (j!=p) {
                    Matrix_jr[i - 1][j1] = matrix[i][j];
                    j1++;
                    }
                }
            }
            det += pow(-1, p)*matrix[0][p] * determinant(Matrix_jr, n - 1);
        }
    }
    return det;
}


int main() {
    int n;
    double matrix[max][max];
    cout << "Nhap vao cap cua ma tran: "; cin >> n;
    cout << "Nhap vao cac phan tu cua ma tran: "<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
        	cout<<"matrix["<<i+1<<"]["<<j+1<<"]: ";
			cin >> matrix[i][j];
		}
    }
    cout << "Dinh thuc cua ma tran la: " << determinant(matrix, n) << endl;
    return 0;
}

/*vd: cho ma tran 3x3 co dang: 
			( 2  3 -1 )
		A = ( 1  0  3 )
			( 2  2  1 )
vòng lap 1: p=0 => j != 0

				i = 1 => MJ (0)(0) = matrix (1)(1) = 0; j1++ = 1;
						 MJ (0)(1) = matrix (1)(2) = 3; j1++ = 2;
				i = 2 => MJ (1)(0) = matrix (2)(1) = 2; j1++ = 1;
						 MJ (1)(1) = matrix (2)(2) = 1; j1++ = 2;
		=> MJ = (0 3)
				(2 1) 
		det = (-1)^0 * (matrix(0)(p) = 2) * Det(MJ, 2)
			= 1 * 2 * (-6) = -12
vòng lap 2: p=1 => j != 1

				i = 1 => MJ (0)(0) = matrix (1)(0) = 1; j1++ = 1;
						 MJ (0)(1) = matrix (1)(2) = 3; j1++ = 2;
				i = 2 => MJ (1)(0) = matrix (2)(0) = 2; j1++ = 1;
						 MJ (1)(1) = matrix (2)(2) = 1; j1++ = 2;
		=> MJ_1 = (1 3)
				  (2 1) 
		det = -12 + (-1)^1 * (matrix(0)(p) = 3) * Det(MJ_1, 2)
			= -12 + (-1 * 3 * 5) = -12 + 15 = 3
vòng lap 3: p=2 => j != 2

				i = 1 => MJ (0)(0) = matrix (1)(0) = 1; j1++ = 1;
						 MJ (0)(1) = matrix (1)(1) = 0; j1++ = 2;
				i = 2 => MJ (1)(0) = matrix (2)(0) = 2; j1++ = 1;
						 MJ (1)(1) = matrix (2)(1) = 2; j1++ = 2;
		=> MJ_2 = (1 0)
				  (2 2) 
		det = 3 + (-1)^2 * (matrix(0)(p) = -1) * Det(MJ_2, 2)
			= 3 + (1 * (-1) * 2) = 3 - 2 = 1
	=>	VAY DET(A) = 1	
*/


