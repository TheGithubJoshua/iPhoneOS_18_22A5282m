@class NSArray;

@interface CoreAudioKit.AUVerticalSegmentControl : UIControl {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ accessibleElements;
    void /* unknown type, empty encoding */ columnCount;
    void /* unknown type, empty encoding */ selectedSegmentIndex;
    void /* unknown type, empty encoding */ segmentHeight;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)colorAt:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 data:(id)a1;
- (void)segmentEnabledChangedWithNotification:(id)a0;
- (void)segmentSelectionChangedWithNotification:(id)a0;
- (void)setSegmentAt:(long long)a0 enabled:(BOOL)a1;

@end
