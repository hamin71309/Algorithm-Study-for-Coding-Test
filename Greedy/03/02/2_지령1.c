#include <stdio.h>
#include <stdlib.h>



int main(void){
	int N,M,K; //M: ���ڰ� �������� Ƚ��, K: �ʰ� ����
	printf("N, K, M�� �������� �����Ͽ� �Է��Ͻÿ�.");
	scanf("%d %d %d",&N, &M, &K);
	
	int N_arr[N];// N: �迭�� ũ��
	
	int i, j, temp;
	int result = 0; 
	printf("%d���� ���ڸ� �������� �����Ͽ� �Է����ּ���:", N);
	// �迭�� ���� �߰� 
	for( i=0; i<N; i++){
		scanf("%d", &N_arr[i]);
	}
	
	//�Էµ� �迭 Ȯ�� 
	printf("�Էµ� ����");
	for(i=0; i<N; i++){
		
		printf("%d ", N_arr[i]);
	} 
	printf("�Դϴ�.\n");
	
	for(i =0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(N_arr[i]>N_arr[j]) {
				temp = N_arr[i];
				N_arr[i]=N_arr[j];
				N_arr[j]=temp;
			}
		}
	} 
	
	 
	printf("���ĵ� ����");
	for(i=0; i<N; i++){
		
		printf("%d ", N_arr[i]);
	} 
	printf("�Դϴ�.\n");
	
	printf("%d %d ", N_arr[N-1],N_arr[N-2]);
	while(1){
		for(i=0; i<K; i++){
			if(M==0){
				break;
			}
			M -=1;
			result += N_arr[N-1];
		}
		result += N_arr[N-2];
		
		M-=1;
		if(M==0){
			break;
		}
		
	}
	
	printf("%d",result);
	
	return 0;
	
	
	
}
