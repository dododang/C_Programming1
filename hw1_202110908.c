#include <stdio.h>

int main() {
    double publictransport, livingservice, etc, total;
    double shinhanDC = 0, kbDC = 0;
    double shinhanDCrate = 0.0, kbDCrate = 0.0;


    printf("����� ���߱��� ����� �Է��ϼ���: ");
    scanf_s("%lf", &publictransport);
    while (publictransport <= 0) {
        printf("0�� �̻��� ������ �ٽ� �Է��ϼ���: ");
        scanf_s("%lf", &publictransport);
    }

    printf("����� ��Ȱ���� �������� �Է��ϼ���: ");
    scanf_s("%lf", &livingservice);
    while (livingservice <= 0) {
        printf("0�� �̻��� ������ �ٽ� �Է��ϼ���: ");
        scanf_s("%lf", &livingservice);
    }

    printf("����� ��Ÿ �������� �Է��ϼ���: ");
    scanf_s("%lf", &etc);
    while (etc <= 0) {
        printf("0�� �̻��� ������ �ٽ� �Է��ϼ���: ");
        scanf_s("%lf", &etc);
    }


    total = publictransport + livingservice + etc;


    // ���� K-�н�(���߱��� 10%(2000~5000��), ��Ȱ���� 2%(2000~5000��))
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
    

    // ���� K-�н�(���߱��� 10%(�ִ� 2000��), ��Ȱ���� 2%(�ִ� 8000��))
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
    


    printf("\n���� K-�н� üũī���� ���� ���� �ݾ��� %d���̸�, ���η��� %.2f%%�Դϴ�.\n", (int)shinhanDC, shinhanDCrate);
    printf("���� K-�н� üũī���� ���� ���� �ݾ��� %d���̸�, ���η��� %.2f%%�Դϴ�.\n", (int)kbDC, kbDCrate);

    if (shinhanDC > kbDC) {
        printf("���� ���� K-�н� üũī�尡 ���� �����Դϴ�.\n");
    }
    else if (shinhanDC == kbDC) {
        printf("���� ��� ���� �����ϼŵ� ������ �����մϴ�.\n");
    }
    else {
        printf("���� ���� K-�н� üũī�尡 ���� �����Դϴ�.\n");
    }


    return 0;
}
