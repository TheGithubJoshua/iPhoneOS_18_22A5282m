@class SBFRemoteBasebandLoggingManager, NSString, SBLockScreenDefaults, MCProfileConnection, CSStatusTextView;
@protocol CSStatusTextViewControllerDelegate;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver> {
    CSStatusTextView *_view;
    MCProfileConnection *_profileConnection;
    SBFRemoteBasebandLoggingManager *_basebandLoggingManager;
    SBLockScreenDefaults *_lockScreenDefaults;
}

@property (weak, nonatomic) id<CSStatusTextViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *overrideFooterText;

- (id)init;
- (id)_legalString;
- (void)loadView;
- (void)_updateTextForLegal;
- (void)viewDidDisappear:(BOOL)a0;
- (void)remoteBasebandLogCollectionStateDidChange:(BOOL)a0;
- (void)_updateTextForProvisionalEnrollment;
- (id)statusTextView;
- (id)_legalContact;
- (void)_profileStateChangedNotification:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)_updateTextForSupervision;
- (BOOL)_isSecurityResearchDevice;
- (void)_updateTextForDeviceInformation;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateTextForProfiles;
- (void)_updateText;

@end
