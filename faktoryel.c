include <stdio.h>

int main(){

int sayi,fakt=1,i;

printf("faktoryel degerini bulmak istediginiz sayiyi giriniz=");

scanf("%d",&sayi);

for(i=1;i<=sayi;i++){

	fakt*=i;

}

printf("faktoryel sonucu=%d",fakt);

return 0;

}
