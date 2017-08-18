#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
using namespace std;
int main()
{
	int quad[6][4],pair[12][2],oct=1,i,j,n,m,q_index=0,p_index=0,s[8],f=0,g=0,c=0,x=0,y=0,z=0,w=0;
	char a[2][4];
	for(i=0;i<6;i++)
	{
		for(j=0;j<4;j++)
		{
			quad[i][j]=9;
		
		}
	}
	for(i=0;i<12;i++)
	{
		for(j=0;j<2;j++)
		{
			pair[i][j]=9;
		
		}
	}
	
	for(i=0;i<8;i++)
	s[i]=0;
	
	 printf("A Three Variable Karnaugh Map \n");
        printf("\n \n ");
        printf("\t   y'z' y'z   yz   yz' \n");
        printf("\t  |----|----|----|----|\n");
        printf("\tx'|  1 |  2 |  3 |  4 |\n");
        printf("\t  |----|----|----|----|\n");

        printf("\tx |  5 |  6 |  7 |  8 |\n" );

        printf("\t  |----|----|----|----|\n");
 printf("\n \n");

	cout<<"enter the terms into the K-map:\n";
	for(i=0;i<2;i++)
	 for(j=0;j<4;j++)
	  cin>>a[i][j];
     printf("\n \n ");
        printf("\t   y'z' y'z   yz   yz' \n");
        printf("\t  |----|----|----|----|\n");
        printf("\tx'| %c  | %c  | %c  | %c  |\n",a[0][0],a[0][1],a[0][2],a[0][3]);
        printf("\t  |----|----|----|----|\n");

        printf("\tx | %c  | %c  | %c  | %c  |\n",a[1][0],a[1][1],a[1][2],a[1][3]);

        printf("\t  |----|----|----|----|\n");
     printf("\n \n");     

	//to check for octet
	for(i=0;i<2;i++)
	for(j=0;j<4;j++)
	 if(a[i][j]=='1')
	  continue;
	 else
	  oct=0;
	if(oct==1)
	 {
	 cout<<"\now we have one octet and the output is 1";
	 getch();
     exit(0);
	 }
	 else
	 cout<<"\noctect :0";
	 getch();
	 
	 //to check for quads
	 	if((a[1][0]=='1')&&(a[0][0]=='1')&&(a[0][3]=='1')&&(a[1][3]=='1'))
	 	 {
	 	  quad[q_index][0]=0;
	 	  quad[q_index][1]=2;
	 	  quad[q_index][2]=4;
	 	  quad[q_index][3]=6;
	 	  q_index++;
         } 
	     if((a[0][1]=='1')&&(a[0][0]=='1')&&(a[1][0]=='1')&&(a[1][1]=='1'))
        {
	 	     quad[q_index][0]=0;
	 	     quad[q_index][1]=1;
	 	     quad[q_index][2]=4;
	 	     quad[q_index][3]=5;
             q_index++;
        } 
        if((a[0][1]=='1')&&(a[0][2]=='1')&&(a[0][0]=='1')&&(a[0][3]=='1'))
        {
        	
	 	     quad[q_index][0]=0;
	 	     quad[q_index][1]=1;
	 	     quad[q_index][2]=2;
	 	     quad[q_index][3]=3;
             q_index++; 
        }
     if((a[0][1]=='1')&&(a[0][2]=='1')&&(a[1][1]=='1')&&(a[1][2]=='1'))   
      {
	 	     quad[q_index][0]=1;
	 	     quad[q_index][1]=3;
	 	     quad[q_index][2]=5;
	 	     quad[q_index][3]=7;
	 	     q_index++;
      }  
	
     if((a[0][2]=='1')&&(a[1][2]=='1')&&(a[1][3]=='1')&&(a[0][3]=='1'))
    {
    	 
	 	     quad[q_index][0]=2;
	 	     quad[q_index][1]=3;
	 	     quad[q_index][2]=6;
	 	     quad[q_index][3]=7;
             q_index++;
	}
    if((a[1][0]=='1')&&(a[1][1]=='1')&&(a[1][2]=='1')&&(a[1][3]=='1'))
    {
	 	     quad[q_index][0]=4;
	 	     quad[q_index][1]=5;
	 	     quad[q_index][2]=6;
	 	     quad[q_index][3]=7;
             q_index++;
    }
	if(q_index!=0)
	cout<<"\nquads  :"<<q_index<<endl;
	else
	{
	cout<<"\nquads  :0";
    }
    cout<<endl;
	for(i=0;i<q_index;i++)
	{
	for(j=0;j<4;j++)
      {
       cout<<quad[i][j]<<" "; 
      }
	cout<<endl;
	}
	     
	for(i=0;i<=q_index;i++)
    for(j=0;j<4;j++)
    {
	if((quad[i][j]==0))
    a[0][0]='x';
    else if(quad[i][j]==1)
    a[0][1]='x';
    else if(quad[i][j]==3)
    a[0][2]='x';
    else if(quad[i][j]==2)
    a[0][3]='x';
    else if(quad[i][j]==4)
    a[1][0]='x';
    else if(quad[i][j]==5)
    a[1][1]='x';
    else if(quad[i][j]==7)
    a[1][2]='x';
    else if(quad[i][j]==6)
    a[1][3]='x';
	}	
    if(q_index!=0)
	{ 
	cout<<"\nK-map after elimination of quads\n";
     printf("\n \n ");
        printf("\t   y'z' y'z   yz   yz' \n");
        printf("\t  |----|----|----|----|\n");
        printf("\tx'| %c  | %c  | %c  | %c  |\n",a[0][0],a[0][1],a[0][2],a[0][3]);
        printf("\t  |----|----|----|----|\n");

        printf("\tx | %c  | %c  | %c  | %c  |\n",a[1][0],a[1][1],a[1][2],a[1][3]);

        printf("\t  |----|----|----|----|\n");
     printf("\n \n"); 
    getch();
	}
    
	//to find pairs
	

	for(i=0;i<2;i++)
    {
	for(j=0;j<4;j++)
     {
     if(a[i][j]=='1')
	 {
	 	if((i==0&&j==0)&&(a[0][1]=='x'||a[0][1]=='1')&&((a[0][3]!='x'||a[0][3]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][0]!='x'||a[1][0]=='0')&&(a[1][1]!='x'||a[1][1]=='0')))
	 	{
	 		pair[p_index][0]=0;
	 		pair[p_index][1]=1;	
	     	p_index++;
	     	f++;
		 }
	 	if((i==0&&j==0)&&(a[0][3]=='x'||a[0][3]=='1')&&((a[1][0]!='x'||a[1][0]=='0'||a[1][0]!='1')&&(a[1][3]!='x'||a[1][3]=='0'||a[1][3]!='1')&&(a[0][1]!='x'||a[0][1]=='0')&&(a[0][2]!='x'||a[0][2]=='0')))
	 	{
	 		pair[p_index][0]=0;
	 		pair[p_index][1]=2;	
	    	p_index++;
		 }
	 	if((i==0&&j==0)&&(a[1][0]=='x'||a[1][0]=='1')&&((a[0][3]!='x'||a[0][3]=='0'||a[0][3]!='1')&&(a[1][3]!='x'||a[1][3]=='0'||a[1][3]!='1')&&(a[1][1]!='x'||a[1][1]=='0')&&(a[0][1]!='x'||a[0][1]=='0')))
	 	{
	 		pair[p_index][0]=0;
	 		pair[p_index][1]=4;	
	    	p_index++;
	    	w++;
		 }
		 if((i==1&&j==0)&&(a[0][0]=='x'||a[0][0]=='1')&&(w==0)&&((a[0][3]!='x'||a[0][3]=='0'||a[0][3]!='1')&&(a[1][3]!='x'||a[1][3]=='0'||a[1][3]!='1')&&(a[1][1]!='x'||a[1][1]=='0')&&(a[0][1]!='x'||a[0][1]=='0')))
	 	{
	 		pair[p_index][0]=0;
	 		pair[p_index][1]=4;	
	    	p_index++;
		}		
	    if((i==0&&j==1)&&(a[0][2]=='x'||a[0][2]=='1')&&((a[0][0]!='x'||a[0][0]=='0')&&(a[0][3]!='x'||a[0][3]=='0')&&(a[1][1]!='x'||a[1][1]=='0')&&(a[1][2]!='x'||a[1][2]=='0')))
	 	{
	 		pair[p_index][0]=1;
	 		pair[p_index][1]=3;	
	     	p_index++;
		 }
	 	if((i==0&&j==1)&&(a[1][1]=='x'||a[1][1]=='1')&&((a[0][0]!='x'||a[0][0]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][0]!='x'||a[1][0]=='0')&&(a[1][2]!='x'||a[1][2]=='0')))
	 	{
	 		pair[p_index][0]=1;
	 		pair[p_index][1]=5;	
	     	p_index++;
	     	z++;
		 }	 
		if((i==1&&j==1)&&(a[0][1]=='x'||a[0][1]=='1')&&(z==0)&&((a[0][0]!='x'||a[0][0]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][0]!='x'||a[1][0]=='0')&&(a[1][2]!='x'||a[1][2]=='0')))
	 	{
	 		pair[p_index][0]=1;
	 		pair[p_index][1]=5;	
	     	p_index++;
		 }
		if((i==0&&j==1)&&(a[0][0]=='x'||a[0][0]=='1')&&(f==0)&&((a[0][3]!='x'||a[0][3]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][0]!='x'||a[1][0]=='0')&&(a[1][1]!='x'||a[1][1]=='0')))
	 	{
	 		pair[p_index][0]=0;
	 		pair[p_index][1]=1;	
	     	p_index++;
		 } 
	     if((i==0&&j==2)&&(a[0][3]=='x'||a[0][3]=='1')&&((a[0][1]!='x'||a[0][1]=='0')&&(a[1][2]!='x'||a[1][2]=='0')&&(a[1][3]!='x'||a[1][3]=='0')))
	 	{
	 		pair[p_index][0]=2;
	 		pair[p_index][1]=3;	
	     	p_index++;
		 }
		 if((i==0&&j==2)&&((a[0][1]!='x'||a[0][1]=='0')&&(a[1][1]!='x'||a[1][1]=='0')&&(a[0][3]!='x'||a[0][3]=='0')&&(a[1][3]!='x'||a[1][3]=='0')))
	 	{
	 		pair[p_index][0]=3;
	 		pair[p_index][1]=7;	
	     	p_index++;
	     	y++;
		 }	 
		 if((i==1&&j==2)&&(a[0][2]=='x'||a[0][2]=='1')&&(y==0)&&((a[0][1]!='x'||a[0][1]=='0')&&(a[1][1]!='x'||a[1][1]=='0')&&(a[0][3]!='x'||a[0][3]=='0')&&(a[1][3]!='x'||a[1][3]=='0')))
	 	{
	 		pair[p_index][0]=3;
	 		pair[p_index][1]=7;	
	     	p_index++;
		 }
		 if((i==0&&j==3)&&(a[1][3]=='x'||a[1][3]=='1')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][2]!='x'||a[1][2]=='0')&&(a[0][0]!='x'||a[0][0]!='1'||a[0][0]=='0')&&(a[1][0]!='x'||a[1][0]!='1'||a[1][0]=='0'))
	 	{
	 		pair[p_index][0]=2;
	 		pair[p_index][1]=6;	
	     	p_index++;
	     	x++;
		 }
		 	 if((i==1&&j==3)&&(a[0][3]=='x'||a[0][3]=='1')&&(x==0)&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][2]!='x'||a[1][2]=='0')&&(a[0][0]!='x'||a[0][0]!='1'||a[0][0]=='0')&&(a[1][0]!='x'||a[1][0]!='1'||a[1][0]=='0'))
	 	{
	 		pair[p_index][0]=2;
	 		pair[p_index][1]=6;	
	     	p_index++;
		 }	 
		 if((i==1&&j==0)&&(a[1][1]=='x'||a[1][1]=='1')&&((a[0][0]!='x'||a[0][0]=='0')&&(a[1][2]!='x'||a[1][2]=='0')&&(a[1][3]!='x'||a[1][3]=='0')&&(a[0][1]!='x'||a[0][1]=='0')))
	 	{
	 		pair[p_index][0]=4;
	 		pair[p_index][1]=5;	
	    	p_index++;
	    	c++;
		 }		 	
		 if((i==1&&j==0)&&(a[1][3]=='x'||a[1][3]=='1')&&((a[0][0]!='x'||a[0][0]=='0'||a[0][0]!='1')&&(a[0][3]!='x'||a[0][3]=='0'||a[0][3]!='1')&&(a[1][1]!='x'||a[1][1]=='0')&&(a[1][2]!='x'||a[1][2]=='0')))
	 	{
	 		pair[p_index][0]=4;
	 		pair[p_index][1]=6;	
	    	p_index++;
		 }
		 if((i==1&&j==1)&&(a[1][2]=='x'||a[1][2]=='1')&&((a[1][0]!='x'||a[1][0]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][3]!='x'||a[1][3]=='0')&&(a[0][1]!='x'||a[0][1]=='0')))
	 	{
	 		pair[p_index][0]=5;
	 		pair[p_index][1]=7;	
	    	p_index++;
		 }
		  if((i==1&&j==1)&&(a[1][0]=='x'||a[1][0]=='1')&&(c==0 )&&((a[0][0]!='x'||a[0][0]=='0')&&(a[1][2]!='x'||a[1][2]=='0')&&(a[1][3]!='x'||a[1][3]=='0')&&(a[0][1]!='x'||a[0][1]=='0')))
	 	{
	 		pair[p_index][0]=4;
	 		pair[p_index][1]=5;	
	    	p_index++;
		}
		 if((i==1&&j==2)&&(a[1][3]=='x'||a[1][3]=='1')&&((a[0][3]!='x'||a[0][3]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][0]!='x'||a[1][0]=='x')&&(a[1][1]!='x'||a[1][1]=='0')))
	 	{
	 		pair[p_index][0]=6;
	 		pair[p_index][1]=7;	
	    	p_index++;
	    	g++;
		 }
	    if((i==1&&j==3)&&(a[1][2]=='x'||a[1][2]=='1')&&(g==0)&&((a[0][3]!='x'||a[0][3]=='0')&&(a[0][2]!='x'||a[0][2]=='0')&&(a[1][0]!='x'||a[1][0]=='x')&&(a[1][1]!='x'||a[1][1]=='0')))
	 	{
	 		pair[p_index][0]=6;
	 		pair[p_index][1]=7;	
	    	p_index++;
		 }
	 } 
    }
	}
	
	//printing pairs
    
	if(p_index!=0)
	cout<<"\npairs  :"<<p_index<<endl;
	else
	{
	cout<<"\npairs  :0";
    }
	cout<<endl;
	for(i=0;i<p_index;i++)
	{
	for(j=0;j<2;j++)
      {
       cout<<pair[i][j]<<" "; 
      }
     cout<<endl;
	}
	
	//to eliminate pairs

   	for(i=0;i<p_index;i++)
    for(j=0;j<2;j++)
    {
    if(pair[i][j]==0)
    a[0][0]='X';
    else if(pair[i][j]==1)
    a[0][1]='X';
    else if(pair[i][j]==3)
    a[0][2]='X';
    else if(pair[i][j]==2)
    a[0][3]='X';
    else if(pair[i][j]==4)
    a[1][0]='X';
    else if(pair[i][j]==5)
    a[1][1]='X';
    else if(pair[i][j]==7)
    a[1][2]='X';
    else if(pair[i][j]==6)
    a[1][3]='X';
	} 
	
    //printing K-map after elimination of pairs
		
	if(p_index!=0)
	{	
	cout<<"\nK-map after the elimination of pairs and quads\n";
      printf("\n \n ");
        printf("\t   y'z' y'z   yz   yz' \n");
        printf("\t  |----|----|----|----|\n");
        printf("\tx'| %c  | %c  | %c  | %c  |\n",a[0][0],a[0][1],a[0][2],a[0][3]);
        printf("\t  |----|----|----|----|\n");

        printf("\tx | %c  | %c  | %c  | %c  |\n",a[1][0],a[1][1],a[1][2],a[1][3]);

        printf("\t  |----|----|----|----|\n");
     printf("\n \n");   
     getch();
	}
   
    
    //to find single 1's
    m=0;
    for(i=0;i<2;i++)
    for(j=0;j<4;j++)
    if((a[i][j]!='x'||a[i][j]!='X'||a[i][j]!='0'))
    {
    if(a[i][j]=='1')
	{	
    if(i==0&&j==0)
	{
		s[m]=0;
		m++;
	}	
	else if(i==0&&j==1)
	{
		s[m]=1;
		m++;
	}
	else if(i==0&&j==2)
	{
		s[m]=3;
		m++;
	} 
	else if(i==0&&j==3)
	{
		s[m]=2;
		m++;
	} 
	else if(i==1&&j==0)
	{
		s[m]=4;
		m++;
	} 
	else if(i==1&&j==1)
	{
		s[m]=5;
		m++;
	} 
	else if(i==1&&j==2)
	{
		s[m]=7;
		m++;
	} 
	else if(i==1&&j==3)
	{
		s[m]=6;
		m++;
	}
    }
    }
    if(m!=0)
    {
    cout<<"\nthe single 1's are :\n";
    for(i=0;i<m;i++)
    cout<<s[i]<<" ";
    getch();
	}
    
    //printing reduced SOP
    
    cout<<endl;
    cout<<"\nReduced SOP is : ";
	if(q_index!=0)
    {
    	for(i=0;i<q_index;i++)
	     {
	     	if((quad[i][0]==0)&&(quad[i][1]==2)&&(quad[i][2]==4)&&(quad[i][3]==6))
	     	 cout<<" z' ";
	     	else if((quad[i][0]==0)&&(quad[i][1]==1)&&(quad[i][2]==4)&&(quad[i][3]==5))
	         cout<<" y' ";
		 	else if((quad[i][0]==0)&&(quad[i][1]==1)&&(quad[i][2]==2)&&(quad[i][3]==3))
	         cout<<" x' ";
	     	else if((quad[i][0]==1)&&(quad[i][1]==3)&&(quad[i][2]==5)&&(quad[i][3]==7))
	         cout<<" z ";
	        else if((quad[i][0]==2)&&(quad[i][1]==3)&&(quad[i][2]==6)&&(quad[i][3]==7))
	         cout<<" y ";
	        else if((quad[i][0]==4)&&(quad[i][1]==5)&&(quad[i][2]==6)&&(quad[i][3]==7))
	         cout<<" x ";
	         if(i!=(q_index-1))
	         cout<<"+";
		 }
    }
   if(p_index!=0)
    {
    	for(i=0;i<p_index;i++)
	     {
	     	if((pair[i][0]==0)&&(pair[i][1]==1))
	     	 cout<<" x'y' ";
	     	else if((pair[i][0]==0)&&(pair[i][1]==2))
	     	 cout<<" x'z' ";
	     	else if((pair[i][0]==0)&&(pair[i][1]==4))
	     	 cout<<" y'z' ";
	     	else if((pair[i][0]==1)&&(pair[i][1]==3))
	     	 cout<<" x'z ";
	     	else if((pair[i][0]==1)&&(pair[i][1]==5))
	     	 cout<<" y'z ";
	     	else if((pair[i][0]==2)&&(pair[i][1]==3))
	     	 cout<<" x'y ";
	     	else if((pair[i][0]==3)&&(pair[i][1]==7))
	     	 cout<<" yz ";
	     	else if((pair[i][0]==2)&&(pair[i][1]==6))
	     	 cout<<" yz' ";
	     	else if((pair[i][0]==4)&&(pair[i][1]==5))
	     	 cout<<" xy' ";
	     	else if((pair[i][0]==4)&&(pair[i][1]==6))
	     	 cout<<" xz' ";
	     	else if((pair[i][0]==5)&&(pair[i][1]==7))
	     	 cout<<" xz ";
	     	else if((pair[i][0]==6)&&(pair[i][1]==7))
	     	 cout<<" xy ";
	     	if(i!=(p_index-1))
			 cout<<"+"; 
		 }
    } 
    if(m!=0)
    {
    	for(i=0;i<m;i++)
    	{
    		if(s[i]==0)
    		cout<<" x'y'z' ";
    		else if(s[i]==1)
    		cout<<" x'y'z ";
    		else if(s[i]==2)
    		cout<<" x'yz' ";
    		else if(s[i]==3)
    		cout<<" x'yz ";
    		else if(s[i]==4)
    		cout<<" xy'z' ";
    		else if(s[i]==5)
    		cout<<" xy'z ";
    		else if(s[i]==6)
    		cout<<" xyz' ";
    		else if(s[i]==7)
    		cout<<" xyz ";
    	if(i!=(m-1))
    	cout<<"+";
		}
    }
    
   return 0;   
}       

