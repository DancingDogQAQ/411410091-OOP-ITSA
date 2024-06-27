//https://e-tutor.itsa.org.tw/mod/programming/view.php?a=15535

#include<bits/stdc++.h> 
  
int main(){  
    int input;  
    while(scanf("%d",&input)!=EOF){  
        while(input>=5 && input%5==0){  
            input/=5;  
        }  
        while(input>=3 && input%3==0){  
            input/=3;  
        }  
        while(input>=2 && input%2==0){  
            input/=2;  
        }  
        if(input==1) puts("Regular number!");  
        else puts("Irregular number!");  
    }  
    return 0;  
}  
////////