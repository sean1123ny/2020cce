# 2020cce
README.md
```c
#include<stdio.h>
struct DATA { ///宣告
    float x, y, z;///定義裡面有...
} point1 ;
///point1 是變數, 長得像DATA
///DATA裡面有 x,y,z
int main()
{
    point1.x=3;///使用(裡面的值)
    point1.y=5;///使用
    point1.z=7;///使用
    printf("%f %f %f\n", point1.x, point1.y, point1.z);

}
```
```c
#include<stdio.h>
struct DATA { ///宣告
    float x, y, z;///定義裡面有...
} point1 ;
struct DATA points[5];
///point1 是變數, 長得像DATA
///DATA裡面有 x,y,z
int main()
{
    ///int b;
    ///int a[5];
    for(int i=0 ; i<5 ; i++){
        points[i].x = i*10;
        points[i].y = 20;
        points[i].z = 0;
        printf("%f %f %f\n", points[i].x, points[i].y, points[i].z);
    }
}
```
```c
#include<stdio.h>
struct DATA {
    float x, y, z;
} a, b, c;
struct DATA points[5];

int main()
{
        struct DATA d, e, f;

        for(int i=0 ; i<5 ; i++){
        points[i].x = i*10;
        points[i].y = 20;
        points[i].z = 0;
        printf("%f %f %f\n", points[i].x, points[i].y, points[i].z);
        }

}
```
```c
#include<stdio.h>
struct DATA {
    float x, y, z;
} a, b;
struct DATA c, d;

int main()
{
    struct DATA e;
    struct DATA f={ 1,2,3};///宣告的同時, 可以初始值

    printf("%f %f %f\n", a.x, a.y, a.z);
    printf("%f %f %f\n", b.x, b.y, b.z);
    printf("%f %f %f\n", c.x, c.y, c.z);
    printf("%f %f %f\n", d.x, d.y, d.z);
    printf("%f %f %f\n", e.x, e.y, e.z);
    printf("%f %f %f\n", f.x, f.y, f.z);
}
```
