#include <graphics.h>
#include <cmath>
#include <iostream>

void translation() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    rectangle(50, 50, 150, 120);
    delay(2000);
    cleardevice();
    int constant = 200;
    rectangle(50 + constant, 50 + constant, 150 + constant, 120 + constant);
    delay(10000);
    closegraph();
}

void scalingUsingMultiplication() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    rectangle(200, 200, 400, 300);
    delay(5000);
    double constant = 1.3;
    cleardevice();
    rectangle(200 * constant, 200 * constant, 400 * constant, 300 * constant);
    delay(5000);
    closegraph();
}

void scaling() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    for (int i = 1; i < 100; i += 3) {
        rectangle(200 - i, 200 - i, 400 + i, 300 + i);
        circle(((200 - i) + (400 + i)) / 2, ((200 - i) + (300 + i)) / 2, ((300 + i) - (200 - i)) / 2);
        delay(2000);
    }
    closegraph();
}

void rotation() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int centerX = 300, centerY = 250; // Center of rotation
    int angle = 0;
    double radians;

    for (angle = 0; angle <= 360; angle += 10) {
        cleardevice();
        radians = angle * (M_PI / 180);
        int x1 = centerX + 100 * cos(radians);
        int y1 = centerY + 50 * sin(radians);
        int x2 = centerX - 100 * cos(radians);
        int y2 = centerY - 50 * sin(radians);
        rectangle(x1, y1, x2, y2);
        delay(100);
    }
    closegraph();
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    while (1) {
        std::cout << "Choose the choice: 1) Translation, 2) Scaling, 3) Rotation, 4) Exit " << std::endl;
        int ch;
        std::cin >> ch;

        switch (ch) {
            case 1:
                translation();
                break;
            case 2:
                scalingUsingMultiplication();
                break;
            case 3:
                rotation();
                break;
            case 4:
                goto hi;
            default:
                std::cout << "Please provide correct input" << std::endl;
                break;
        }
    }

hi:
    closegraph();
    return 0;
}
