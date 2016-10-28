#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;



int main(int argc, char  ** argv) {

Mat unprocessed, processed, gray, processedgray;
//read in unprocessed image
unprocessed = imread(argv[1],1);
// convert to gray
cvtColor(unprocessed, gray, CV_BGR2GRAY);
//apply bilateral filter to both unprocessed and gray images
bilateralFilter(unprocessed,processed,8,200,200);
bilateralFilter(gray,processedgray,8,200,200);
// display in windows

namedWindow( "original", CV_WINDOW_AUTOSIZE );
namedWindow( "processed", CV_WINDOW_AUTOSIZE );
namedWindow( "processedgray", CV_WINDOW_AUTOSIZE );

imshow( "original", unprocessed );
imshow( "processed", processed);
imshow( "processedgray", processedgray );

//put code here for saving files
    imwrite("processedgray.jpg", processedgray);
    
    

waitKey(0);



return 0;
}
