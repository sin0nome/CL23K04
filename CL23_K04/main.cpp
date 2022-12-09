#include <iostream>
#include "TemplateFunc.h"

int main(void) {
	int data1[] = {
		18, 70, 2, 124, 45, 965, 201, 81, 9, 110, 121, 335, 423, 14, 155, 16, -1
	};

	float data2[] = {
		0.1f, 2.2f, 10.3f, 23.44f, 42.5f, 0.6f, 2.257f, 7.98f, 8.9f, -1
	};
	s
	std::cout << "最大値は" << maxdata<int>(data1) << std::endl;    // int型で実行
	std::cout << "最大値は" << maxdata<float>(data2) << std::endl;  // float型で実行

	return 0;
}

// 以下コンパイル時に求める場合

int metapro_main(void) {
	constexpr int data1[] = {
		18, 70, 2, 124, 45, 965, 201, 81, 9, 110, 121, 335, 423, 14, 155, 16, -1
	};

	constexpr float data2[] = {
		0.1f, 2.2f, 10.3f, 23.44f, 42.5f, 0.6f, 2.257f, 7.98f, 8.9f, -1
	};
	const auto i = maxdata(data1);
	const auto j = maxdata(data2);

	std::cout << "最大値は" << maxdata(data1) << std::endl;    // int型で実行
	std::cout << "最大値は" << maxdata(data2) << std::endl;  // float型で実行

	return 0;
}
