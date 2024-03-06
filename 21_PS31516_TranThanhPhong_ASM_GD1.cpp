#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
	int x;
	char c;
	int count=0;
	ASM:
	do{
	
	printf("\t\t\t*****************************************************\n");
	printf("\t\t\t*                      MENU                         *\n");
	printf("\t\t\t*  1. Kiem tra so nguyen                            *\n");
	printf("\t\t\t*  2. Tim uoc chung va boi chung cua 2 so           *\n");
	printf("\t\t\t*  3. Tinh tien cho quan karaoke                    *\n");
	printf("\t\t\t*  4. Tinh tien dien                                *\n");
	printf("\t\t\t*  5. Doi tien                                      *\n");
	printf("\t\t\t*  6. Tinh lai suat vay ngan hang tra gop           *\n");
	printf("\t\t\t*  7. Chuong trinh vay tien mua xe                  *\n");
	printf("\t\t\t*  8. Sap xep thong tin sinh vien                   *\n");
	printf("\t\t\t*  9. Game FPOLY-LOTT                               *\n");
	printf("\t\t\t*  10. Tinh toan phan so                            *\n");
	printf("\t\t\t*  11. Thoat chuong trinh                           *\n");
	printf("\t\t\t*                                                   *\n");
	printf("\t\t\t*****************************************************\n");
	printf("\nMoi ban chon chuong trinh: ");
	
	if(scanf("%d%c", &x, &c) != 2 || c != '\n'){
		
		printf("Ban da chon sai chuong trinh. Moi ban chon lai tu 1-11\n");
		fflush(stdin);
	}
	else if(x>11 || x<1){
		
		printf("Ban da chon sai chuong trinh. Moi ban chon lai tu 1-11\n");
		fflush(stdin);
		
	}
	else{
		count++;
		system("cls");
	}
	}	
	 while(count==0);

	switch(x)
	{
		
		case(1):{
			int m;
			float n;
				printf("\t\t\t*****************************************************\n");
				printf("\t\t\t*                      MENU                         *\n");
				printf("\t\t\t*  1. Kiem tra so nguyen                            *\n");
				printf("\t\t\t*  2. kiem tra so nguyen to                         *\n");
				printf("\t\t\t*  3. kiem tra so chinh phuong                      *\n");
				printf("\t\t\t*  4. Tro lai Menu ban dau                          *\n");
				printf("\t\t\t*                                                   *\n");
				printf("\t\t\t*****************************************************\n");
				printf("Moi ban chon chuong trinh: \n");
				scanf("%d",&m);
				if(m==1){
					char chon;
					do{
					
					printf("Ban chon kiem tra mot so co phai la so nguyen khong.\n");
					printf("Moi ban nhap so muon kiem tra: ");
					scanf("%f",&n);
					if(n==(int)n){
						printf("So %.1f la so nguyen\n",n);
					}
						else{
							printf("So %.1f khong la so nguyen\n",n);
					 }
					 printf("Ban co muon tiep tuc kiem tra so ban nhap co phai la so nguyen khong? (Y/N)\n");
					 fflush(stdin);
					 scanf("%c",&chon);
					}
						while( chon=='y' || chon=='Y');
						system("cls");
						goto ASM;
					}
				if(m==2){
					char chon;
					do{
				
					printf("Ban chon kiem tra so nguyen to\n");
					int x,i;
					int count=0;
					printf("Nhap vao so cua ban:");
					scanf("%d",&x);
					if (x>=2){
						for(i=2;i<x;i++){
							if(x%i==0){
								count++;
							}
						}
						if(count==0){
							printf("%d la so nguyen to\n",x);
						}
						else{
							printf("%d khong la so nguyen to\n",x);
						}
					}
					else{
						printf("%d khong phai so nguyen to\n",x);
					}
					printf("Ban co muon tiep tuc kiem tra so ban nhap co phai la so nguyen to khong? (Y/N)\n");
					 fflush(stdin);
					 scanf("%c",&chon);
				}
					while( chon=='y' || chon=='Y');
					system("cls");
						goto ASM;
				}
				if(m==3){
					char chon;
					do{
					
					int x,i;
						int count=0;
						printf("Nhap so cua ban:");
						scanf("%d",&x);
						for(i=1;i<x;i++){
							if(i*i==x){
								count++;
							}
						}
						if(count==0){
							printf("%d khong la so chinh phuong\n",x);
						}
						else{
							printf("%d la so chinh phuong\n",x);
						}
						printf("Ban co muon tiep tuc kiem tra so ban nhap co phai la so chinh phuong khong? (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					 }
					 	while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;
									}
				if(m==4){
					system("cls");
					goto ASM;
				}
			break;
		}
		
		case(2):{
			int m;
			printf("\t\t\t***************************************************\n");
			printf("\t\t\t*                       Menu                      *\n");
			printf("\t\t\t* 1. Tim UCLN cua 2 so                            *\n");
			printf("\t\t\t* 2. Tim BCNN cua 2 so                            *\n");
			printf("\t\t\t* 3. Tro lai Menu ban dau                         *\n");
			printf("\t\t\t*                                                 *\n");
			printf("\t\t\t***************************************************\n");
			printf("Moi ban chon chuong trinh: ");
			scanf("%d",&m);
			if(m==1){
				char chon;
				int i,ucln;
				do{
					printf("Ban chon tim UCLN cua 2 so\n");
					int a,b;
					printf("Moi ban nhap so thu nhat: ");
					scanf("%d",&a);
					printf("Moi ban nhap so thu hai: ");
					scanf("%d",&b);
					if(b==0){
						printf("UCLN cua 2 so ban vua nhap la %d\n",a);
					}
					else if(a==0){
						printf("UCLN cua 2 so ban vua nhap la %d\n",b);
					}
					else if(a>b){
						i=a;
						a=b;
						b=i;
						for(ucln=a;ucln>=1;ucln--){
							if(a%ucln==0 && b%ucln==0){
								printf("UCLN cua %d , %d la %d\n",a,b,ucln);
							}
						}
					}
					else{
						for(ucln=a;ucln>=1;ucln--){
							if(a%ucln==0 && b%ucln==0){
								printf("UCLN cua %d , %d la %d\n",a,b,ucln);
					}
				}
			}
						printf("Ban co muon tiep tuc tim UCLN cua 2 so khong? (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					}
					while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;
					
				}
				if(m==2){
					printf("Ban chon tim BCNN cua 2 so\n");
					char chon;
					int i,bcnn,a,b;
					int count=0;
					do{
						do{
					printf("Moi ban nhap so thu nhat: ");
					scanf("%d",&a);
					printf("Moi ban nhap so thu hai: ");
					scanf("%d",&b);
					if(a==0 || b==0){
						printf("So 0 khong co boi so. Moi ban nhap lai\n");
					}
					else{
					
					for (bcnn=a;bcnn<=a*b;bcnn++)
					{
        			if (bcnn%a==0 && bcnn%b==0){
            		printf("BCNN cua %d , %d la %d\n",a,b,bcnn);
            		count++;
            		break;
        			}
        		}
        		}
				}
				while(count==0);
					printf("Ban co muon tiep tuc tim BCNN cua 2 so khong? (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					}
					while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;
			}
			if(m==3){
				system("cls");
					goto ASM;
			}
			break;
		}
		case(3):{
			char chon;
			do{
				float x,y,z;
			printf("Ban chon tinh tien karaoke\n");
			printf("Gio ban bat dau hat: ");
			scanf("%f",&x);
			if(x<12 || x>23){
				printf("Quan Karaoke IT18312 dang dong cua, hen den gio mo cua 12h-23h hang ngay");
				break;
				}
			printf("Tong so gio da hat: ");
			scanf("%f",&y);
			printf("Tong so phut le da hat: ");
			scanf("%f",&z);
			

			 if(x>=14 || x<=17){
				printf("Thoi gian bat dau hat cua ban trong khung gio vang, ban duoc giam 10 phan tram tren tong hoa don\n");
				if(y>0 && y<=3){
					float t1=((y*150000)+((z/60)*150000))*0.9;
					printf("Gia tien cho 3 gio dau tien la 150k/h\n");
					printf("So tien phai tra la: %.3f VND\n",t1);
				}
				else if(y>=4){
					float c=y-3;
					float t1=((3*150000)+((z/60)*150000)+(c*150000*0.7))*0.9;
					printf("Gia tien cho 3 gio dau tien la 150k/h\nSau tieng thu tu giam 30 phan tram\n");
					printf("So tien phai tra la %.3f VND",t1);
				}
				
			}
			else if(x>17 || x<=23){
					if(y>0 && y<=3){
					float t1=(y*150000)+((z/60)*150000);
					printf("Gia tien cho 3 gio dau tien la 150k/h\n");
					printf("So tien phai tra la: %.3f VND\n",t1);
				}
					else if(y>=4){
					float c=y-4;
					float t1=((y*150000)+((z/60)*150000)+(c*150000*0.7));
					printf("Gia tien cho 3 gio dau tien la 150k/h\nSau tieng thu tu giam 30 phan tram\n");
					printf("So tien phai tra la %.3f VND",t1);
				}
			}
					printf("Ban co muon tiep tuc tinh tien karaoke khong? (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					}
					while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;	
			break;
		}
		case(4):{
				int m;
				float x;
				char chon;
				do{
					printf("Ban chon chuong trinh tinh tien dien.\n");
					int x;
	printf("Nhap dien tieu thu: ");
	scanf("%d",&x);
	if(x>0 && x<=50){
		float y=x*1.678;
		printf("Tien dien ban phai dong la: %.3f\n",y);
	}
	else if(x>50 && x<=100){
		float y=50*1.678 + (x-50)*1.734;
		printf("Tien dien ban phai dong la: %.3f\n",y);
	}
	else if(x>100 && x<=200){
		float y=50*1.678+50*1.734+(x-100)*2.014;
		printf("Tien dien ban phai dong la: %.3f\n",y);
	}
	else if(x>200 && x<=300){
		float y=50*1.678 + 50*1.734+ 100*2.014+(x-200)*2.536;
		printf("Tien dien ban phai dong la: %.3f\n",y);
	}
	else if(x>300 && x<=400){
		float y=50*1.678 + 50*1.734+100*2.014+200*2.536+(x-300)*2.834;
		printf("Tien dien ban phai dong la: %.3f\n",y);
	}
	else if(x>400){
		float y=50*1.678+50*1.734+100*2.014+200*2.536+300*2.834+(x-400)*2.927;
		printf("Tien dien ban phai dong la: %.3f\n",y);
	}			
		printf("Ban co muon tiep tuc tinh tien dien khong? (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
		}
					while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;	
			break;
				}
				case(5):{
					int x,y,z;
					int count=0;
					char chon;
					printf("Ban chon chuong trinh doi tien.\n");
					do{
					do{
					printf("Moi ban nhap so tien muon doi: \n");
					printf("Moi ban nhap hang tram(100/200/500): ");
					scanf("%d",&x);
					printf("Moi ban nhap hang chuc(10/20/50): ");
					scanf("%d",&y);
					printf("Moi ban nhap hang don vi(1/2/5): ");
					scanf("%d",&z);
					if(x>500 || y>50 || z>5){
						printf("So tien ban nhap khong hop le. Vui long nhap lai\n");
					}
					else if(x<=500 || y<=50 || z<=5){
						count++;
						if(x==100){
							int c=2;
							printf("%d duoc doi sang %d to 50\n",x,c);
						}
						else if(x==200){
							int c=2,v=4;
							printf("%d duoc doi sang %d to 100 hoac %d to 50\n",x,c,v);
						}
						else if(x==500){
							int c=2, v=1;
							printf("%d duoc doi sang %d to 200 va %d to 100\n",x,c,v);
					}
						else{
							printf("So tien ban can doi chua hop ly. Moi ban nhap lai\n");
						}
						if(y==10){
							int c=2;
							printf("%d duoc doi sang %d to 5\n",y,c);
						}
						else if(y==20){
							int c=2,v=4;
							printf("%d duoc doi sang %d to 10 hoac %d to 5\n",y,c,v);
						}
						else if(y==50){
							int c=2, v=1;
							printf("%d duoc doi sang %d to 20 va %d to 10\n",y,c,v);
						}
						else{
							printf("So tien ban can doi chua hop ly. Moi ban nhap lai\n");
						}
						if(z==1){
							printf("1 la menh gia nho nhat.");
						}
						else if(z==2){
							int c=2;
							printf("%d duoc doi sang %d to 1 \n",z,c);
						}
						else if(z==5){
							int c=2, v=1;
							printf("%d duoc doi sang %d to 2 va %d to 1\n",z,c,v);
						}
						else{
							printf("So tien ban can doi chua hop ly. Moi ban nhap lai\n");
						}
					}
						}
						while(count==0);
						printf("Ban co muon tiep tuc doi tien khong?\n (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
		}
					while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;	
						break;
					}
					case(6):{
						char chon;
						do{
							int x,i,tg,tl;
						printf("Ban chon chuong tinh tinh lai suat vay ngan hang\n");
						printf("Ngan hang ban dang vay co ky han la 12 thang\nVoi lai suat la 5 phan tram mot thang\n");
						printf("Nhap so tien ban muon vay: ");
						scanf("%d",&x);
						int x1=x;
						printf("\tThang\t|\tTien lai\t|\tTien goc\t|\tTong tien phai tra\t|\tSo tien con lai\t\n");
						for(i=1;i<=12;i++){
							int tg=x/12;
							int tl=x1*0.05;
							x1-=tg;
							
							int tt=tg+tl;
							int cl=x1;
							printf("\t%d\t|\t%d\t\t|\t%d\t\t|\t%d\t\t\t|\t%d\t\n",i,tl,tg,tt,cl);
							if(cl==0){
								printf("Ban da hoan tat tra no cho ngan hang\n");
							}
						}
						printf("Ban co muon tiep tuc doi tien khong?\n (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					 	system("cls");
						}
						while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;	
						break;
					}
					case(7):{
						int x,y;
						int count=0;
						int nam;
						int counta=0;
						char chon;
						do{
						printf("Chao mung ban den voi chuong trinh vay tien mua xe\n");
						printf("Moi ban nhap gia tri cua chiec xe ban muon mua: \n");
						scanf("%d",&x);
						printf("Ban muon tra truoc bao nhieu phan tram: \n");
						scanf("%d",&y);
						int z=x-(x*y/100);
						printf("Vay so tien ban vay de tra cho chiec xe cua minh la: %d\n",z);
						do{
						printf("Moi ban chon thoi han vay (12/24) nam: ");
						scanf("%d",&nam);
						if(nam==12 || nam==24){
							printf("Thoi han vay cua ban la: %d nam\n",nam);
							count++;
						}
						else{
							printf("Thoi han vay cua ban khong hop le. Moi ban chon lai \n");
						}
					}
						while(count==0);
						printf("Lai suat co dinh hang nam la 7,2\n");
						int x1=z;
						int i;
						printf("\tNam\t|\tTien lai\t|\tTien goc\t|\tTong tien phai tra\t|\tSo tien con lai\t\n");
						for(i=1;i<=nam;i++){
							int tg=z/nam;
							int tl=x1*0.072;
							x1-=tg;
							
							int tt=tg+tl;
							int cl=x1;
							printf("\t%d\t|\t%d\t\t|\t%d\t\t|\t%d\t\t\t|\t%d\t\n",i,tl,tg,tt,cl);
							
							if(cl==0){
								printf("Ban da hoan tat tra no cho ngan hang\n");
							}
						}
						printf("Ban co muon tiep tuc tinh tien vay de mua xe khong?\n (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					 	system("cls");
						}
						while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;
						break;
					}	
	case(8):{
		int n,i,j;
	char A[n][255],S[255];
	float D[n],c;
	char X[n][255];
	int count=0;
	char chon;
	do{
	printf("\t\t\t\t** Chuong Trinh Sap Xep Thong Tin SV **\n");
	printf("Danh sach cua ban co bao nhieu sinh vien: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap ho va ten sinh vien thu %d: ",i);
		fflush(stdin);
		gets(A[i]);
		do{
		printf("Nhap diem sinh vien thu %d: ",i);
		scanf("%f",&D[i]);
		fflush(stdin);
		if(D[i]>10 || D[i]<0){
			printf("Diem ban nhap chua hop le. Vui long nhap lai.\n");
			count++;
		}
		else{
			count=0;
		}
	}while(count!=0);
		}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(D[i]<D[j]){
				c=D[i];
				D[i]=D[j];
				D[j]=c;
				strcpy(S,A[i]);
				strcpy(A[i],A[j]);
				strcpy(A[j],S);
			}
		}
		}
	
	for(i=0;i<n;i++){
		if(D[i]>=9){
			char P[]="Xuat Sac";
			strcpy(X[i],P);
		}
		else if(D[i]>=8){
			char P[]="Gioi";
			strcpy(X[i],P);
		}
		else if(D[i]>=6.5){
		char P[]="Kha";
			strcpy(X[i],P);
		}
		else if(D[i]>=5){
			char P[]="Trung Binh";
			strcpy(X[i],P);
		}
		else{
			char P[]="Yeu";
			strcpy(X[i],P);
		}
	}
	printf("Thong tin sv sau khi xep hang: \n");
	for(i=0;i<n;i++){
		printf("%s , %.1f , %s\n",A[i],D[i],X[i]);
	}	
	printf("Ban co muon tiep tuc sap xep thong tin SV?\n (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					 	system("cls");
}
while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;
						break;
	}

					case(9):{
						int x,y,a,b;
						int count=0;
						char chon;
						do{
						printf("Chao mung ban den voi chuong trinh xo so cua FPOLY-LOTT\n");
						printf("Moi ban nhap so lon nhat trong day so cua minh.\n");
						printf("So lon nhat: ");
						scanf("%d",&x);
						printf("Xo so se chay tu 0 den %d\n",x);
							printf("Moi ban chon 2 so may man cua minh.\n");
						do{
							printf("So thu nhat: ");
							scanf("%d",&a);
							printf("So thu hai: ");
							scanf("%d",&b);
							if(a>x || b>x){
								printf("So ban chon khong nam trong day so. Moi chon lai\n");
								count=0;
							}
							else if(a<0 || b<0){
								printf("So ban chon khong nam trong day so. Moi chon lai\n");
								count=0;
							}
							else {
								printf("Chuong trinh xo so bat dau.\n");
								count++;
							}
						}while(count==0);
						count=0;
						int r1,r2;
					
						 r1=rand()%x;
						 r2=rand()%x;
						printf("So may man thu nhat la %d\n",r1);
						printf("So may man thu hai la %d\n",r2);
						
						printf("Ban co muon tiep tuc thu van may khong?\n (Y/N)\n");
					 	fflush(stdin);
					 	scanf("%c",&chon);
					 	system("cls");
						}
						while( chon=='y' || chon=='Y');
					 	system("cls");
						goto ASM;
					break;
					}	
					}
	return 0;
}


