@class UIView;

@interface CrossFadeView : UIView

@property (readonly, nonatomic) UIView *startView;
@property (readonly, nonatomic) UIView *endView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) BOOL scaleSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (void)setEndView:(id)a0;
- (void)setToStartState;
- (void)animateToEndStateWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)animateToStartStateWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)haltAnimation;
- (id)initWithStartView:(id)a0 endView:(id)a1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setStartView:(id)a0;
- (void)setToEndState;
- (void)springAnimateToEndStateWithTimingFunction:(int)a0;
- (void)springAnimateToEndStateWithTimingFunction:(int)a0 completion:(id /* block */)a1;
- (void)springAnimateToStartStateWithTimingFunction:(int)a0;
- (void)springAnimateToStartStateWithTimingFunction:(int)a0 completion:(id /* block */)a1;

@end
