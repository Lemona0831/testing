#include <stdio.h>
#include <string.h>
#include <unistd.h> // sleep 함수를 사용하기 위해 필요

int main() {
    int year, month, days;
    char name[20];

    printf("[현재 날짜를 \"yyyy-mm-dd\" 형식으로 입력하세요]: ");
    scanf("%d-%d-%d", &year, &month, &days);

    // 입력 버퍼 비우기
    while (getchar() != '\n'); // 입력 버퍼 비우기

    printf("[당신의 이름을 입력하세요]: ");
    fgets(name, sizeof(name), stdin);  // 최대 19자 + null 문자 입력
    name[strcspn(name, "\n")] = 0; // 개행 문자 제거

    printf("**입력이 정상적으로 처리되었습니다.**\n");

    // 3초 대기
    sleep(3);

    // 화면 지우기
    printf("\033[H\033[J"); // 화면 지우기
    
    // 스플래시 화면 출력
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    for(int i = 0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        if (i == 0) printf("                         [마그테리아 ver 0.1]                               ");
        if (i == 1)printf("           풀 한 포기 없는 황무지에서 반짝이는 행성을 만들내는 곳 마그라테아,            ");
        if (i == 2)printf("         사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빗는 곳,       ");
        if (i == 3)printf("           마그라테아에 오신걸 환영합니다.                                         ");
        if (i == 4)printf("                                                                          ");
        for(int k=4;k>=i;k--){
            printf("*");
        }
        printf("\n");
    }
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[사용자]: %s                                   [실행 시간]: %d년 %d월 %d일\n", name, year, month, days);
    printf("================================================================================");
    return 0; 
}