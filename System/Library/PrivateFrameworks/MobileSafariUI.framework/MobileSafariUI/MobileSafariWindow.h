@protocol MobileSafariWindowDelegate;

@interface MobileSafariWindow : UIWindow {
    BOOL _safariWindowDelegateRespondsToStatusBarChangedFromHeightToHeight;
    BOOL _safariWindowDelegateRespondsToDidEndAllTouchesAtPoint;
    BOOL _shouldBecomeKeyWindowAfterSnapshot;
}

@property (weak, nonatomic) id<MobileSafariWindowDelegate> safariWindowDelegate;

- (id)initWithWindowScene:(id)a0;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void)sendEvent:(id)a0;
- (void)_willBeginSystemSnapshot;
- (void).cxx_destruct;
- (void)_didCompleteSystemSnapshot;

@end
