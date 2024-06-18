@class _WKUserInitiatedAction, NSTimer, NSDate;

@interface WBSURLSpoofingMitigator : NSObject {
    NSDate *_dateOfLastSuspiciousProvisionalNavigationInterruption;
    unsigned long long _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    BOOL _hasCommittedChromeInitiatedLoad;
}

@property (readonly, nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) long long navigationSource;

+ (BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;

- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)a0;
- (void)didCommitNavigation;
- (void)willStartNewBrowserChromeInitiatedNavigation;
- (void)didFailProvisionalNavigationWithError:(id)a0;
- (void).cxx_destruct;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)a0;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;

@end
