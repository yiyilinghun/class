#include <iostream>
#include <windows.h>

//using namespace std;
//using namespace zq;

int main()
{
    std::cout << "唐衡,占东,正齐" << "国庆, 志浩" << std::endl;
    // memory
    // 32bit    4GB
    // 64bit    4GB*4GB = 16000PB

    // 内存地址编号
    // 0x0000000000000000; // 0
    // 0x0000000000000001; // 1
    // 0x0000000000000010; // 16

    // 变量()
    // BYTE     (字节)     8bit
    // WORD     (字)      16bit
    // DWORD    (双字)    32bit
    // QWORD    (四字)    64bit

    //// 内存中最小单位BYTE
    //bool        true  false;            // 大小(sizeof(bool))     1 BYTE
    //char        0x08 0x0D '\t' ASCII    // 大小(sizeof(char))     1 BYTE 0-0x7F -127 - 127
    //short       0xFFFF                  // 大小(sizeof(short))    2 BYTE 0-0x7FFF -32767 - 32767
    //int         0xFFFFFFFF              // 大小(sizeof(int))      4 BYTE 0-0x7FFFFFFF -21E - 21E
    //long long   0xFFFFFFFFFFFFFFFF      // 大小(sizeof(long long))8 BYTE 0-????????????
    //    
    //unsigned char        0x08 0x0D '\t' ASCII    // 大小(sizeof(char))     1 BYTE 0-0x7F 0 - 255
    //unsigned short       0xFFFF                  // 大小(sizeof(short))    2 BYTE 0-0x7FFF 0 - 65535
    //unsigned int         0xFFFFFFFF              // 大小(sizeof(int))      4 BYTE 0-0x7FFFFFFF 0 - 42E
    //unsigned long long   0xFFFFFFFFFFFFFFFF      // 大小(sizeof(long long))8 BYTE 0-????????????

    // std C/C++ 标准库,名字空间


    //float(4字节) 科学技术法
    //double(8字节)科学技术法
    //char xData1;
    //char xData2;

    int xNumber1;
    int xNumber2;

    std::cin >> xNumber1;
    std::cin >> xNumber2;

    int xNumber3 = xNumber1 + xNumber2;

    std::cout << xNumber1 << "+" << xNumber2 << "=" << xNumber3 << std::endl;


    system("Pause");
    return 0;
}


// C语言 (面向过程)
// C++ oo 思想(面向对象)
// 头文件(.h)
// 源文件(.cpp)

// 编辑           编码
// 预处理(预编译)  所有#开头的指令(预处理)
// 编译           编译
// 链接           
// 完成