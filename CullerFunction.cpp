//this is a program that gives output numerical amount to sentence 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std ;
void NumericToStingAmount(int);

 int main()
 {
 	  int i;
 	  int amount;
 	  printf("Enter Amount: ");
 	  cin>> amount;
 	  NumericToStingAmount(amount);
	   
		 getch();
		
    
 	return 0;
 }
 void NumericToStingAmount(int amount)
 {
 
    	if( amount==0)
	  	 return ;
	  	int len,rem=amount;
	  	for(len=0;rem!=0;len++)
	  	{
	  	  rem=rem/10;
		}
	
	  int *arry =(int*)malloc(len*sizeof(int));
	  rem=amount;
	  for(int i=0;rem!=0;i++)
	  {
	  	arry[i]=rem%10;
		  rem=rem/10;
	  
	  }
 	  
  
	  char *single_digit[] = { "", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
      char *tens_place[] = {"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
      char *tens_multiple[] = {"", "ten", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
      char *tens_power[] = {"","","hundred", "thousand","","lakh","","crore",""};
      
         
         while(len>=0)
             {
             
				            if(len==9)
							  {
							  	if(arry[len-1]==1)
						       	{
						       	  printf(" %s %s ",tens_place[arry[len-2]],tens_power[len-2]);
							    }
								if(arry[len-1]>=2)
					               {
								    printf( " %s %s %s ",tens_multiple[arry[len-1]],single_digit[arry[len-2]],tens_power[len-2]);
				                   }
								len=len-2;
				              }else if(len==8)
					                {
									 printf(" %s %s ",single_digit[arry[len-1]],tens_power[len-1]);
				 
			                        }
             	
						 
						 
						 
						  if(len==7)
							  {
							  	if(arry[len-1]==1)
						       	{
								 printf(" %s %s ",tens_place[arry[len-2]],tens_power[len-2]);
							    }else if(arry[len-1]!=0)
					               {
								    printf( " %s %s %s ",tens_multiple[arry[len-1]],single_digit[arry[len-2]],tens_power[len-2]);
				                   }
								len=len-2;
				              }else if(len==6)
					                {
									 printf(" %s %s ",single_digit[arry[len-1]],tens_power[len-1]);
				 
			                        }
				 
				 
				  if(len==5&&arry[len-1]!=0&&arry[len-2]!=0)
				           {
				       	    if(arry[len-1]==1)
				       	      {
				       	       printf("%s  %s ",tens_place[arry[len-2]],tens_power[len-2]);	
						      }
						      else{
						      	   printf("%s %s %s ",tens_multiple[arry[len-1]],single_digit[arry[len-2]],tens_power[len-2]);
							      }
					       len=len-2;
						   }
              
			  
			  
			  
			  if(len==4&&arry[len-1]!=0)
			    {
			     printf("%s ",single_digit[arry[len-1]]);
         	     printf("%s ",tens_power[len-1]);
		        }
		      if(len==3&&arry[len-1]!=0)
                {
         	     printf("%s ",single_digit[arry[len-1]]);
         	     printf("%s ",tens_power[len-1]);
         	    }
         	  if(len==2&&arry[len-1]==0)
                {
         	     printf("%s ",single_digit[arry[len-1]]);
         	     printf("%s ",tens_power[len-1]);
         	    }else if(len==2&&arry[1]!=0&&arry[0]==0)
         	          {
         	    	    printf("%s ",tens_multiple[arry[1]]);
				      } 
					  else 
					      if(len==2&&arry[1]!=0&&arry[0]!=0)
				           {
				       	    if(arry[1]==1)
				       	      {
				       	       printf("%s ",tens_place[arry[0]]);	
						      }
						      else{
						      	   printf("%s %s",tens_multiple[arry[1]],single_digit[arry[0]]);
							      }
					        break;
						   }
			 if(len==1)	
			    {
			    	printf("%s ",single_digit[arry[0]]);
			    }
		      len--;
		      }
		 cout<<" only..";	
 }
