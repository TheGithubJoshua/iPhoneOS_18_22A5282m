@class UIFont, ICQUpgradeFlowManager, NSArray, _ICQTextView, NSString, ICQOffer, ICQUpgradeFlowOptions, UIColor;
@protocol ICQBannerViewDelegate;

@interface ICQBannerView : UIView <UITextViewDelegate, ICQUpgradeFlowManagerDelegate> {
    ICQOffer *_offer;
}

@property (readonly, nonatomic) _ICQTextView *textView;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) ICQUpgradeFlowManager *localFlowManager;
@property (retain, nonatomic) ICQOffer *offer;
@property (weak, nonatomic) id<ICQBannerViewDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *detailMessageFont;
@property (retain, nonatomic) UIFont *linkMessageFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *detailMessageColor;
@property (retain, nonatomic) UIColor *linkMessageColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } textMargins;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textLineSpacing;
@property (copy, nonatomic) UIFont *linkTextFont;
@property (copy, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replaceWordsIn:(id)a0 with:(id)a1;
+ (BOOL)shouldShowForOffer:(id)a0;

- (id)titleAttributes;
- (long long)semanticContentAttribute;
- (void)updateConstraints;
- (long long)userInterfaceLayoutDirection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_registerForDarwinNotifications;
- (void).cxx_destruct;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)attributedText;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)textViewDidChangeSelection:(id)a0;
- (id)initWithOffer:(id)a0;
- (void)updateBannerView;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)_applyTextParagraphAttributes;
- (void)_applyTextStorageAttributes;
- (long long)_delegateActionForAction:(long long)a0;
- (id)_getOffer;
- (void)_handlePushReceivedDarwinNotification;
- (BOOL)_launchFlowManagerWithLink:(id)a0;
- (BOOL)_legacyDelegateMethodHandlesAction:(long long)a0;
- (BOOL)_performLink:(id)a0;
- (void)_updateBannerViewConstraints;
- (id)detailAttributedText;
- (id)detailMessageAttributes;
- (id)linkAttributes;
- (id)messageAttributes;
- (id)textParagraphStyle;
- (id)textParagraphStyleAttributes;

@end