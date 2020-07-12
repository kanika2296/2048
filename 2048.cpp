#include<iostream>
#include<conio.h>
#include<time.h>
#define n 16
using namespace std;

int a[n]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int b[n];

void cpy()
{
	for(int i=0;i<n;i++)
	b[i]=a[i];
}
void display()
{
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		if(i%4 == 0)
		cout<<"\n--------------------------------\n";
		if(a[i]==1)
		cout<<"|      |";
		else
		{
			cout<<"|";
			if(a[i]>1000)
			cout<<" "<<a[i]<<" ";
			else if(a[i]>100)
			cout<<"  "<<a[i]<<" ";
			else if(a[i]>10)
			cout<<"  "<<a[i]<<"  ";
			else
			cout<<"   "<<a[i]<<"  ";
			cout<<"|";
		}
	}
	cout<<"\n--------------------------------\n\n";
}

bool gamewon()
{
	for(int i=0;i<16;i++)
	{
		if(a[i]==2048)
		return true;
	}
	return false;
}

bool doch(int l)
{
	cpy();
	int i,c;
	switch(l)
	{
		case 2:
			
			for(i=15;i>3;i--)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i-4];
					a[i-4]=c;
					
				}
			}
			for(i=15;i>3;i--)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i-4];
					a[i-4]=c;
					
				}
			}
			for(i=15;i>3;i--)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i-4];
					a[i-4]=c;
					
				}
			}
			for(i=8;i<12;i++)
			{
				if((a[i]==a[i+4])&&(a[i]!=1))
				{
					a[i+4]=2*a[i];
					a[i]=1;
				}
			}
			for(i=4;i<8;i++)
			{
				if((a[i]==a[i+4])&&(a[i]!=1))
				{
					a[i+4]=2*a[i];
					a[i]=1;
				}
			}
			for(i=0;i<4;i++)
			{
				if((a[i]==a[i+4])&&(a[i]!=1))
				{
					a[i+4]=2*a[i];
					a[i]=1;
				}
			}
			
			for(i=15;i>3;i--)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i-4];
					a[i-4]=c;
				}
			}
			for(i=15;i>3;i--)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i-4];
					a[i-4]=c;
				}
			}
			for(i=15;i>3;i--)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i-4];
					a[i-4]=c;
				}
			}
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i])
				return true;
			}
			return false;
			break;
			
		case 8:
			for(i=0;i<12;i++)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i+4];
					a[i+4]=c;
				}
			}
			for(i=0;i<12;i++)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i+4];
					a[i+4]=c;
				}
			}
			for(i=0;i<12;i++)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i+4];
					a[i+4]=c;
				}
			}
			for(i=0;i<12;i++)
			{
				if((a[i]==a[i+4]) && (a[i]!=1))	
				{
					a[i]=2*a[i];
					a[i+4]=1;
				}
			}
			
			for(i=0;i<12;i++)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i+4];
					a[i+4]=c;
				}
			}
			for(i=0;i<12;i++)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i+4];
					a[i+4]=c;
				}
			}
			for(i=0;i<12;i++)
			{
				if(a[i]==1)
				{
					c=a[i];
					a[i]=a[i+4];
					a[i+4]=c;
				}
			}
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i])
				return true;
			}
			return false;
			break;
		
		case 4:
			for(i=0;i<15;i++)
			{
				if((i+1)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i+1];
						a[i+1]=c;
					}
				}
			}
			for(i=0;i<15;i++)
			{
				if((i+1)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i+1];
						a[i+1]=c;
					}
				}
			}
			for(i=0;i<15;i++)
			{
				if((i+1)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i+1];
						a[i+1]=c;
					}
				}
			}
			if((a[0]==a[1]) && (a[0]!=1))
			{
				a[0]=2*a[0];
				a[1]=1;
			}
			if((a[4]==a[5]) && (a[4]!=1))
			{
				a[4]=2*a[4];
				a[5]=1;
			}
			if((a[8]==a[9]) && (a[8]!=1))
			{
				a[8]=2*a[8];
				a[9]=1;
			}
			if((a[12]==a[13]) && (a[12]!=1))
			{
				a[12]=2*a[12];
				a[13]=1;
			}
			
			if((a[2]==a[1]) && (a[1]!=1))
			{
				a[1]=2*a[1];
				a[2]=1;
			}
			if((a[6]==a[5]) && (a[6]!=1))
			{
				a[5]=2*a[6];
				a[6]=1;
			}
			if((a[10]==a[9]) && (a[9]!=1))
			{
				a[9]=2*a[9];
				a[10]=1;
			}
			if((a[14]==a[13]) && (a[13]!=1))
			{
				a[13]=2*a[13];
				a[14]=1;
			}
			if((a[2]==a[3]) && (a[2]!=1))
			{
				a[2]=2*a[2];
				a[3]=1;
			}
			if((a[6]==a[7]) && (a[6]!=1))
			{
				a[6]=2*a[6];
				a[7]=1;
			}
			if((a[10]==a[11]) && (a[10]!=1))
			{
				a[10]=2*a[10];
				a[11]=1;
			}
			if((a[14]==a[15]) && (a[14]!=1))
			{
				a[14]=2*a[14];
				a[15]=1;
			}
			for(i=0;i<15;i++)
			{
				if((i+1)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i+1];
						a[i+1]=c;
					}
				}
			}
			for(i=0;i<15;i++)
			{
				if((i+1)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i+1];
						a[i+1]=c;
					}
				}
			}
			for(i=0;i<15;i++)
			{
				if((i+1)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i+1];
						a[i+1]=c;
					}
				}
			}
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i])
				return true;
			}
			return false;
			break;
			
		case 6:
			for(i=15;i>0;i--)
			{
				if((i)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i-1];
						a[i-1]=c;
					}
				}
			}
			for(i=15;i>0;i--)
			{
				if((i)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i-1];
						a[i-1]=c;
					}
				}
			}
			for(i=15;i>0;i--)
			{
				if((i)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i-1];
						a[i-1]=c;
					}
				}
			}
			if((a[0]==a[1]) && (a[0]!=1))
			{
				a[1]=2*a[1];
				a[0]=1;
			}
			if((a[4]==a[5]) && (a[4]!=1))
			{
				a[5]=2*a[4];
				a[4]=1;
			}
			if((a[8]==a[9]) && (a[8]!=1))
			{
				a[9]=2*a[8];
				a[8]=1;
			}
			if((a[12]==a[13]) && (a[12]!=1))
			{
				a[13]=2*a[12];
				a[12]=1;
			}
			if((a[2]==a[3])&& (a[2]!=1))
			{
				a[3]=2*a[2];
				a[2]=1;
			}
			if((a[6]==a[7]) && (a[6]!=1))
			{
				a[7]=2*a[6];
				a[6]=1;
			}
			if((a[10]==a[11]) && (a[10]!=1))
			{
				a[11]=2*a[10];
				a[10]=1;
			}
			if((a[14]==a[15]) && (a[14]!=1))
			{
				a[15]=2*a[14];
				a[14]=1;
			}
			if((a[2]==a[1]) && (a[1]!=1))
			{
				a[2]=2*a[1];
				a[1]=1;
			}
			if((a[6]==a[5]) && (a[5]!=1))
			{
				a[6]=2*a[5];
				a[5]=1;
			}
			if((a[10]==a[9]) && (a[9]!=1))
			{
				a[10]=2*a[9];
				a[9]=1;
			}
			if((a[14]==a[13]) && (a[13]!=1))
			{
				a[14]=2*a[13];
				a[13]=1;
			}
			for(i=15;i>0;i--)
			{
				if((i)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i-1];
						a[i-1]=c;
					}
				}
			}
			for(i=15;i>0;i--)
			{
				if((i)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i-1];
						a[i-1]=c;
					}
				}
			}
			for(i=15;i>0;i--)
			{
				if((i)%4!=0)
				{
					if(a[i]==1)
					{
						c=a[i];
						a[i]=a[i-1];
						a[i-1]=c;
					}
				}
			}
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i])
				return true;
			}
			return false;
			break;
			default: return false;
	}
} 

