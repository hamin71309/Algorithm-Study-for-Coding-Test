#include <stdio.h>

int main(){
	int n, m, k = 0; 
	int i, j, temp= 0;
	int count, result = 0;
	
	scanf("%d %d %d", &n, &m, &k);
	
	int data[10000];
	for(i = 0; i < n; i++){
		scanf("%d", &data[i]);
	}
	
	for (i = 0; i < n; i++)   
    {
        for (j = 0; j < n - 1; j++) 
        {
            if (data[j] > data[j + 1])          
            {                                
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;   
            }
        }
    }
	int first= data[n-1];
	int second = data[n-2];
	
	count = (m / (k+1))*k;
	count += m % (k+1);
	
	result += (count)*first;
	result += (m-count)*second;
	
	printf("%d", result);
	
	
	return 0;
}
