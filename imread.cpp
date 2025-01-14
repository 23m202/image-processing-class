#include <cstdio>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("An input image file is missing.\n");
    return EXIT_FAILURE;
  }
  cv::Mat image;

  image = cv::imread(argv[1]);
  if (image.empty()) {
    printf("Image file is not found.\n");
    return EXIT_FAILURE;
  }
  printf("width = %d, height = %d", image.cols, image.rows);
  cv::imshow("image", image);
  cv::waitKey();
  cv::destroyAllWindows();

  return EXIT_SUCCESS;
}
