@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer

@property (readonly, nonatomic) long long tapCategory;
@property (nonatomic) BOOL failWhenTappingInBars;

- (void)_setDelegate:(id)a0;
- (void)setDelegate:(id)a0;
- (id)description;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (long long)_categoryForTapLocation:(struct CGPoint { double x0; double x1; })a0;

@end