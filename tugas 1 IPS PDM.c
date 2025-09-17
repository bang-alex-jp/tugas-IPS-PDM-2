#include <stdio.h>

main(){
	//deklarasi
	int i,TotalSKS, SKSperCrs, C, nilai;
	float bobot, IPS;
	
	//input
	printf("Jumlah course: ");
	scanf("%d", &C);
	
	printf("jumlah SKS per course: ");
	scanf("%d",&SKSperCrs);
	
	TotalSKS = C*SKSperCrs;
	printf("Total SKS: %d\n", TotalSKS);
	
	//proses
	for (i=1;i<=C;i++){
		printf("Nilai course%d: ",i);
		scanf("%d",&nilai);
		if ((nilai>=90)&&(nilai<=100)){
			printf("Bobot: A , 4.0\n\n");
			bobot += 4.00;
		} else if ((nilai>=80)&&(nilai<=89)){
			printf("Bobot: A- , 3.67\n\n");
			bobot += 3.67;
		} else if ((nilai>=75)&&(nilai<=79)){
			printf("Bobot: B , 3.33\n\n");
			bobot += 3.33;
		} else if ((nilai>=70)&&(nilai<=74)){
			printf("Bobot: B- , 3.00\n\n");
			bobot += 3.00;
		} else if ((nilai>=65)&&(nilai<=69)){
			printf("Bobot: C , 2.5\n\n");
			bobot += 2.50;
		} else if ((nilai>=50)&&(nilai<=64)){
			printf("Bobot: D , 2.00\n\n");
			bobot += 2.00;
		} else if ((nilai>=0)&&(nilai<=49)){
			printf("Bobot: E , 0.00\n\n");
			bobot += 0.00;
		}
	}
	//output
	IPS = bobot*SKSperCrs/TotalSKS;
	printf("IPS: %f\n",IPS);
	if ((IPS>=3.91)&&(IPS<=4.00)){
		printf("Predikat: Summa Cum Laude");
	} else if ((IPS>=3.76)&&(IPS<=3.90)){
		printf("Predikat: Magna Cum Laude");
	} else if ((IPS>=3.51)&&(IPS<=3.75)){
		printf("Predikat: Cum Laude");
	} else if ((IPS>=3.00)&&(IPS<=3.50)){
		printf("Predikat: High Merit");
	} else if ((IPS>=2.00)&&(IPS<=2.99)){
		printf("Predikat: Lulus Biasa");
	} else {
		printf("Predikat: Tidak Lulus");
	}

	return 0;
}
