#include <stdio.h>            //เรียกใช้ไลบรารีมาตรฐานสำหรับ printf

int main () {
    char NameJa = 'P';           //char:ใช้เก็บตัวอักษรเพียงหนึ่งตัว(ตัวอักษรตัวแรกของชื่อนศ.)
    int AgeJa = 19;              //int:ใช้เก็บเลขจำนวนเต็ม,อายุ(จำนวนเต็ม)
    float WeightJa = 54.6;       //float:ใช้เก็บเลขทศนิยม,น้ำหนัก(ทศนิยมหนึ่งตำแหน่ง)
    char GenderJa[] = "Famale";  //char array (string):ใช้เก็บข้อความคำ,เพศ
    //แสดงผลลัพธ์
    printf("nameInitial = %c\n", NameJa); //แสดงค่าประเภท char
    printf("age = %d\n", AgeJa);          //แสดงค่าประเภท int
    printf("weight = %f\n", WeightJa);    //แสดงค่าประเภท float ทศนิยมสองตำแหน่ง
    printf("gender = %s\n", GenderJa);    //แสดงค่าประเภท string  (char array)
    return 0;       //ส่งค่ากลับเมื่อโปรแกรมจบการทำงานเสร็จสิ้น

}