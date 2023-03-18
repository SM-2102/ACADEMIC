#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void add(int **a, int **b, int n,int **c)
{      
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            c[i][j] = a[i][j] + b[i][j];   
}

void sub(int **a, int **b, int n,int **c)
{      
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            c[i][j] = a[i][j] - b[i][j];   
}

void print(int **mat,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}

void  multiply(int **a,int **b,int n1,int n2,int **new)
{
    if(n1 == 1)  
        new[0][0] = a[0][0] * b[0][0];   
    else 
    {
        int i,j;
        int nsize = n1/2;
        int **a00 = malloc(nsize * sizeof(int *));
        int **a01 = malloc(nsize * sizeof(int *));
        int **a10 = malloc(nsize * sizeof(int *));
        int **a11 = malloc(nsize * sizeof(int *));
        int **b00 = malloc(nsize * sizeof(int *));
        int **b01 = malloc(nsize * sizeof(int *));
        int **b10 = malloc(nsize * sizeof(int *));
        int **b11 = malloc(nsize * sizeof(int *));
        int **m1 = malloc(nsize * sizeof(int *));
        int **m2 = malloc(nsize * sizeof(int *));
        int **m3 = malloc(nsize * sizeof(int *));
        int **m4 = malloc(nsize * sizeof(int *));
        int **m5 = malloc(nsize * sizeof(int *));
        int **m6 = malloc(nsize * sizeof(int *));
        int **m7 = malloc(nsize * sizeof(int *));
        int **temp1 = malloc(nsize * sizeof(int *));
        int **temp2 = malloc(nsize * sizeof(int *));
        int **te1 = malloc(nsize * sizeof(int *));
        int **te2 = malloc(nsize * sizeof(int *));
        int **te3 = malloc(nsize * sizeof(int *));
        int **te4 = malloc(nsize * sizeof(int *));

        for(i=0;i<nsize;i++)
        {
            a00[i]= malloc(nsize*sizeof(int));
            a01[i]= malloc(nsize*sizeof(int));
            a10[i]= malloc(nsize*sizeof(int));
            a11[i]= malloc(nsize*sizeof(int));
            b00[i]= malloc(nsize*sizeof(int));
            b01[i]= malloc(nsize*sizeof(int));
            b10[i]= malloc(nsize*sizeof(int));
            b11[i]= malloc(nsize*sizeof(int));
            m1[i]= malloc(nsize*sizeof(int));
            m2[i]= malloc(nsize*sizeof(int));
            m3[i]= malloc(nsize*sizeof(int));
            m4[i]= malloc(nsize*sizeof(int));
            m5[i]= malloc(nsize*sizeof(int));
            m6[i]= malloc(nsize*sizeof(int));
            m7[i]= malloc(nsize*sizeof(int));
            temp1[i]= malloc(nsize*sizeof(int));
            temp2[i]= malloc(nsize*sizeof(int));
            te1[i]= malloc(nsize*sizeof(int));
            te2[i]= malloc(nsize*sizeof(int));
            te3[i]= malloc(nsize*sizeof(int));
            te4[i]= malloc(nsize*sizeof(int));
        }

        for(i=0;i<nsize;i++)
            for(j=0;j<nsize;j++)
            {
                a00[i][j]=a[i][j];
                a01[i][j]=a[i][j+nsize];
                a10[i][j]=a[i+nsize][j];
                a11[i][j]=a[i+nsize][j+nsize];                   
                b00[i][j]=b[i][j];
                b01[i][j]=b[i][j+nsize];
                b10[i][j]=b[i+nsize][j];
                b11[i][j]=b[i+nsize][j+nsize];
            }
               
        add(a00,a11,nsize,temp1);
        add(b00,b11,nsize,temp2);
        multiply(temp1,temp2,nsize,n1,m1);
             
        add(a10,a11,nsize,temp1);
        multiply(temp1,b00,nsize,n1,m2);

        sub(b01,b11,nsize,temp2);
        multiply(a00,temp2,nsize,n1,m3);

        sub(b10,b00,nsize,temp1);
        multiply(a11,temp1,nsize,n1,m4);

        add(a00,a01,nsize,temp2);
        multiply(temp2,b11,nsize,n1,m5);
        
        sub(a10,a00,nsize,temp1);
        add(b00,b01,nsize,temp2);
        multiply(temp1,temp2,nsize,n1,m6);
       
        sub(a01,a11,nsize,temp1);
        add(b10,b11,nsize,temp2);
        multiply(temp1,temp2,nsize,n1,m7);  
       
        add(m1,m7,nsize,temp1);
        sub(m4,m5,nsize,temp2);
        add(temp1,temp2,nsize,te1);//c11
           
        add(m3,m5,nsize,te2);//c12   
        add(m2,m4,nsize,te3);//c21
       
        add(m3,m6,nsize,temp1);
        sub(m1,m2,nsize,temp2);
       
        add(temp1,temp2,nsize,te4);//c22
       
        int a,b,c,d,e;
        a=b=c=d=e=0;
        int nsize2= 2*nsize;
        for(i=0;i<nsize2;i++)
            for(j=0;j<nsize2;j++)
            {
                if(j>=0 && j<nsize && i>=0 && i<nsize)
                    new[i][j] = te1[i][j];
    
                if(j>=nsize && j<nsize2 && i>=0 && i<nsize)
                {
                    a=j-nsize;
                    new[i][j] = te2[i][a];
                }

                if(j>=0 && j<nsize && i>= nsize && i < nsize2)
                {
                    c=i-nsize;
                    new[i][j] = te3[c][j];
                }

                if(j>=nsize && j< nsize2 && i>= nsize && i< nsize2 )
                {
                    d=i-nsize;
                    e=j-nsize;
                    new[i][j] =te4[d][e];
                }
            }   
        free(m1);
        free(m2);   
        free(m3);   
        free(m4);   
        free(m5);   
        free(m6);   
        free(m7);   
        free(te1);   
        free(te2);   
        free(te3);   
        free(te4);   
        free(temp1);   
        free(temp2);      
        free(a00);   
        free(a01);   
        free(a10);   
        free(a11);   
        free(b00);   
        free(b01);   
        free(b10);   
        free(b11);
    }  
}

int main()
{
    int n,i,j;
    printf("Enter the size of the matrix(power of 2) : ");   
    scanf("%d",&n);
    int **a = malloc(n * sizeof(int *));
    int **b = malloc(n * sizeof(int *));
    int **c = malloc(n * sizeof(int *));
    for(i=0;i<n;i++)
    {
        a[i] = malloc(n*sizeof(int)); 
        b[i] = malloc(n*sizeof(int));
        c[i] = malloc(n*sizeof(int));
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            a[i][j] = rand()%100;
            b[i][j] = rand()%100;
        }
    printf("The 1st matrix : \n");
    print(a,n);
    printf("The 2nd matrix : \n");
    print(b,n);
    clock_t start, end;
	double total;
    start = clock();
    multiply(a,b,n,n,c);
	end=clock();
    printf("The resultant matrix : \n");
    print(c,n);
	total = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Duration in seconds : %lf\n",total);
}