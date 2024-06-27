//https://e-tutor.itsa.org.tw/mod/programming/view.php?a=12216
#include<bits/stdc++.h> 
  
int main(){  
    char input[1024];  
    while(scanf("%s",input)!=EOF){  
        char* ptr=input;  
        while(*ptr!='\0'){  
            *ptr-=3;  
            ptr++;  
        }  
        puts(input);  
    }  
    return 0;  
}  
//ascii-3