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
////��ȡ�������ڴ��ַ
//void test01(){
//    int a ;
//    int b[10];
//    printf("a ���ڴ��ַ=%p\n",&a);
//    printf("b ���ڴ��ַ=%p\n",&b);
//
//}
//
////����ָ���ȡ�ڴ��ַ������
//void test02(){
//    int a =20;//����intֵ
//    int *b;//����ָ��
//    b=&a;//Ϊָ�븳ֵ
//    printf("�����ĵ�ֵַ=%p\n",&a);
//    printf("ָ���ֵ=%p\n",b);
//    printf("ָ��ĵ�ֵַ=%d\n",*b);
//}
//
////��ָ��
//void test03(){
//   int *var = NULL;
//    printf("var�ĵ�ַΪ=%p\n",var);
//}
//
////ָ���ָ��
//void test04(){
//    int a;
//    int *b;
//    int **c;
//    a=40;
//    b=&a;
//    c=&b;
//    printf("a��ֵΪ=%d\n",a);
//    printf("b��ֵΪ=%d\n",*b);
//    printf("c��ָ���ֵΪ=%d\n",*c);
//    printf("c��ֵΪ=%d\n",**c);
//}
