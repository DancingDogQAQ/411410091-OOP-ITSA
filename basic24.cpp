//https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30759
#include<bits/stdc++.h> 
int main(){
    double r, p;
    int n;
    scanf("%lf %d %lf", &r, &n, &p);
    double sum = 0;
    for(int i = 0;i < n;i++){
        sum += p;
        sum = sum + sum * r;
    }
    sum -= 0.5;
    printf("%.lf\n",sum);
}
