@class NSString, SSBiometricAuthenticationContext;

@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {
    BOOL _shouldProcessTouchIDDialogs;
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;
}

@property BOOL shouldPostFooterSectionChanged;
@property BOOL shouldProcessAccount;
@property BOOL shouldProcessAuthenticationDialogs;
@property BOOL shouldProcessDialogs;
@property BOOL shouldProcessDialogsOutsideDaemon;
@property BOOL shouldProcessProtocol;
@property (readonly) BOOL shouldProcessTouchIDDialogs;
@property BOOL shouldTriggerDownloads;
@property (copy) NSString *presentingSceneIdentifier;

- (id)init;
- (BOOL)_processFailureTypeFromDictionary:(id)a0 error:(id *)a1;
- (void)_refreshSubscriptionStatus;
- (void)_checkDownloadQueues;
- (BOOL)processDialogFromDictionary:(id)a0 error:(id *)a1;
- (void)_performActionsForResponse:(id)a0;
- (void)_presentDialog:(id)a0;
- (BOOL)_shouldFailWithTokenErrorForDialog:(id)a0 dictionary:(id)a1 error:(id *)a2;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (id)_touchIDDialogForResponse:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAttemptPasswordPaymentSheetForError:(id)a0;
- (BOOL)processDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_checkBiometricFailureForResponse:(id)a0;
- (void)_checkInAppPurchaseQueueForAction:(id)a0;
- (void)_selectFooterSection:(id)a0;
- (id)_metricsDictionaryForResponse:(id)a0;

@end
