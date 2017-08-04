#include<stdio.h>
#include<string.h>
#include<assert.h>
int search( char *,char*);
int main()
{
   
   char text[] = "Re-mould it nearer to the Heart’s Desire";
   char pattern[] = "ould";
   search(pattern, text);
   assert(search(pattern,text)==1);
   assert(search(pattern,text)==0);
}
int search(char *pat, char *txt)
{
    int i,j;
    int M = strlen(pat);
    int N = strlen(txt); 
    for (int i = 0; i <= N - M; i++)
    {
        int j;
  
        
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
 
        if (j == M) 
         
           {
           return 1;
           printf("Pattern %s found at index %d ",pat, i);
            
} 
         
           printf("\n");
    }
}