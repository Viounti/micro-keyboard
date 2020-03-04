#include <Keyboard.h>
#include <EEPROM.h>
//int num[11] = {0,0,7,8,9,4,5,6,1,2,3};
void setup() {
  for(int i = 2;i<11;i++){//设置2-11引脚为INPUT
    pinMode(i,INPUT);
  }
  Keyboard.begin();//开始键盘通信
}

void loop() {
  /*for(int i = 2;i<11;i++){
    if(digitalRead(i) == 1){
      Keyboard.print(num[i]);
      delay(100);
    }
  }
  */
  if(digitalRead(2) == 1){//按下小键盘中的7
    Keyboard.press('t');
    delay(10);
    Keyboard.release('t');

    Keyboard.println("EZ");
    delay(10);
  }
  
  if(digitalRead(3) == 1){//按下小键盘中的8
    Keyboard.press('t');
    delay(10);
    Keyboard.release('t');

    Keyboard.println("SSD");
    delay(10);
  }
  
  if(digitalRead(4) == 1){//按下小键盘中的9
    Keyboard.press('t');
    delay(10);
    Keyboard.release('t');

    Keyboard.println("NOOB");
    delay(10);
  }
  
  if(digitalRead(5) == 1){//按下小键盘中的4
    Keyboard.press('z');
  }else{
    Keyboard.release('z');
  }
  
  if(digitalRead(6) == 1){//按下小键盘中的5
    Keyboard.press('x');
  }else{
    Keyboard.release('x');
  }
  
  if(digitalRead(7) == 1){//按下小键盘中的6
    Keyboard.press(' ');
  }else{
    Keyboard.release(' ');
  }
  
  if(digitalRead(8) == 1){//按下小键盘中的1
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
  }
  if(digitalRead(9) == 1){//按下小键盘中的2
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('x');
    delay(100);
    Keyboard.releaseAll();
  }
  
  if(digitalRead(10) == 1){//按下小键盘中的3
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('v');
    delay(300);
    Keyboard.releaseAll();
  }
}

/*快捷组合按键
if(digitalRead(10) == 1){  //按下小键盘中的3
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('v');
    delay(300);
    Keyboard.releaseAll();
  }
  */

 /*按单独按键
 if(digitalRead(7) == 1){  //按下小键盘中的6
    Keyboard.press('z');
  }else{
    Keyboard.release('z');
  }
  */

 /*键盘按键定义
键盘左边ctrl    ---   KEY_LEFT_CTRL
键盘左边shift   ---   KEY_LEFT_SHIFT  
键盘左边alt     ---   KEY_LEFT_ALT
键盘左边win     ---   KEY_LEFT_GUI  
键盘右边ctrl    ---   KEY_RIGHT_CTRL
键盘右边shift   ---   KEY_RIGHT_SHIFT
键盘右边alt     ---   KEY_RIGHT_ALT
键盘右边win     ---   KEY_RIGHT_GUI
方向键上        ---   KEY_UP_ARROW
方向键下        ---   KEY_DOWN_ARROW
方向键左        ---   KEY_LEFT_ARROW
方向键右        ---   KEY_RIGHT_ARROW
删除键          ---   KEY_BACKSPACE
tab键           ---   KEY_TAB
回车键          ---   KEY_RETURN
esc键           ---   KEY_ESC
insert键        ---   KEY_INSERT
delete键        ---   KEY_DELETE
page up键       ---   KEY_PAGE_UP 
page down键     ---   KEY_PAGE_DOWN
home键          ---   KEY_HOME
end键           ---   KEY_END
capslock键      ---   KEY_CAPS_LOCK 
空格键           ---  ' '
F1              ---   KEY_F1
F2              ---   KEY_F2
F3              ---   KEY_F3
F4              ---   KEY_F4
F5              ---   KEY_F5
F6              ---   KEY_F6
F7              ---   KEY_F7
F8              ---   KEY_F8
F9              ---   KEY_F9
F10             ---   KEY_F10
F11             ---   KEY_F11
F12             ---   KEY_F12
*/

/*虚拟键盘常用函数
Keyboard.begin();              ---     开始键盘（USB）通信
Keyboard.end();                ---     结束键盘（USB）通信
Keyboard.press(x);             ---     按下为x的键 x可为 char（ASCII）
Keyboard.release(x);           ---     松开（释放）为x的键 x可为 char（ASCII）
Keyboard.releaseAll();         ---     松开（释放）所有按下的键
Keyboard.print(x);              ---    输入为x的内容 x可为 String
Keyboard.println(x);            ---    输入为x的内容并换行 x可为 String
*/
