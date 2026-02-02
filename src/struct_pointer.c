#include<stdio.h>

typedef struct { 
    int n;
} Node;

//구동함수
int main(void) {
    //Node 형 배열에 값 할당
    Node arr[3] = {{10}, {20}, {30}};
    //포인터 변수 p에 arr 시작주소 할당
    Node *p = arr;
    //이중 포인터 pp에 p의 주소값 할당
    Node **pp = &p;
    //(*pp)[1] = arr[1].n / (*pp)[2] = arr[2].n = 30
    //따라서 arr[1] = 30;
    (*pp)[1] = (*pp)[2];

    //arr[1].n = 30;
    printf("%d\n", arr[1].n);
    return 0;
}
