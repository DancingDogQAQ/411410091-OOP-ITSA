//https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30747
#include<bits/stdc++.h> 
int main(){
    int mile;
    double km;

    while(scanf("%d", &mile) != EOF){
        km = mile * 1.6;
        printf("%.1f\n", km);
    }
}
