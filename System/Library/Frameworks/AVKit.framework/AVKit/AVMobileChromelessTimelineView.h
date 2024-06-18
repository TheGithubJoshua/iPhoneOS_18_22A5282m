@class AVMobileChromelessControlsStyleSheet, NSString, UILabel, AVMobileChromelessSlider;

@interface AVMobileChromelessTimelineView : AVView <AVShadowCasting> {
    UILabel *_leadingLabel;
    UILabel *_trailingLabel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sliderShadowPathRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _leadingTextShadowPathRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _trailingTextShadowPathRect;
    BOOL _drawsShadow;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (retain, nonatomic) NSString *leadingTimeText;
@property (retain, nonatomic) NSString *trailingTimeText;
@property (nonatomic) unsigned long long labelPosition;
@property (nonatomic) BOOL sliderEmphasized;
@property (readonly, nonatomic) AVMobileChromelessSlider *slider;
@property (nonatomic) BOOL labelsAutoadjustWithSliderEmphasis;
@property (nonatomic) BOOL drawsShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithStyleSheet:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)layoutSubviews;
- (void)_setUpShadowAppearance;

@end
