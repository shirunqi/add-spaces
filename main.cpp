//
//  main.cpp
//  string_test
//
//  Created by 石润奇 on 2018/7/12.
//  Copyright © 2018年 石润奇. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
void replaceSpace(char *str,int length)
{
    int count = 0;
    int new_length = 0;
    int index_old = 0;
    int index_new = 0;
    for(int i = 0; i < length; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
        
    new_length = length + 2 * count;
    
    // 索引
    index_old = length - 1;
    index_new = new_length - 1;
    
    while(index_old >= 0 && index_new > index_old)
    {
        if(str[index_old] == ' ')
        {
            str[index_new--] = '0';   // 本身索引地址就是长度减一
            str[index_new--] = '2';
            str[index_new--] = '%';
        }
        else
        {
            str[index_new--] = str[index_old];
        }
        index_old--;
    }
    printf("%s",str);
    cout << endl;
}
void replaceSpace(char *str,int length);
int main()
{
    char str[128] = "welcome to my blog";
    int length = 0;
    // length = sizeof(str);
    // length = sizeof("welcome to my blog");
    length = strlen("welcome to my blog");
    printf("%s",str);
    cout << endl;
    replaceSpace(str, length);
    printf("%s",str);
    cout << endl;
    return 0;
}

