#include<stdio.h>
#include<string.h>
struct Crew_members
{
   char name[10];
   char status[10];
   
}M[100];
void Evacuate(int n);
int main()
{
  
  
    int n;   
    scanf("%d",&n);  //number of crew members in ship
    Evacuate(n);
    return 0;
}
void Evacuate(int n)
{
     int i;
     for( i=0;i<n;i++)
     {
	    scanf("%s%s",M[i].name,M[i].status);
     }
 
    for (i=0;i<n;i++)
    {
     if(strcmp(M[i].status,"rat")==0)
     printf("\n%s\n",M[i].name);	
	}
    for( i=0;i<n;i++)
    {
      if(strcmp(M[i].status,"woman")==0||strcmp(M[i].status,"child")==0)
      printf("%s\n",M[i].name);
	}
    
     for( i=0;i<n;i++)
    {
    	if(strcmp(M[i].status,"man")==0)
        printf("%s\n",M[i].name);
	}
    for( i=0;i<n;i++)
    {
    	 if(strcmp(M[i].status,"captain")==0)
         printf("%s\n",M[i].name);
	}
}
