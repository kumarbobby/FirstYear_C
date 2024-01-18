//codebyks for Matrix Multiplication of m×n

#include <stdio.h>

int main() {
    
    
    //initialising matrix a[] and b[]
    int a[10][10],b[10][10],ab[10][10]={};
    int m_no,i,j,mA,nA,mB,nB;
    
    
    //Taking the number of rows and columns for a and b.
    printf("No. of rows of Matrix 'a': ");
    scanf("%d",&mA);
    
    printf("No. of columns of Matrix 'a': ");
    scanf("%d",&nA);
    
    printf("No. of rows of Matrix 'b': ");
    scanf("%d",&mB);
    
    printf("No. of columns of Matrix 'b': ");
    scanf("%d",&nB);
    
    //Checking whether multiplication is possible
    if(nA==mB){
        //possible then continue to main program
    //getTheElements of matrices    
    for(m_no=0;m_no<2;m_no++){
        
            //For Matrix a
                if(m_no==0){
                    for(i=0;i<mA;i++){
                        for(j=0;j<nA;j++){
                         printf("Enter the value of a[%d][%d]: ",i+1,j+1);
                         scanf("%d",&a[i][j]);
                        }
                    }
                }
                else{
                 //For Matrix b    
                    for(i=0;i<mB;i++){
                        for(j=0;j<nB;j++){
                    printf("Enter the value of b[%d][%d]: ",i+1,j+1);
                    scanf("%d",&b[i][j]);
                        }
                }
        }
    }
    
    
    
    //printing the matrices
        for(m_no=0;m_no<2;m_no++){
      
            if(m_no==0){
               for(i=0;i<mA;i++){
                   for(j=0;j<nA;j++){
                    printf("%d  ",a[i][j]);
                 }
                   printf("\n");
             }
         }
            else{
                for(i=0;i<mB;i++){
                   for(j=0;j<nB;j++){
                    printf("%d  ",b[i][j]);
                 }
                    printf("\n");
             }
        }
        printf("\n");
        }
        
        
     //Multiplication of the Matrices
    //aj=bi
     int ai,bi,bj,product;
     for(ai=0;ai<mA;ai++){
         for(bj=0;bj<nB;bj++){
             for(bi=0;bi<mB;bi++){
                     product=a[ai][bi]*b[bi][bj];
                     ab[ai][bj]=ab[ai][bj] + product;
                     product=0;
             }
         }
     }
     
     
     //Printing the Product of Matrices
     //Since  mAB=mA,nAB=nB;                
     printf("The Product of Matrix 'a' and 'b' is \n\n");
        for(i=0;i<mA;i++){
            for(j=0;j<nB;j++){
                    printf("%d  ",ab[i][j]);
                }
                printf("\n");
        }
    }    
    // Since nA != mB 
    else{
        printf("Multiplication of these matrices not possible.\nRun the program again.");
    }
    return 0;
}