/**
 * @file main.cc
 * @author lzxZz (616281384@qq.com)
 * @brief 发布程序, 脚本启动器
 * @version 0.1
 * @date 2019-10-11
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>


#include "soleiw/soleiw/lib.h"

int main(){
    using namespace std;
    using namespace soleiw;
    cout << "开始发布" << endl;
    Release();
    cout << "完成发布" << endl;
    return 0;
}