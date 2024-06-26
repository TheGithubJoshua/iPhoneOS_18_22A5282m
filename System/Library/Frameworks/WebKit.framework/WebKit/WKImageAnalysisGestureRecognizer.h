@class UIView;
@protocol WKImageAnalysisGestureRecognizerDelegate;

@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer {
    UIView<WKImageAnalysisGestureRecognizerDelegate> *_imageAnalysisGestureRecognizerDelegate;
}

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithImageAnalysisGestureDelegate:(id)a0;
- (void)beginAfterExceedingForceThresholdIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
