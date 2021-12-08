int main() 
{     
    int ma[2][2];     
    int i, j, co=0;          
    
    for (i=0;i<3;i++)     
    {         
        for (j=0;j<3;j++)         
        {             
            co++;             
            ma[i][j]=co;             
            printf("%d ", ma[i][j]);         
            
        }         
        printf("\n");     
    }
    
    
return 0;
}