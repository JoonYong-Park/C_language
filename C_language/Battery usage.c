#include <stdio.h>
#include <Windows.h>


int main_BBB() {

    // 배터리 보고서 생성
    system("powercfg /batteryreport /output battery_report.html");
    
    // 웹 브라우저에서 보고서 열기
    system("start battery_report.html");
}