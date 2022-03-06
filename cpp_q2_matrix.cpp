/*

Create a class called 'Matrix' containing a constructor that initialises the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.


*/

#include<iostream>
using namespace std;

class matrix
{
    int r1, c1, r2, c2;
    int a[5][5], b[5][5], add[5][5], res[5][5];

public:
    
    int getR()
    {
    
        cout<<"\nEnter rows of matrix 1: ";
        cin>>r1;
        cout<<"\nEnter rows of matrix 2: ";
        cin>>r2;
        return 0;
    }
    
    int getC()
    {
        cout<<"\nEnter column of matrix 1: ";
        cin>>c1;
        cout<<"\nEnter column of matrix 2: ";
        cin>>c2;
        return 0;
    }
    
    int setMat()
    {
        // int a[r1][c1];
        cout<<"\nEnter elements of matrix 1 - ";
    
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
        
        cout<<"\nMatrix 1 - \n";
        for(int i=0; i<r1;  i++)
        {
            for(int j=0; j<c1; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    
        // int b[r2][c2];
        cout<<"\nEnter elements of matrix 2 -";
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cin>>b[i][j];
            }
        }
        
        cout<<"\nMatrix 2 - \n";
        for(int p=0; p<r2; p++)
        {
            for(int q=0; q<c2; q++)
            {
                cout<<b[p][q]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    
    
    
    int addMat()
    {
        // int add[r1][c2];
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                add[i][j]=a[i][j]+b[i][j];
            }
        }
        
        cout<<"\nAdd - \n";
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<add[i][j]<<" ";;
            }
            cout<<endl;
        }
        return 0;
    }
    
    
    
    int mulMat()
    {
        cout<<"\nMultiplication - \n";
        // int res[50][50];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
                cout<<" "<<res[i][j];
            }
            cout<<endl;
        }
        return 0;
    }
    
    int displayMat()
    {
        cout<<"\nMatrix 1 - \n";
        for(int i=0; i<r1;  i++)
        {
            for(int j=0; j<c1; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    
        cout<<"\nMatrix 2 - \n";
        for(int p=0; p<r2; p++)
        {
            for(int q=0; q<c2; q++)
            {
                cout<<b[p][q]<<" ";
            }
            cout<<endl;
        }
        
        cout<<"\nAdd - \n";
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<add[i][j]<<" ";;
            }
            cout<<endl;
        }
        
        cout<<"\nMultiplication \n";
        for(int i = 0; i < r1; ++i)
        {
            for(int j = 0; j < c2; ++j)
            {
                cout << " " << res[i][j];
                if(j == c2-1)
                    cout << endl;
            }
        }
        return 0;
    }
};

int main()
{
    matrix m1;
    m1.getR();
    m1.getC();
    m1.setMat();
    m1.addMat();
    m1.mulMat();
    m1.displayMat();
}
