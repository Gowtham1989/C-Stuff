#include <iostream>
#include <bits/stdc++.h> 

int main()
{
	int arr[]={1,3,5,7,9};
	char str1[] = "HelloWorld";
	char str2[] = "World";
	int size = (sizeof(arr)/sizeof(*arr));
	
	char *p;
	p = strstr(str1,str2);
	std::cout << "strstr(s1,s2): " << p  << std::endl;

	for(int i=0;i<size;i++)
	{
		std::cout << "Array elements: " << arr[i] << std::endl;
	}
}