int main()
{
	int x,ch;
	char key= ' ';
	bool k,m;
		time_t r;
		
		while(a[0]==1 || a[1]==1 || a[2]==1 || a[3]==1 || a[4]==1 || a[5]==1 || a[6]==1 || a[7]==1 || a[8]==1 || a[9]==1 || a[10]==1 || a[11]==1 || a[12]==1 || a[13]==1 || a[14]==1 || a[15]==1)
		{
			abc:    r = time(NULL);
 	  				x=r%16;
    				if(a[x]!=1)
    				goto abc;
    				else 
    				if(x%2==0)
    				a[x]=2;
	   				else
    				a[x]=4;
    				display();
	   		xyz:	cout<<"PLEASE MAKE A MOVE :\n 2(Down) 4(Left) 6(Right) 8(Up)\n"<<endl;
    				key= _getch();
    				if((key == '2') || (key == 's'))
    				ch=2;
    				else if((key == '4') || (key == 'a'))
    				ch=4;
    				else if((key == '6') || (key == 'd'))
    				ch=6;
    				else if((key == '8')|| (key == 'w'))
    				ch=8;
					m=doch(ch);
					if(m==false)
					{
						cout<<"\nENTER CORRECT CHOICE\n";
						goto xyz;
					}
					k=gamewon();
					if(k==true)
					{
							cout<<"\n\nGAME WONN..!!!!\n";
							break;
					}
		}
return 0;
}
