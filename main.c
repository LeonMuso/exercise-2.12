#include <stdio.h>

int main(void) {
int g1, g2, m1, m2, a1, a2, diff;
    printf("inserici la prima data:" );
    scanf("%d %d %d" , &g1, &m1, &a1);
    printf("inserici la seconda data:" );
    scanf("%d %d %d" , &g2, &m2, &a2);
    diff = g1 - g2 + (m1-m2)*30 +(a1-a2)*360;
    g1 = diff%30;
    m1 = (diff/30)%12;
    a1 = (diff/360)%12;
    printf("tempo trascorso: %d %d %d", g1, m1, a1);
}
