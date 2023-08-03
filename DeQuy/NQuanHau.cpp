#include<iostream>
#include<algorithm>


using namespace std;

int n,a[100],cot[100],d1[100],d2[100];


void inkq(){
    for(int i=1;i<=n;i++){
        cout << "con hau o hang thu " << i << "nam o cot "<< a[i]<<endl;

    }

}

void Try(int i)
{
    for(int j =1;j<=n;j++){
        if(cot[j]==1 && d1[i-j+n]==1 && d2[i+j-1]==1){
            a[i]=j;
            cot[j]=d1[i-j+n]=d2[i+j-1]=0;
            if(i==n){
                inkq();
            }
            else{
                Try(i+1);
            }
            cot[j]=d1[i-j+n]=d2[i+j-1]=1;
        } 
    }
}

int main(){
    cin>> n;
    for (int i=1;i<=99;i++){
        cot[i]=d1[i]=d2[i]=1;
    }
    Try(1);
    return 0;
}