@protocol SKObservableViewDelegate;

@interface SKObservableView : UIView

@property (weak, nonatomic) id<SKObservableViewDelegate> delegate;

- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;

@end
