#include <stdio.h>
#include <Windows.h>


int main_BBB() {

    // ���͸� ���� ����
    system("powercfg /batteryreport /output battery_report.html");
    
    // �� ���������� ���� ����
    system("start battery_report.html");
}