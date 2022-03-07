#include<iostream>
using namespace std;
class matrix
{int a[10][10];
int m,n;
public:
matrix()
{m=0;
n=0;
}
matrix(matrix &M)
{int i,j;
m=M.m;
n=M.n;
for(i=0;i<M.m;i++)
for(j=0;j<M.n;j++)
a[i][j]=M.a[i][j];
}
void getmatrix();
void displaymatrix();
void addmatrix(matrix,matrix);
void productmatrix(matrix,matrix);
void transmatrix(matrix);
void trace_matrix(matrix);
};
void matrix::getmatrix()
{int i,j;
cout<<"Enter number of rows and columns:\n";
cin>>m;
cin>>n;
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\nEnter["<<i+1<<"]["<<j+1<<"] element:";
cin>>a[i][j];
}
}
cout<<endl;
}
void matrix::displaymatrix()
{int i,j;
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<a[i][j]<<" ";
}
cout<<endl;
}
}
void matrix::addmatrix(matrix m1,matrix m2)
{int i,j;
m=m1.m;
n=m2.n;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
a[i][j]=m1.a[i][j]+m2.a[i][j];
}
void matrix::productmatrix(matrix m1,matrix m2)
{int i,j,k;
if(m1.n!=m2.m)
{cout<<"Matrix multiplication not possible\n";
 return;
 }
else
 m=m1.m;
 n=m2.n;
for(i=0;i<m;i++)
 for(j=0;j<n;j++)
{a[i][j]=0;
 for(k=0;k<n;k++)
  a[i][j]+=m1.a[i][k]*m2.a[k][j];
}
cout<<endl;
}
void matrix::transmatrix(matrix m1)
{int i,j;
m=m1.n;
n=m1.m;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
a[i][j]=m1.a[j][i];
cout<<"Resultant transpose matrix:\n";
}
void matrix::trace_matrix(matrix m3)
{int i,j;int trace=0;
m=m3.m;
for(i=0;i<m;i++)
{for(j=0;j<m;j++)
{if(i==j)
 trace=trace+m3.a[i][j];
 cout<<endl;
}
}
cout<<"Trace of matrix:";
cout<<trace;
}
int main()
{matrix M,M1,m1,m2,m3;
cout<<"1.Add matrix:\n";
cout<<"Enter first matrix:\n";
m1.getmatrix();
cout<<"First Matrix:\n";
m1.displaymatrix();
cout<<"Enter second matrix:\n";
m2.getmatrix();
cout<<"Second Matrix:\n";
m2.displaymatrix();
M.addmatrix(m1,m2);
cout<<"Resultant matrix:\n";
M.displaymatrix();
cout<<"2.Multiplication of matrix:\n";
cout<<"Enter first matrix:\n";
m1.getmatrix();
cout<<"Enter second matrix:\n";
m2.getmatrix();
cout<<"First Matrix:\n";
m1.displaymatrix();
cout<<"Second Matrix:\n";
m2.displaymatrix();
cout<<"Resultant matrix:\n";
M1.productmatrix(m1,m2);
M1.displaymatrix();
cout<<"3.Transpose of the matrix:\n";
cout<<"Enter matrix:\n";
m1.getmatrix();
cout<<"Matrix:\n";
m1.displaymatrix();
M.transmatrix(m1);
cout<<"Resultant matrix:\n";
M.displaymatrix();
cout<<"4.Trace of the matrix:\n";
cout<<"Enter matrix:\n";
m3.getmatrix();
cout<<"Matrix:\n";
m3.displaymatrix();
M.trace_matrix(m3);
cout<<endl;
return 0;
}

