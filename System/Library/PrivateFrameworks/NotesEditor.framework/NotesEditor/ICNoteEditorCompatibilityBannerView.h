@class ICLearnMoreTextView;

@interface ICNoteEditorCompatibilityBannerView : UIView

@property (retain, nonatomic) ICLearnMoreTextView *learnMoreTextView;
@property (nonatomic) double availableWidth;
@property (readonly, nonatomic) double preferredHeight;

+ (void)checkShouldShowCompatibilityBannerViewForNote:(id)a0 parentViewController:(id)a1 completion:(id /* block */)a2;
+ (id)compatibilityAttributedString;

- (void)contentSizeCategoryDidChange;
- (void)updateConstraints;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (id)accessibilityContainer;
- (void)accessibilityElementDidBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentViewController:(id)a1;

@end
