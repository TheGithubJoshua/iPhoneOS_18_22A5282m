@class UIView, NSString, MUEdgeLayout, MKVibrantView, UIImageView, MUStackLayout, UILabel, UIColor;
@protocol MUActionRowItemViewDelegate;

@interface MUActionRowItemView : UIButton {
    UILabel *_label;
    UIImageView *_glyphImageView;
    MKVibrantView *_vibrantView;
    UIView *_backgroundView;
    MUEdgeLayout *_edgeLayout;
    MUStackLayout *_iconLabelStackLayout;
}

@property (nonatomic) BOOL touched;
@property (nonatomic) BOOL hovering;
@property (nonatomic) BOOL showSelectedState;
@property (weak, nonatomic) id<MUActionRowItemViewDelegate> delegate;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *glyphName;
@property (nonatomic) BOOL fullWidthMode;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *glyphColor;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL useVibrancy;

+ (id)labelFont;
+ (id)glyphFont;

- (void)updateImage;
- (void)setTintColor:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (id)accessibilityLabel;
- (void)setMenu:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (void)_contentSizeDidChange;
- (void)_touchBegan;
- (void)infoCardThemeChanged;
- (void)_updateMetrics;
- (void)handleHoverGesture:(id)a0;
- (void)_touchCancelled;
- (void)_applyBorderIfNeeded;
- (void)_touchEnded;
- (void)handleMenuPresentation;
- (void)handlePress;
- (id)initWithStyle:(long long)a0 useVibrancy:(BOOL)a1;
- (void)updateColor;

@end
