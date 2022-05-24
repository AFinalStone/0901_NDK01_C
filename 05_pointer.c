//#include <stdio.h>
//
//int main(){
//    test01();
//    test02();
//    test03();
//    test04();
//    return 0;
//}
//
////获取变量的内存地址
//void test01(){
//    int a ;
//    int b[10];
//    printf("a 的内存地址=%p\n",&a);
//    printf("b 的内存地址=%p\n",&b);
//
//}
//
////操作指针获取内存地址的数据
//void test02(){
//    int a =20;//定义int值
//    int *b;//定义指针
//    b=&a;//为指针赋值
//    printf("变量的地址值=%p\n",&a);
//    printf("指针的值=%p\n",b);
//    printf("指针的地址值=%d\n",*b);
//}
//
////空指针
//void test03(){
//   int *var = NULL;
//    printf("var的地址为=%p\n",var);
//}
//
////指针的指针
//void test04(){
//    int a;
//    int *b;
//    int **c;
//    a=40;
//    b=&a;
//    c=&b;
//    printf("a的值为=%d\n",a);
//    printf("b的值为=%d\n",*b);
//    printf("c的指针的值为=%d\n",*c);
//    printf("c的值为=%d\n",**c);
//}
