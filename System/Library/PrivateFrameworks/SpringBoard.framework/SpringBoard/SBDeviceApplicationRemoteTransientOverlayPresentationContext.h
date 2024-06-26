@class SBRemoteTransientOverlayViewController, SBSRemoteAlertPresentationTarget;
@protocol BSInvalidatable;

@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject

@property (retain, nonatomic) SBRemoteTransientOverlayViewController *remoteViewController;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (retain, nonatomic, setter=setPIPStashAssertion:) id<BSInvalidatable> pipStashAssertion;

- (void).cxx_destruct;
- (void)dealloc;

@end
