//https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30753
#include<bits/stdc++.h> 

int main(){
    int y;
    scanf("%d", &y);
    if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
        printf("Bissextile Year\n");
    }
    else{
        printf("Common Year\n");
    }
}
