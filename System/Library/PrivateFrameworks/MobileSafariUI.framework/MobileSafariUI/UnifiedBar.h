@class NSString, UITextField, NSArray;
@protocol _SFPopoverSourceInfo, _SFBarRegistrationToken, _SFNavigationBarDelegateCommon;

@interface UnifiedBar : SFUnifiedBar <SFUnifiedTabBarNavigationDelegate, _SFNavigationBarCommon, _SFBarRegistrationObserving> {
    id<_SFBarRegistrationToken> _barRegistrationToken;
}

@property (weak) id<_SFNavigationBarDelegateCommon> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } URLOutlineFrameInNavigationBarSpace;
@property (readonly, nonatomic) id<_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo;
@property (readonly, nonatomic) id<_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo;

- (id)viewForBarItem:(long long)a0;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)popoverSourceInfoForBarItem:(long long)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })urlOutlineFrameRelativeToView:(id)a0;
- (void)didCompleteBarRegistrationWithToken:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)animateLinkImage:(struct CGImage { } *)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 toBarItem:(long long)a3 afterImageDisappearsBlock:(id /* block */)a4 afterDestinationLayerBouncesBlock:(id /* block */)a5;
- (void)unifiedTabBarMenuButtonClicked:(id)a0;
- (void)metricsDidChange;
- (void)squishedBarTapped;
- (void)unifiedTabBar:(id)a0 didFinishShowingAvailabilityLabelOfType:(long long)a1;
- (void)unifiedTabBar:(id)a0 extensionButtonTapped:(id)a1 extension:(id)a2;
- (void)unifiedTabBar:(id)a0 multipleExtensionButtonTapped:(id)a1;
- (void)unifiedTabBarMediaStateMuteButtonTapped:(id)a0;
- (void)unifiedTabBarMenuButtonReceivedTouchDown:(id)a0;
- (void)unifiedTabBarMenuButtonTapped:(id)a0;
- (void)unifiedTabBarReaderButtonTapped:(id)a0;
- (void)unifiedTabBarReloadButtonTapped:(id)a0;
- (void)unifiedTabBarStopButtonTapped:(id)a0;
- (void)unifiedTabBarTranslationButtonTapped:(id)a0;
- (void)unifiedTabBarURLTapped:(id)a0 completionHandler:(id /* block */)a1;
- (void)unifiedTabBarVoiceSearchButtonTapped:(id)a0;

@end
