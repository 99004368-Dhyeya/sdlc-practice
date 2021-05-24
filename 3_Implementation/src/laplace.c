//header


float* laplace(float l,float r ,float b,float t ){
    int i,j,k,m,n,x,y;
    float a[20][20] ;
   
    
    x=2;//length
    y=3;//breadth
     m =5; //steps alongx;
     n =5; // stpes along y
    m++;
    n++; // number of mesh points are one more than the number of steps
for(i=1;i<=m;i++)   //assigning boundary values begins
            {
              a[i][1]=b;
              a[i][n]=t;
            }
            for(i=1;i<=n;i++)
            {
              a[1][i]=l;
              a[m][i]=r;
            }       

for(i=2;i<m;i++)
{
for(j=2;j<n;j++)
{
a[i][j]=t;
}} //initialization of interior grid points

for(k=0;k<100;k++)
  {
               for(i=2;i<m;i++)
            {
               for(j=2;j<n;j++)
               {
                a[i][j]=(a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/4;
               }
            }
   }
   static float laplace_so[30];
int kkok=0;
   for(i=1;i<=m;i++)
            {
               for(j=1;j<=n;j++)
               {
                 laplace_so[kkok]=a[i][j];
               kkok=kkok+1;
               }
            }
  
            return laplace_so;                     //calculation by Gauss-Seidel Method
}



