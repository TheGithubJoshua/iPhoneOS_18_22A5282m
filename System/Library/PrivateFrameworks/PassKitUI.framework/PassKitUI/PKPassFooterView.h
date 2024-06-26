@class PKPassFooterContentView, NSString, PKPassFooterViewConfiguration, NSObject, PKPaymentSessionHandle;
@protocol PKPassFooterViewDelegate, OS_dispatch_source, OS_dispatch_group;

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, STSSessionDelegate> {
    PKPassFooterContentView *_contentView;
    PKPassFooterContentView *_fadingContentView;
    BOOL _fadingContentViewNeedsDidHide;
    NSObject<OS_dispatch_source> *_sessionStartTimer;
    BOOL _isBackgrounded;
    BOOL _isAssistantActive;
    BOOL _acquiringSession;
    unsigned long long _sessionToken;
    NSObject<OS_dispatch_group> *_sessionDelayGroup;
    PKPaymentSessionHandle *_sessionHandle;
    BOOL _invalidated;
    unsigned char _visibility;
    unsigned char _contentViewVisibility;
}

@property (readonly, nonatomic) PKPassFooterViewConfiguration *configuration;
@property (readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
@property (readonly, nonatomic, getter=isPhysicalButtonRequired) BOOL physicalButtonRequired;
@property (readonly, nonatomic) long long coachingState;
@property (weak, nonatomic) id<PKPassFooterViewDelegate> delegate;
@property (readonly, nonatomic) BOOL requestPileSuppression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_endSession;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (BOOL)isPassFooterContentViewInGroup:(id)a0;
- (id)_messageContentViewFromMessage:(id)a0;
- (long long)_acquireContactlessInterfaceSessionErrorActionForError:(id)a0;
- (void)_acquireContactlessInterfaceSessionWithSessionToken:(unsigned long long)a0 shouldForceSessionAcquisition:(BOOL)a1 handler:(id /* block */)a2;
- (void)_advanceContentViewVisibilityToState:(unsigned char)a0 animated:(BOOL)a1;
- (void)_advanceVisibilityToState:(unsigned char)a0 animated:(BOOL)a1;
- (BOOL)_canApplyContentViewForPersonalizedApplication;
- (BOOL)_canApplyContentViewForValueAddedService;
- (void)_commitContentViewAnimated:(BOOL)a0;
- (void)_configureForPersonalizedPaymentApplicationWithContext:(id)a0;
- (void)_configureForValueAddedServiceWithContext:(id)a0;
- (void)_configureWithConfiguration:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (void)_endSessionStartTimer;
- (void)_lostModeButtonTapped;
- (id)_messageForPaymentApplicationState;
- (id)_messageForPeerPaymentLockedByOwner;
- (id)_messageForPeerPaymentZeroBalance;
- (id)_messageForRestrictedState;
- (id)_messageForUnavailableState;
- (void)_setCoachingState:(long long)a0;
- (void)_setContentView:(id)a0 animated:(BOOL)a1;
- (void)_setPhysicalButtonRequired:(BOOL)a0;
- (void)_startContactlessInterfaceSessionWithContext:(id)a0 shouldForceSessionAcquisition:(BOOL)a1 sessionAvailable:(id /* block */)a2 sessionUnavailable:(id /* block */)a3;
- (void)_updateForForegroundActivePresentationIfNecessaryAnimated:(BOOL)a0;
- (void)_updateForNonForegroundActivePresentationAnimated:(BOOL)a0;
- (void)configureWithConfiguration:(id)a0 context:(id)a1 options:(struct { unsigned char x0 : 1; unsigned char x1 : 1; })a2;
- (void)didBecomeHiddenAnimated:(BOOL)a0;
- (void)didBecomeVisibleAnimated:(BOOL)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateDeactivationReasons:(unsigned int)a1;
- (BOOL)isViewCurrentContentView:(id)a0;
- (void)passFooterContentView:(id)a0 didAuthorizeAndRetrieveDecryptedBarcode:(id)a1;
- (void)passFooterContentViewDidAuthenticate:(id)a0;
- (void)passFooterContentViewDidChangeCoachingState:(id)a0;
- (void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)a0;
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(id)a0;
- (void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)a0;
- (void)passFooterContentViewDidTransact:(id)a0;
- (void)passFooterContentViewRequestsSessionSuppression:(id)a0;
- (void)showFullScreenBarcode;
- (unsigned long long)suppressedContentForContentView:(id)a0;
- (void)willBecomeHiddenAnimated:(BOOL)a0;
- (void)willBecomeVisibleAnimated:(BOOL)a0;

@end
