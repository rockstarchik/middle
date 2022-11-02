 int itc_min_num(long long number){
 int mi, n;
 mi=9;
 while(number > 0){
    n=number%10;
    if (n<mi)
        mi=n;
    number=number/10;
 }
 return mi;
        }

int itc_rev_num(long long number){
        int rev;
        rev=0;
        while (number > 0){
            rev=rev*10 + number%10;
        number=number/10;
}
        return rev;
        }

int itc_null_count(long long number){
int null;
null=0;
while(number > 0){
    if (number%10 == 0)
      null=null+1;
    number=number/10;
}
return null;
}

bool itc_mirror_num(long long number){
int mir,nal;
nal=number;
mir=0;
while(number > 0){
    mir=number%10+mir*10;
    number=number/10;
}
if (mir==nal)
    return 1;
return 0;
}

int itc_mirror_cout(long long number){
int kol,i;
kol=0;
for(i=1;i<=number;i++)
if (itc_mirror_num(number) )
    kol=kol+1;
 return kol;
}
