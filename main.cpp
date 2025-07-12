#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load image
    Mat image = imread("input.jpg");
    if (image.empty()) {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }

    // Apply grayscale filter
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    // Save the result
    imwrite("output.jpg", grayImage);

    // Display the result
    imshow("Grayscale Image", grayImage);
    waitKey(0);
    return 0;
}
