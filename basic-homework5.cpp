#include <stdio.h>
#include <stdlib.h>

int main(void)
{

   int h1,m1,s1,h2,m2,s2,finalh,finalm,finals,time;

    printf("輸入第一時間：");
    scanf("%d:%d:%d", &h1, &m1, &s1); 
    printf("輸入第二時間：");
    scanf("%d:%d:%d", &h2, &m2, &s2); 

     finalh  = h1-h2;
     finalm  = m1-m2;
     finals  = s1-s2;

	  finalh = abs(finalh);
      finalm = abs(finalm);
      finals = abs(finals);

    time =finalh * 3600 +  finalm  * 60 + finals;

    printf("\n相隔秒數為: %d\n", time);

    system("pause");

    return 0;

}
