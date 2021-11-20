#include <stdio.h>

int main()
{
    char vc = 'A', *pc;
    int vi = 123, *pi;
    double vd = 12.345, *pd;

    pc = &vc;  // pc는 vc를 가리키게 함
    pi = &vi;  // pi는 vi를 가리키게 함
    pd = &vd;  // pd는 vd를 가리키게 함

    printf("\n pc-1 = %p, pc = %p, pc+1 = %p", pc-1, pc, pc+1);
    printf("\n pi-1 = %p, pi = %p, pi+1 = %p", pi-1, pi, pi+1);
    printf("\n pd-1 = %p, pd = %p, pd+1 = %p", pd-1, pd, pd+1);

    return 0;
}
