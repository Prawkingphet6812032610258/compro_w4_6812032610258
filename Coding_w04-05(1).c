#include <stdio.h>

void countCall() {
    static int counter = 0; //ตัวแปร static จะถูกสร้างครั้งเดียวและเก็บค่าสะสมไว้
    counter++;
    printf("Call function: counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//1) ผลลัพธ์ที่ได้:
// Starting function calls...
// Call function: counter = 1
// After first call:
// Call function: counter = 2
// เพราะตัวแปร static จะไม่ถูกรีเซตค่าใหม่ทุกครั้งที่เรียกฟังก์ชัน แต่จะเก็บค่าสะสมจากครั้งก่อน
//
// 2) ความแตกต่างของ Non-static:
// static จะถูกสร้างครั้งเดียวตลอดอายุของโปรแกรม และค่าจะไม่ถูกล้างเมื่อออกจากฟังก์ชัน
//
// 3) อภิปรายและสรุป:
// การใช้ static มีประโยชน์เมื่อเราต้องการให้ตัวแปรเก็บค่าเดิมระหว่างการเรียกใช้ฟังก์ชันหลายครั้ง เช่น ตัวนับจำนวนการเรียก