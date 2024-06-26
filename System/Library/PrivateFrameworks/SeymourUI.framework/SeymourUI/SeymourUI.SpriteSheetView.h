@class UIColor;

@interface SeymourUI.SpriteSheetView : UIView {
    void /* unknown type, empty encoding */ offsetAnimationKey;
    void /* unknown type, empty encoding */ offsets;
    void /* unknown type, empty encoding */ spriteSheet;
    void /* unknown type, empty encoding */ frameRate;
    void /* unknown type, empty encoding */ animations;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
