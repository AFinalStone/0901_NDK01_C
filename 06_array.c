#include <stdio.h>

int sum(int *arr,int size);

int* getarr();

int main() {
    int a[4] = {1, 2, 3, 4};
    int v = sum(a,4);
    printf("sum=%d\n",v);

    int *p  = getarr();
    for (int i = 0; i < 4; ++i) {
        printf("����=%d\n",*(p+i));
        printf("����=%d\n",p[i]);

    }
    return 0;
}

//����һ�������Ԫ���ܺ�
int sum(int *arr, int size) {
     int sum = 0;
    for (int i = 0; i < size; ++i) {
        printf("i=%d\n", arr[i]);
        printf("i=%d\n", *(arr+i));
        sum+=arr[i];
    }
    return sum;
}

//��ȡ�������͵�����ָ��
int * getarr(){
    static int arr[4]={2,4,5,7};

    return arr;
}
