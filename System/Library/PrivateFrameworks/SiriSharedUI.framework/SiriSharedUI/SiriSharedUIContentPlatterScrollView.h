@protocol SiriSharedUIContentPlatterScrollViewDelegate;

@interface SiriSharedUIContentPlatterScrollView : SiriSharedUIStandardScrollView

@property (nonatomic) BOOL adjustContentSizeOnNextLayout;
@property (nonatomic, getter=isAutomaticScrollingEnabled) BOOL automaticScrollingEnabled;
@property (weak, nonatomic) id<SiriSharedUIContentPlatterScrollViewDelegate> platterDelegate;

- (id)initWithCoder:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sharedInit;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutSubviews;

@end
