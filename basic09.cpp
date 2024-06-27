//https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30751
#include<bits/stdc++.h> 

int main(){
    int N, sum;
    while(scanf("%d", &N) != EOF){
        sum = 0;
        for(int i=0; i<=N; i++){
            if(i % 3 == 0) sum += i;
        }
        printf("%d\n", sum);
    }
}
