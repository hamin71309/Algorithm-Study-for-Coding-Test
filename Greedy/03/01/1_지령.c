#include <stdio.h>
#include <stdlib.h>
int main(void){
	int count, n, coin;
	count = 0;
	scanf("%d", &n);
	

	int arCoins[4]={500,100,50,10};
	for(int i=0; i<sizeof(arCoins)/sizeof(arCoins[0]); i++){
		coin = arCoins[i];  // 500, 100
		count += n/coin;    // �� 1260/500 = 2
		n %= coin;			// 1260%500 = 260
		
	}
	
	printf("%d", count);
	
	// 8000���� �޾Ұ� �Ž����� �ܵ����� 500 400 100 ��������
	// 500 100 100 �� �Ž����ִ� ���� �ƴ� 400 400�� �Ž����ְ� �ϴ� �˰�����? 
	
	
	
	
	
	
}
