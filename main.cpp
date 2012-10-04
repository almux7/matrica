#include<iostream>
usingnamespacestd;
intmain ()
{
int y, skait=0, kiek=0;
int n=1;
int x[4][3]={{1, 1, 1}, {1, 1, 0}, {1, 0, 1}, {1, 0, 0}};
int t[]={1,-1,-1,-1};
int w[]={0,0,0};
int s=0;
while (skait<4)
{
 skait=0;
kiek++;
for (int i=0;i<4;i++)
  { s=0;
     for (int j=0;j<3;j++)
     s = s+(x[i][j]*w[j]);
     if (s>0)
        y=1;
        else
        y=-1;
          if (y!=t[i])
            {w[0]=w[0]+n*t[i]*x[i][0];
              w[1]=w[1]+n*t[i]*x[i][1];
              w[2]=w[2]+n*t[i]*x[i][2];}
  }
for (int i=0;i<4;i++)
 { s=0;
    for (int j=0;j<3;j++)
    s = s+(x[i][j]*w[j]);
    if (s>0)
    y=1;
    else
    y=-1;
       if (y==t[i])
       skait+=1;
  }
}
for (int j=0;j<3;j++)
cout<<w[j]<<endl;
cout<<"gautos interacijos="<<kiek;
cin>> s;
return 0;
}
