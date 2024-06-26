@class UIImageView, UIFont, UILabel, OBPrivacyLinkController, _PKUIKVisibilityBackdropView, UIButton, UIView, PKPaymentSetupDockView, NSString, UIScrollView, UIColor, NSAttributedString, UITextView, UIActivityIndicatorView, LAUICheckmarkLayer, UIImage;
@protocol PKExplanationViewDelegate;

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate> {
    long long _context;
    BOOL _privacyFooterShouldPin;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    _PKUIKVisibilityBackdropView *_backdropView;
    double _backdropWeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastSeenValidBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _titleLabelFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _titleLabelLastLineBounds;
    double _titleLabelLastLineDescent;
    UIImageView *_bodyImageView;
    UIButton *_bodyButton;
    UITextView *_secondaryBodyTextView;
    UIView *_topBackgroundView;
}

@property (retain, nonatomic) UIImageView *logoImageView;
@property (nonatomic) struct CGSize { double width; double height; } logoImageViewTargetSize;
@property (retain, nonatomic) UITextView *bodyTextView;
@property (nonatomic) double maxImageHeight;
@property (weak, nonatomic) id<PKExplanationViewDelegate> delegate;
@property (nonatomic) BOOL showPrivacyView;
@property (nonatomic) BOOL forceShowSetupLaterButton;
@property (nonatomic) double topMargin;
@property (nonatomic) double titleHyphenationFactor;
@property (nonatomic) double topLogoPadding;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL imageIgnoresTopSafeArea;
@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *heroView;
@property (copy, nonatomic) id /* block */ heroViewSizeThatFitsOverride;
@property (nonatomic) unsigned long long heroViewContentMode;
@property (nonatomic) BOOL heroViewPrefersSizeTransform;
@property (retain, nonatomic) UIColor *topBackgroundColor;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL hideTitleText;
@property (nonatomic) long long titleTextAlignment;
@property (nonatomic) BOOL titleTextAdjustsFontSizeToWidth;
@property (nonatomic) int titleTextNumberOfLines;
@property (nonatomic) BOOL titleShouldReserveSpaceForAccessories;
@property (retain, nonatomic) UIImage *bodyImage;
@property (readonly, nonatomic) UIImageView *bodyImageView;
@property (readonly, nonatomic) UIFont *bodyTextFont;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSAttributedString *attributedBodyText;
@property (copy, nonatomic) NSAttributedString *attributedSecondaryBodyText;
@property (copy, nonatomic) NSString *bodyButtonText;
@property (nonatomic) long long bodyButtonNumberOfLines;
@property (retain, nonatomic) UIView *bodyView;
@property (copy, nonatomic) id /* block */ bodyViewThatFitsOverride;
@property (nonatomic) unsigned long long bodyViewContentMode;
@property (nonatomic) BOOL bodyViewPrefersSizeTransform;
@property (nonatomic) BOOL reverseBodyViewAndBodyButtonOrder;
@property (nonatomic) double bodyViewPadding;
@property (nonatomic) long long bodyTextAlignment;
@property (nonatomic) unsigned long long bodyDataDetectorTypes;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContext:(long long)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)scrollViewDidScroll:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_updateTitleLabel;
- (void)_createSubviews;
- (void)_updateCachedTitleLabelLastLine;
- (void)_bodyButtonTapped;
- (void)_calculateBlur;
- (void)_continue;
- (id)_createBodyTextView;
- (BOOL)_isBuddyiPad;
- (void)_setupLater;
- (BOOL)_showTitleLogoImageView;
- (void)_updateCheckmarkColor;
- (id)initWithContext:(long long)a0 delegate:(id)a1;
- (void)pk_applyAppearance:(id)a0;
- (void)setTitleTextAdjustsFontSizeToFitWidth:(BOOL)a0;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
