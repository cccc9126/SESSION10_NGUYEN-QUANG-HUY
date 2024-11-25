#include <stdio.h>

int main(int argc, const char * argv[]) {
    int day, month,year;
    printf("hay nhap ngay ");
    scanf("%d",&day);
    printf("hay nhap thang ");
    scanf("%d",&month);
    printf("hay nhap nam ");
    scanf("%d",&year);

    if (year % 4 == 0 && year % 100!=0){
        if(month == 1||month ==3||month ==5||month ==7||month ==8||month ==10||month ==12){
            if(day<=31){
                printf("ngay thang nam hop le");
            }
        }else if(month == 4||month ==6||month ==9||month ==11){
            if (day <= 30){
                printf("ngay thang nam hop le");
                
            }
        }else if(month ==2){
            if (day<=29){
                printf(" ngay thang nam hop le");
            }else{
                printf("ngay thang nam khong hop le");
            }
        
        }
         //hello
    }else if(year %100 ==0){
        if (year % 400 == 0){
            if(month == 1||month ==3||month ==5||month ==7||month ==8||month ==10||month ==12){
                if(day<=31){
                    printf("ngay thang nam hop le");
                }
            }else if(month == 4||month ==6||month ==9||month ==11){
                if (day <= 30){
                    printf("ngay thang nam hop le");
                    
                }
            }else if(month ==2){
                if (day<=29){
                    printf(" ngay thang nam hop le");
                }
            }else{
                printf("ngay thang nam khong hop le");
            }
        }else if(year%400!=0){
            if(month == 1||month ==3||month ==5||month ==7||month ==8||month ==10||month ==12){
                if(day<=31){
                    printf("ngay thang nam hop le");
                }
            }else if(month == 4||month ==6||month ==9||month ==11){
                if (day <= 30){
                    printf("ngay thang nam hop le");
                    
                }
            }else if(month ==2){
                if (day==29){
                    printf("ngay thang nam khong hop le");
                }else{
                    printf("ngay thang nam hop le");
                }
                
            }
        }
    }else if (day>31||month>12){
        printf("ngay thang nam khong hop le");
    }else{
        if(month == 1||month ==3||month ==5||month ==7||month ==8||month ==10||month ==12){
            if(day<=31){
                printf("ngay thang nam hop le");
            }
        }else if(month == 4||month ==6||month ==9||month ==11){
            if (day <= 30){
                printf("ngay thang nam hop le");
                
            }
        }else if(month ==2){
            if (day=29){
                printf(" ngay thang nam khong hop le");
            }else{
                printf("ngay thang nam khong hop le");
            }
        
        }
    }
    return 0;
}
