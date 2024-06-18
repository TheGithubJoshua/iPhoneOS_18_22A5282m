@class UIMenu, NSString, NSHashTable, UIPointerInteraction, UIButton;
@protocol PKPaletteButtonDelegate;

@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<PKPaletteButtonDelegate> delegate;
@property (retain, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL useCompactLayout;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (nonatomic) double scalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plusButton;
+ (id)textButton;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)undoButton;
+ (id)ellipsisButton;
+ (id)returnKeyButton;
+ (id)UCBButton;
+ (id)emojiKeyboardButton;
+ (id)keyboardButton;
+ (id)redoButton;
+ (id)shapeButton;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)initWithImage:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_backgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_updateUI;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_buttonTransform;
- (void)_notifyIntrinsicContentSizeDidChange;
- (id)_tintColorForCurrentState;
- (BOOL)_wantsCustomBackgroundColor;
- (BOOL)_wantsCustomTintColor;
- (void)addIntrinsicContentSizeObserver:(id)a0;
- (void)removeIntrinsicContentSizeObserver:(id)a0;

@end
