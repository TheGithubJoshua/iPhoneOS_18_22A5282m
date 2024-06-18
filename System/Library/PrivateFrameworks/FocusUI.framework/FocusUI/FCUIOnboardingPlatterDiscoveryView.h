@class NSString, FCUIOnboardingStackedNotificationView;
@protocol FCUIOnboardingPlatterDiscoveryViewDelegate;

@interface FCUIOnboardingPlatterDiscoveryView : PLPlatterDiscoveryView <FocusUI.QuickStartViewControllerDelegate> {
    FCUIOnboardingStackedNotificationView *_notificationPlatterView1;
    FCUIOnboardingStackedNotificationView *_notificationPlatterView2;
}

@property (weak, nonatomic) id<FCUIOnboardingPlatterDiscoveryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)onboardingPlatterDiscoveryViewForMode:(id)a0;
+ (id)_bodyStringForDNDModeSemanticType:(long long)a0;

- (id)initWithMode:(id)a0;
- (void)_configureGraphicViewIfNecessary;
- (void)_layoutGraphicView;
- (id /* block */)presentQuickStartForModeIdentifier:(id)a0;
- (void)requestDismissal:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
