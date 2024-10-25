#include <stdio.h>

int main() {
    double publictransport, livingservice, etc, total;
    double shinhanDC = 0, kbDC = 0;
    double shinhanDCrate = 0.0, kbDCrate = 0.0;


    printf("월평균 대중교통 요금을 입력하세요: ");
    scanf_s("%lf", &publictransport);
    while (publictransport <= 0) {
        printf("0원 이상의 값으로 다시 입력하세요: ");
        scanf_s("%lf", &publictransport);
    }

    printf("월평균 생활서비스 결제액을 입력하세요: ");
    scanf_s("%lf", &livingservice);
    while (livingservice <= 0) {
        printf("0원 이상의 값으로 다시 입력하세요: ");
        scanf_s("%lf", &livingservice);
    }

    printf("월평균 기타 결제액을 입력하세요: ");
    scanf_s("%lf", &etc);
    while (etc <= 0) {
        printf("0원 이상의 값으로 다시 입력하세요: ");
        scanf_s("%lf", &etc);
    }


    total = publictransport + livingservice + etc;


    // 신한 K-패스(대중교통 10%(2000~5000원), 생활서비스 2%(2000~5000원))
    double publictransportDiscount = publictransport * 0.1;
    if (total >= 500000) {
        if (publictransportDiscount > 5000) {
            publictransportDiscount = 5000;
        }
    }
    else if (total >= 200000) {
        if (publictransportDiscount > 2000) {
            publictransportDiscount = 2000;
        }
    }
    else {
        publictransportDiscount = 0;
    }


    double livingserviceDiscount = livingservice * 0.02;
    if (total >= 500000) {
        if (livingserviceDiscount > 5000) {
            livingserviceDiscount = 5000;
        }
    }
    else if (total >= 200000) {
        if (livingserviceDiscount > 2000) {
            livingserviceDiscount = 2000;
        }
    }
    else {
        livingserviceDiscount = 0;
    }

    shinhanDC = publictransportDiscount + livingserviceDiscount;


    if (total > 0)
        shinhanDCrate = (shinhanDC / total) * 100;
    

    // 국민 K-패스(대중교통 10%(최대 2000원), 생활서비스 2%(최대 8000원))
    publictransportDiscount = publictransport * 0.1;
    if (total >= 200000) {
        if (publictransportDiscount > 2000) {
            publictransportDiscount = 2000;
        }
    }
    else {
        publictransportDiscount = 0;
    }


    livingserviceDiscount = livingservice * 0.02;
    if (total >= 200000) {
        if (livingserviceDiscount > 8000) {
            livingserviceDiscount = 8000;
        }
    }
    else {
        livingserviceDiscount = 0;
    }

    kbDC = publictransportDiscount + livingserviceDiscount;


    if (total > 0)
        kbDCrate = (kbDC / total) * 100;
    


    printf("\n신한 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인률은 %.2f%%입니다.\n", (int)shinhanDC, shinhanDCrate);
    printf("국민 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인률은 %.2f%%입니다.\n", (int)kbDC, kbDCrate);

    if (shinhanDC > kbDC) {
        printf("따라서 신한 K-패스 체크카드가 나은 선택입니다.\n");
    }
    else if (shinhanDC == kbDC) {
        printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.\n");
    }
    else {
        printf("따라서 국민 K-패스 체크카드가 나은 선택입니다.\n");
    }


    return 0;
}
