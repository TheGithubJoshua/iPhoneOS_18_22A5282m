@class NSString, WFAction, UILabel, WFIconHostingView, UIButton;
@protocol WFModuleTitleViewDelegate;

@interface WFModuleTitleView : UIView <WFActionEventObserver>

@property (retain, nonatomic) WFIconHostingView *iconView;
@property (readonly, weak, nonatomic) UILabel *titleLabel;
@property (readonly, weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UIButton *handoffButton;
@property (weak, nonatomic) UIButton *installButton;
@property (weak, nonatomic) id<WFModuleTitleViewDelegate> delegate;
@property (retain, nonatomic) WFAction *action;
@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL hideSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)dealloc;
- (id)accessibilityCustomActions;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (id)accessibilityValue;
- (void)updateFont;
- (void)actionNameDidChange:(id)a0;
- (BOOL)toggleFavorited;
- (void)configureWithTitle:(id)a0 subtitle:(id)a1 applicationBundleIdentifer:(id)a2;
- (void)handoffButtonPressed:(id)a0;
- (double)iconTitlePadding;
- (double)imageViewWidth;
- (BOOL)installAction;
- (void)installButtonPressed:(id)a0;
- (BOOL)isTitleLabelMultiline;
- (struct CGSize { double x0; double x1; })sizeForLabel:(id)a0 withMaxWidth:(double)a1;
- (double)titleSubtitlePadding;

@end
