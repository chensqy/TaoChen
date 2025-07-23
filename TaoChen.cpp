#include <iostream>
using namespace std;

int main()
{
	int goods,pay;
	cout << "欢迎使用TaoChen应用程序 请尽情选购！Version:V1.0.0"<<endl;
	cout << "请输入您要购买的商品编号（1-5）: " << endl;
	cout << "1. PlayStation 5 - 4999元" << endl;
	cout << "2. HUAWEI Pura 80 - 10999元" << endl;
	cout << "3. HUAWEI MATE 70 - 7999元" << endl;
	cout << "4. IQOO Z9 Turbo + - 2199元" << endl;
	cout << "5. Apple IPhone 16 Pro Max - 13999元" << endl;
	cin >> goods;
	if (goods == 1)
	{
		cout << "您选择了PlayStation 5，价格为4999元" << endl;
		cout << "请支付4999元" << endl;
		cout << "请选择支付方式" << endl;
		cout << "1. 微信支付" << endl;
		cout << "2. 支付宝支付" << endl;
		cout << "3. 银行卡支付" << endl;
		cout << "4. 货到付款" << endl;
		cout << "5. PayPal" << endl;
		cout << "6. Apple Pay" << endl;
		cout << "7. Google Pay" << endl;
		cout << "8. Monster Card" << endl;
		cout << "9. VISA" << endl;
		cout << "10. 取消支付" << endl;
		cin >> pay;
		if(pay == 1)
		{
			cout << "正在使用微信支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了微信支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 2)
		{
			cout << "正在使用AliPay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了支付宝支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 3)
		{
			cout << "正在使用Union Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了银行卡支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 4)
		{
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了货到付款，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 5)
		{
			cout << "正在使用PayPal，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了PayPal，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 6)
		{
			cout << "正在使用Apple Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Apple Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 7)
		{
			cout << "正在使用Google Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Google Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 8)
		{
			cout << "正在使用Monster Card支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Monster Card，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;

		}
		else if(pay == 9)
		{
			cout << "正在使用VISA，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "正在处理请求，请稍等..." << endl;
			cout << "您选择了VISA，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：4999CNY" << endl;
		}
		else if(pay == 10)
		{
			cout << "您取消了支付。" << endl;
			return 0;
		}
	}
	if (goods == 2)
	{
		cout << "您选择了HUAWEI Pura 80，价格为10999元" << endl;
		cout << "请支付10999元" << endl;
		cout << "请选择支付方式" << endl;
		cout << "1. 微信支付" << endl;
		cout << "2. 支付宝支付" << endl;
		cout << "3. 银行卡支付" << endl;
		cout << "4. 货到付款" << endl;
		cout << "5. PayPal" << endl;
		cout << "6. Apple Pay" << endl;
		cout << "7. Google Pay" << endl;
		cout << "8. Monster Card" << endl;
		cout << "9. VISA" << endl;
		cout << "10. 取消支付" << endl;
		cin >> pay;
		if (pay == 1)
		{
			cout << "正在使用微信支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了微信支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 2)
		{
			cout << "正在使用AliPay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了支付宝支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 3)
		{
			cout << "正在使用Union Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了银行卡支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 4)
		{
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了货到付款，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 5)
		{
			cout << "正在使用PayPal，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了PayPal，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 6)
		{
			cout << "正在使用Apple Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Apple Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 7)
		{
			cout << "正在使用Google Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Google Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 8)
		{
			cout << "正在使用Monster Card支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Monster Card，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;

		}
		else if (pay == 9)
		{
			cout << "正在使用VISA，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "正在处理请求，请稍等..." << endl;
			cout << "您选择了VISA，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：10999CNY" << endl;
		}
		else if (pay == 10)
		{
			cout << "您取消了支付。" << endl;
			return 0;
		}
	}
	if (goods == 3)
	{
		cout << "您选择了HUAWEI Mate 70，价格为7999元" << endl;
		cout << "请支付7999元" << endl;
		cout << "请选择支付方式" << endl;
		cout << "1. 微信支付" << endl;
		cout << "2. 支付宝支付" << endl;
		cout << "3. 银行卡支付" << endl;
		cout << "4. 货到付款" << endl;
		cout << "5. PayPal" << endl;
		cout << "6. Apple Pay" << endl;
		cout << "7. Google Pay" << endl;
		cout << "8. Monster Card" << endl;
		cout << "9. VISA" << endl;
		cout << "10. 取消支付" << endl;
		cin >> pay;
		if (pay == 1)
		{
			cout << "正在使用微信支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了微信支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 2)
		{
			cout << "正在使用AliPay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了支付宝支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 3)
		{
			cout << "正在使用Union Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了银行卡支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 4)
		{
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了货到付款，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 5)
		{
			cout << "正在使用PayPal，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了PayPal，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 6)
		{
			cout << "正在使用Apple Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Apple Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 7)
		{
			cout << "正在使用Google Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Google Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 8)
		{
			cout << "正在使用Monster Card支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Monster Card，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;

		}
		else if (pay == 9)
		{
			cout << "正在使用VISA，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "正在处理请求，请稍等..." << endl;
			cout << "您选择了VISA，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：7999CNY" << endl;
		}
		else if (pay == 10)
		{
			cout << "您取消了支付。" << endl;
			return 0;
		}
	}
	if (goods == 4)
	{
		cout << "您选择了IQOO Z9 Turbo +，价格为2199元" << endl;
		cout << "请支付2199元" << endl;
		cout << "请选择支付方式" << endl;
		cout << "1. 微信支付" << endl;
		cout << "2. 支付宝支付" << endl;
		cout << "3. 银行卡支付" << endl;
		cout << "4. 货到付款" << endl;
		cout << "5. PayPal" << endl;
		cout << "6. Apple Pay" << endl;
		cout << "7. Google Pay" << endl;
		cout << "8. Monster Card" << endl;
		cout << "9. VISA" << endl;
		cout << "10. 取消支付" << endl;
		cin >> pay;
		if (pay == 1)
		{
			cout << "正在使用微信支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了微信支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 2)
		{
			cout << "正在使用AliPay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了支付宝支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 3)
		{
			cout << "正在使用Union Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了银行卡支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 4)
		{
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了货到付款，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 5)
		{
			cout << "正在使用PayPal，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了PayPal，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 6)
		{
			cout << "正在使用Apple Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Apple Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 7)
		{
			cout << "正在使用Google Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Google Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 8)
		{
			cout << "正在使用Monster Card支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Monster Card，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;

		}
		else if (pay == 9)
		{
			cout << "正在使用VISA，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "正在处理请求，请稍等..." << endl;
			cout << "您选择了VISA，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：2199CNY" << endl;
		}
		else if (pay == 10)
		{
			cout << "您取消了支付。" << endl;
			return 0;
		}
	}
	if (goods == 5)
	{
		cout << "您选择了Apple IPhone 15 Pro Max，价格为13999元" << endl;
		cout << "请支付13999元" << endl;
		cout << "请选择支付方式" << endl;
		cout << "1. 微信支付" << endl;
		cout << "2. 支付宝支付" << endl;
		cout << "3. 银行卡支付" << endl;
		cout << "4. 货到付款" << endl;
		cout << "5. PayPal" << endl;
		cout << "6. Apple Pay" << endl;
		cout << "7. Google Pay" << endl;
		cout << "8. Monster Card" << endl;
		cout << "9. VISA" << endl;
		cout << "10. 取消支付" << endl;
		cin >> pay;
		if (pay == 1)
		{
			cout << "正在使用微信支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了微信支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 2)
		{
			cout << "正在使用AliPay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了支付宝支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 3)
		{
			cout << "正在使用Union Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了银行卡支付，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 4)
		{
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了货到付款，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 5)
		{
			cout << "正在使用PayPal，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了PayPal，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 6)
		{
			cout << "正在使用Apple Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Apple Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 7)
		{
			cout << "正在使用Google Pay，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Google Pay，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 8)
		{
			cout << "正在使用Monster Card支付，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "您选择了Monster Card，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;

		}
		else if (pay == 9)
		{
			cout << "正在使用VISA，请稍等..." << endl;
			cout << "尝试第一次请求。" << endl;
			cout << "正在处理请求，请稍等..." << endl;
			cout << "您选择了VISA，支付成功！" << endl;
			cout << "恭喜您购买成功！总计：13999CNY" << endl;
		}
		else if (pay == 10)
		{
			cout << "您取消了支付。" << endl;
			return 0;
		}
	}
	return 0;
}