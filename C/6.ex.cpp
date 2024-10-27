#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y;
};

double distanceFromPointToLine(Point A, Point B, Point P) {
    double A_param = A.y - B.y;
    double B_param = B.x - A.x;
    double C_param = A.x * B.y - B.x * A.y;
    printf("Ax=%lf,Ay=%lf \n",A.x,A.y);
    printf("Bx=%lf,By=%lf \n",B.x,B.y);
    printf("Px=%lf,Py=%lf \n",P.x,P.y);
    printf("A_p=%lf \n",A_param);
    double numerator = abs(A_param * P.x + B_param * P.y + C_param);
    double denominator = sqrt(A_param * A_param + B_param * B_param);
    printf("n=%lf,d=%lf \n",numerator,denominator);
    return numerator / denominator;
}

int main() {
    double yz;
    scanf("%lf",&yz);
    printf("yz=%lf",yz);
    Point lib[100];
    int i=0;
    getchar();
    while(getchar()!='\n'){
        scanf(" [%lf,%lf]",&lib[i].x,&lib[i].y);
        printf("[%lf,%lf]\n",lib[i].x,lib[i].y);
        i++;
    }
    printf("--------------\n");
    for(int j=0;j<i;j++){
        printf("%lf",distanceFromPointToLine(lib[0], lib[i-1], lib[j]));
    }

    // double distance = distanceFromPointToLine(A, B, P);

    // std::cout << "The distance from point P to the line AB is: " << distance << std::endl;

    return 0;
}