#include<stdio.h>

char comp(int x,int y){
    if(x<y){
        return '<';
    }
    else if(x>y){
        return '>';
    }
    else
    {
        return '=';
    }
    
}
void add_Sparce_arr(int m1[][3],int m2[][3],int m2[][3]){
    //Check the total no. of rows and columb are equal or not.
    int i=1,j=1,k=1,t1,t2;
    if(m1[0][0]!=m2[0][0]||m1[0][1]!=m2[0][1]){
        printf("\nAddition not possible:(");
    }
    else{
        m3[0][0]=m1[0][0];
        m3[0][1]=m1[0][1];
        t1=m1[0][2];
        t2=m1[0][2];
        while(i<=t1&&j<=t2){
            switch (comp(m1[i][0],m2[j][0]))
            {
            case '=':
                {
                    switch (comp(m1[i][1],m2[j][1]))
                    {
                    case '=':
                        m3[k][0]=m1[i][0];
                        m3[k][1]=m1[i][1];
                        m3[k][2]=m1[i][2]+m2[j][2];
                        k++;
                        i++;
                        j++;
                        break;
                    case '<':
                        m3[k][0]=m1[i][0];
                        m3[k][1]=m1[i][1];
                        m3[k][2]=m1[i][2];
                        k++;
                        i++;
                        break;
                    case '>':
                        m3[k][0]=m2[j][0];
                        m3[k][1]=m2[j][1];
                        m3[k][2]=m2[j][2];
                        k++;
                        j++;
                        break;
                    default:
                        break;
                    }    
                }
                break;
            case '<':
                m3[k][0]=m1[i][0];
                m3[k][1]=m1[i][1];
                m3[k][2]=m1[i][2];
                k++;
                i++;
                break;
            case '>':
                m3[k][0]=m2[j][0];
                m3[k][1]=m2[j][1];
                m3[k][2]=m2[j][2];
                k++;
                j++;
                break;
            default:
                break;
            }
        }
        while(i<=t1){
            m3[k][0]=m1[i][0];
            m3[k][1]=m1[i][1];
            m3[k][2]=m1[i][2];
            k++;
            i++;
        }
        while(j<=t2){
            m3[k][0]=m2[j][0];
            m3[k][1]=m2[j][1];
            m3[k][2]=m2[j][2];
            k++;
            j++;
            break;
        }
        m3[0][2]=k-1;
    }
}
