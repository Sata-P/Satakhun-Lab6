#include<iostream>
using namespace std;

int main(){
    int num; //ประกาศตัวแปร x
    cout << "Enter an integer: ";
    cin >> num; //รับค่าตัวแปร x จากผู้ใช้
    int even = 0, odd = 0; //ตั้งค่าเริ่มต้นของตัวแปร even กับ odd เพื่อนับจำนวนตัวเลขคู่และคี่
    while(num != 0){ //ตราบใดที่ x ไม่ได้มีค่าเป็น 0 (โปรแกรมจะออกลูปถ้าใส่เลข 0)
        if(num%2 == 0){ //ถ้า x หารสองลงตัว
            even = even+1; //เพิ่มค่า even ไป 1 
        }else{
            odd = odd+1; //เพิ่มค่า odd ไป 1 
        }
        cout << "Enter an integer: "; //พิมพ์ข้อความว่า "Enter an integer: " อีกรอบ 
        cin >> num; //รับค่าตัวแปร x จากผู้ใช้อีกรอบ
    }
    cout << "#Even numbers = " << even << "\n"; //พิมพ์ค่าตัวแปร even และขึ้นบรรทัดใหม่
    cout << "#Odd numbers = " << odd; //พิมพ์ค่าตัวแปร odd 
    return 0;
}