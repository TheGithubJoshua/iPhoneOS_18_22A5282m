@class NSString, MUPlaceVerticalCardConfiguration, UIView, UILongPressGestureRecognizer;
@protocol MUPlaceVerticalCardContainerViewDelegate;

@interface MUPlaceVerticalCardContainerView : MUStackView <UIGestureRecognizerDelegate> {
    unsigned long long _trackingSelectForRow;
    UIView *_selectedRow;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MUPlaceVerticalCardConfiguration *_configuration;
}

@property (readonly, nonatomic) BOOL shouldInvokeCopyOnLongPress;
@property (weak, nonatomic) id<MUPlaceVerticalCardContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)setRowViews:(id)a0;
- (id)_rowAt:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_indexOfRowAt:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithShowsSeparators:(BOOL)a0;

@end
