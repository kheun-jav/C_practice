#include <stdio.h>          // printf 사용을 위한 표준 입출력 헤더

// 배열 크기를 의미하는 N을 5로 정의
// 컴파일 전에 N이라는 문자열을 전부 5로 치환
#define N 5

// 크기가 N(5)인 int형 배열 stack 선언
// 실제 스택 데이터를 저장하는 공간 (정적 배열, 전역 영역)
int stack[N];

// 스택의 최상단(top)을 가리키는 변수
// -1이면 스택이 비어있는 상태
int point = -1;

// 스택이 비어있는지 확인하는 함수
int isEmpty(){
    // point가 -1이면 true(1), 아니면 false(0) 반환
    return (point == -1);
}

// 스택이 가득 찼는지 확인하는 함수
int isFull(){
    // 배열의 마지막 인덱스는 N-1
    // point가 N-1이면 더 이상 push 불가
    return (point == N - 1);
}

// 스택에 값을 추가하는 push 함수
void push(int value){
    // 스택이 가득 찼는지 먼저 검사
    if(isFull()){
        // 가득 찼다면 오류 메시지 출력
        printf("Stack Full\n");
        // 함수 종료
        return;
    }

    // point를 먼저 1 증가시킨 후
    // 해당 위치에 value 저장
    stack[++point] = value;
}

// 스택에서 값을 꺼내는 pop 함수
int pop(){
    // 스택이 비어있는지 검사
    if(isEmpty()){
        // 비어있다면 오류 메시지 출력
        printf("Stack Empty\n");
        // 오류를 의미하는 값 반환
        return -1;
    }

    // 현재 point 위치의 값을 반환한 뒤
    // point를 1 감소시켜 top을 한 칸 내림
    return stack[point--];
}

int main(){
    // 스택에 10 push
    push(10);

    // 스택에 20 push
    push(20);

    // 스택에 30 push
    push(30);

    // pop → 30 출력
    printf("%d\n", pop());

    // 스택에 40 push
    push(40);

    // pop → 40 출력
    printf("%d\n", pop());

    // pop → 20 출력
    printf("%d\n", pop());

    // pop → 10 출력
    printf("%d\n", pop());

    // pop → 스택 비어있음, "Stack Empty" 출력 후 -1 반환
    printf("%d\n", pop());

    return 0;
}
