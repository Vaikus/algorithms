#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

int main(int argc, char  ** argv) {
  Mat A,C;
  A = imread(argv[1], 1);
  Mat B(A);
  C = A;
  Mat D(A, Rect(200,200,200,200));
  Mat E = A(Range::all(),Range(1,3));
  namedWindow( window_name1, WINDOW_AUTOSIZE );
  imshow("Unprocessed Image",A);
  namedWindow( window_name2, WINDOW_AUTOSIZE );
  imshow("Unprocessed Image",D);
    
    waitKey();
  return 0;
}
