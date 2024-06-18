@class UIImageView, NSLayoutConstraint, UIView;

@interface NCSymbolButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_symbolImageView;
    NSLayoutConstraint *_backgroundHeightConstraint;
    NSLayoutConstraint *_backgroundWidthConstraint;
}

+ (id)button;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)clearSymbol;
- (void)setSymbolNamed:(id)a0 color:(id)a1 pointSize:(double)a2 backgroundDiameter:(double)a3;

@end
