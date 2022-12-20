#include <stdio.h>
//判斷座標是否在圓形的範圍內
int main(){
    int x, y;
    scanf("%d %d",&x, &y);
    int compare;
    compare = x * x + y * y;
    if (compare <= 10000) {
        printf("inside\n");
    }
    else {
        printf("outside\n");
    }
    return 0;
}
