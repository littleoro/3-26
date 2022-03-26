#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>

//int main() {
//	int n = 0;
//	printf("请输入N:");
//	scanf("%d", &n);
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int sum = 0;
//	for (b = 1; b <= n; b++) {
//		for (i = 1; i <= b; i++) {
//			a = a * i;
//		}
//		sum += a;
//		a = 1;
//	}
//	n = sum;
//	printf("%d", n);
//	return 0;
//}

//折半查找
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	printf("请输入我们要查找的数字:");
//	scanf("%d", &a);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (a < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (a > arr[mid]) {
//			left = mid + 1;
//		}
//		else
//		{
//			printf("we can find it");
//			break;
//		}
//	}
//	if (left > right) {
//		printf("we can not find it\n");
//	}
//	return 0;
//}

//int main() {
//	char arr1[] = "welcome to c!!!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//		return 0;
//}


int main() {
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("请输入密码");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			printf("登陆成功");
			break;
		}
	}
	if (i == 3)
		printf("三次密码都错误，退出程序");
	return 0;

}