// #include<stdio.h>
// int main(){

//     long long int eye,mouth,body;
//     scanf("%lld %lld %lld",&eye,&mouth,&body);
//     long long int count1 =0;

//     if(eye<=mouth && eye<=body){
//         printf("%lld",eye);
//     }
//     else if (mouth<=eye && mouth<=body){
//         count1 = mouth;
//         eye = eye-mouth;
//         body = body-mouth;

//         if((eye/2)<=body){
//             count1 = count1 + (eye/2);
//             printf("%lld",count1);
//         }
//         else if((eye / 2 ) >= body){
//             count1 = count1 +body;
//             printf("%lld",count1);
//         }
//     }
//     else if (body <=eye && body<=mouth){
//         printf("%lld",body);
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    long long int e, m, b, res = 0;
    scanf("%lld %lld %lld", &e, &m, &b);
    if(e == 0 || b == 0){ // e othoba body er kono ekta jodi 0 hoy taile ans 0
        printf("0");
    }
    else{ // minimum ekta kore holeo eye ar body ache
        long long int mn = e;
        // 24 < 24 --> false
        if(m < mn){
            mn = m; // jodi amader m er value ta mn er thekeo choto hoy taile mn ke update kore m kore dibo
        }
        if(b < mn){
            mn = b; // jodi amader b er value ta mn er thekeo choto hoy taile mn ke update kore b kore dibo
        }
        res += mn;
        // res = res + mn;
        // tinta value er moddhe min value e hocche tader moddher common value
        e -= mn;
        b -= mn;
        m -= mn;
        // printf("%lld %lld %lld", e, m, b);
        // Two eyes and one body
        // 2:1 --> 
        if(e/2 < b){ // e/2 ar b er moddher min ke nibo
            res += e / 2;
        }
        else{
            res += b;
        }
        printf("%lld", res);
    }
    return 0;
}