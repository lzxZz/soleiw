/**
 * @file main.cc
 * @author lzxZz (616281384@qq.com)
 * @brief 博客系统构建程序, 结合模板实现
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
	cout << "开始生成" << endl;
	cout << "读取配置文件" << endl;
	Configuration *config = ReadConfiguration();
	cout << "读取博客元数据" << endl;
	BolgMetaData *meta_data =  ReadMeraData();
	cout << "正在生成" << endl;
	Build();
	cout << "完成生成" << endl;
	return 0;
}
