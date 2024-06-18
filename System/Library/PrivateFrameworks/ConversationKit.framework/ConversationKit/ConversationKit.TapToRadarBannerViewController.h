@class NSString, UIViewController;

@interface ConversationKit.TapToRadarBannerViewController : UIViewController <BNPresentable> {
    void /* unknown type, empty encoding */ requestID;
    void /* unknown type, empty encoding */ pillView;
    void /* unknown type, empty encoding */ pillLeadingImageView;
    void /* unknown type, empty encoding */ pillTrailingImageView;
    void /* unknown type, empty encoding */ pillViewSubtitle;
    void /* unknown type, empty encoding */ pillViewTitle;
    void /* unknown type, empty encoding */ bannerSource;
    void /* unknown type, empty encoding */ isBannerPresent;
    void /* unknown type, empty encoding */ groupUUIDString;
    void /* unknown type, empty encoding */ addressList;
}

@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) NSString *requesterIdentifier;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;

- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)viewDidLoad;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)handleTap:(id)a0;

@end
