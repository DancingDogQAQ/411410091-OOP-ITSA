//https://e-tutor.itsa.org.tw/mod/programming/view.php?a=31

#include<bits/stdc++.h> 
  
int main(){  
    char input[1024];  
    while(scanf("%s",input) != EOF){  
        char* ptr=strchr( input, '\0')-1;  
        int ans=0;  
        int i=strlen(input)-1;  
        int x=1;  
        for(i; i>=0; i--){  
            for(int j='A'; j<='Z'; j++){  
                if(input[i] == j){  
                    ans+=(j-'A'+1)*x;  
                    break;  
                }  
            }  
            x*=26;  
        }  
        printf("%d\n",ans);  
    }  
}  
