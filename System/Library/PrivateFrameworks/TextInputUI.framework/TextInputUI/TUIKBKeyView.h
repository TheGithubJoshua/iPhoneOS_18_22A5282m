@class NSArray, UIKBBackdropView, UIKBTree, TUIKey, UIKBRenderFactory, TUILiveKeyView;

@interface TUIKBKeyView : UIKBContainerKeyView

@property (retain, nonatomic) TUIKey *backingKey;
@property (retain, nonatomic) UIKBTree *representedKey;
@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) NSArray *contentViewConstraints;
@property (retain, nonatomic) UIKBRenderFactory *splitFactory;
@property (retain, nonatomic) UIKBRenderFactory *unsplitFactory;
@property (retain, nonatomic) TUILiveKeyView *liveContentView;
@property (nonatomic) long long rowNumber;
@property (readonly, nonatomic) long long layoutType;
@property (nonatomic) long long layoutShape;
@property (nonatomic) long long keyStyle;
@property (nonatomic) double fontSize;
@property (nonatomic) double multiplier;

- (void)updateState:(int)a0;
- (id)key;
- (void)addContentView;
- (void)updateConstraints;
- (void)prepareForTransition;
- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)requiresConstraintBasedLayout;
- (long long)contentMode;
- (void)updateStyle:(long long)a0;
- (void)clearTouches;
- (void)finishTransition;
- (BOOL)isDynamicKey;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (void)dimKeyUsingOpacities:(id)a0;
- (double)multiplierForDisplayType:(int)a0;
- (id)splitFactoryForKeyStyle:(long long)a0;
- (void)updateLabelWeight:(long long)a0;

@end
