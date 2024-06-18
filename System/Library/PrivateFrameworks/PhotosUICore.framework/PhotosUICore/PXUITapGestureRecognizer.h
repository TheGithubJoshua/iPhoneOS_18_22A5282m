@class NSNumber;

@interface PXUITapGestureRecognizer : UITapGestureRecognizer {
    NSNumber *_initialEventType;
}

- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;

@end
