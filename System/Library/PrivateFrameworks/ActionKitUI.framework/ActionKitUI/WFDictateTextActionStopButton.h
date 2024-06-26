@class NSLayoutConstraint, UIView;

@interface WFDictateTextActionStopButton : UIButton

@property (weak, nonatomic) UIView *redSquare;
@property (weak, nonatomic) NSLayoutConstraint *redSquareWidthConstraint;
@property (nonatomic) BOOL recording;

- (void)setHighlighted:(BOOL)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)currentInnerCircleRadius;
- (double)currentLineWidth;
- (double)currentStopButtonSize;
- (void)setRecording:(BOOL)a0 animated:(BOOL)a1;

@end
