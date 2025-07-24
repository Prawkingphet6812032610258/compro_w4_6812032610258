#include <stdio.h>
//ประกาศค่าคงที่ระดับ Global
const int GLOBAL_RATE = 10;

void calculate() {
    //ประกาศค่าคงที่ระดับ Local
     const int LOCAL_BONUS = 50;
    //แสดงค่าทั้งสอง
printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);
printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);   //ถ้าไม้คอมเมนต์จะทำให้เกิด compile error เพราะ LOCAL_BONUS เป็นค่าคงที่ LOCAL ที่ประกาศในฟังชั่นนี้
}

int main () {
    calculate() ;
    //แสดงค่าคงที่ Global
    printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    //เรียกใช้ค่าคงที่ Local จะทำให้เกิด compile error เพราะ อยู่นอกขอบเขต
    return 0;
}
//1) ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
// → GLOBAL_RATE เป็นค่าคงที่ระดับ global ใช้งานได้ทั้งโปรแกรม
//   ส่วน LOCAL_BONUS เป็นค่าคงที่ระดับ local ใช้ได้เฉพาะในฟังก์ชัน calculate() เท่านั้น
//
//2) เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;?
//  → โปรแกรมจะ compile ไม่ผ่าน เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนแปลงค่าได้หลังจากกำหนดค่าเริ่มต้นแล้ว
//
//3) ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้? อภิปราย และสรุปผลที่ได้จากการทดลอง
//  → เพราะ LOCAL_BONUS ถูกประกาศไว้ภายในฟังก์ชัน calculate() ซึ่งมีขอบเขตจำกัด (scope) 
//   ตัวแปร local จะมองเห็นได้เฉพาะในฟังก์ชันที่มันถูกประกาศเท่านั้น
//
//สรุปสิ่งที่ได้เรียนรู้:
//-`const` ใช้ประกาศค่าคงที่ที่ไม่สามารถเปลี่ยนค่าได้
//- ค่าคงที่ระดับ global ใช้งานได้ทุกที่ในไฟล์
//- ค่าคงที่ระดับ local ใช้งานได้เฉพาะในบล็อกหรือฟังก์ชันที่ประกาศ
// การพยายามเปลี่ยนค่าคงที่จะทำให้เกิด compile-time error