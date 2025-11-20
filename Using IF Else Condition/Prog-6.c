/* Total, average and grade with fail condition */
#include <stdio.h>
void main() {
    double m1,m2,m3;
    printf("Enter marks of three subjects: ");
    if (scanf("%lf %lf %lf", &m1, &m2, &m3)!=3) return 0;
    double total = m1 + m2 + m3;
    double avg = total / 3.0;
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Total = %.6g\nAverage = %.6g\nResult = Fail (a subject < 35)\n", total, avg);
        return 0;
    }
    printf("Total = %.6g\nAverage = %.6g\n", total, avg);
    if (avg >= 70) printf("Grade = Distinction\n");
    else if (avg >= 60) printf("Grade = First\n");
    else if (avg >= 50) printf("Grade = Second\n");
    else if (avg >= 35) printf("Grade = Third\n");
    else printf("Grade = Fail\n");
    return ;
}
