// class3.cpp: 定义控制台应用程序的入口点。
//
#include <iostream>

int main()
{
    // Assert(false);

    // fasdfasdfasdfs

    // if (表达式 bool)
    // 类型转换,隐式转换
    // 表达式,判断表达式


    // 判断if语句除了做安全检查外(做流程分支处理的情况下)一定要写else

    int xWeekDay;
    std::cin >> xWeekDay;

    //// 隐式转换成bool
    //if (!(xWeekDay >= 1 && xWeekDay <= 7))
    //{
    //    printf("输入错误\n");
    //    system("pause");
    //    return -1;
    //}

    //// 如果(表达式满足)
    int xNumber = 100;
    int xTempWeekDay = xWeekDay;
    while (xTempWeekDay < xNumber)  // 买鸡
    {
        // 执行这里
        printf("1111111\n");
        break;
        continue;
        xTempWeekDay++;
    }

    //while (true)
    //{
    //    printf("1111111\n");
    //    continue;

    //    break;
    //}


    do
    {
        printf("1111111\n");
        break;
        continue;
        xTempWeekDay++;
    } while (false);


    //do
    //{
    //    printf("1111111\n");
    //    break;
    //    continue;
    //    xTempWeekDay++;
    //} while (xTempWeekDay < xNumber);










    printf("-------------\n");

    for (int xNumber = 100; xWeekDay < xNumber; xWeekDay++)
    {
        break;
        printf("1111111\n");
    }

    //// 否则, 如果
    //else if (xWeekDay == 2) // 买鸭
    //{
    //    // 执行这里
    //    printf("22222222\n");
    //}
    //else
    //{
    //    if (xWeekDay == 4)
    //    {
    //        printf("4444444\n");
    //    }
    //    else if (xWeekDay == 5)
    //    {
    //        printf("555555\n");
    //    }
    //    else if (xWeekDay == 6)
    //    {
    //        printf("66666666\n");
    //    }
    //    else if (xWeekDay == 7)
    //    {
    //        printf("77777777\n");
    //    }
    //    else
    //    {
    //        printf("SX\n");
    //        // .. 
    //        // 断言(Assert)
    //        // 报错
    //    }
    //}

    printf("222222222\n");

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (j == 5)
            {
                goto END_FOR;
            }
        }
    }
END_FOR:

    //int;
    //long long;
    //short;
    //char;

    // 浮点值
    // 字符串
    // bool
    // 1;
    // 0;
    // 隐式转换成整型


    // switch语句原理
    switch (xWeekDay)
    {
        case 1: { printf("1\n"); }
        case 2: { printf("2\n"); }break;
        case 3: { printf("3\n"); }
        case 4: { printf("4\n"); }break;
        case 5: { printf("5\n"); }
        case 6: { printf("6\n"); }break;
        case 7: { printf("7\n"); }
        case 8: { /*ASSERT();*/ }break;

        default: { /*ASSERT();*/ }break;
    }

    // 





    system("pause");
    return 0;

}