@class NSString, LAClient, NSData, NSHashTable, NSNumber;
@protocol LAUIDelegate, LAPrearmContextXPC;

@interface LAContext : NSObject <NSSecureCoding> {
    LAClient *_client;
    id<LAPrearmContextXPC> _prearmContext;
}

@property (class, readonly) unsigned int newCommandId;
@property (class, readonly) unsigned int newInstanceId;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *externalizedContext;
@property (retain, nonatomic) NSData *evaluatedPolicyDomainState;
@property (nonatomic) long long biometryType;
@property (retain, nonatomic) NSNumber *touchIDAuthenticationRetryLimit;
@property (weak, nonatomic) id<LAUIDelegate> uiDelegate;
@property (readonly, nonatomic) unsigned int instanceId;
@property (retain, nonatomic) NSHashTable *observers;
@property (copy, nonatomic) NSString *localizedFallbackTitle;
@property (retain, nonatomic) NSNumber *maxBiometryFailures;
@property (copy, nonatomic) NSString *localizedCancelTitle;
@property (nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property (copy, nonatomic) NSString *localizedReason;
@property (nonatomic) BOOL interactionNotAllowed;

+ (void)notifyEvent:(long long)a0 completionHandler:(id /* block */)a1;
+ (id)_optionsForEvent:(long long)a0;
+ (void)notifyEvent:(long long)a0;

- (id)optionPresentingEmbeddedUI;
- (id)initWithCoder:(id)a0;
- (void)setOptionFallbackVisible:(id)a0;
- (BOOL)canEvaluatePolicy:(long long)a0 error:(id *)a1;
- (void)_evaluatePolicy:(long long)a0 options:(id)a1 synchronous:(BOOL)a2 reply:(id /* block */)a3;
- (id)evaluateAccessControl:(struct __SecAccessControl { } *)a0 operation:(long long)a1 options:(id)a2 error:(id *)a3;
- (id)init;
- (id)optionCallerAuditToken;
- (void)setOptionSoftwareUpdateStashMode:(id)a0;
- (id)initWithExternalizedContext:(id)a0 userSession:(unsigned int *)a1;
- (void)prearmTouchIDWithReply:(id /* block */)a0;
- (id)optionPINCharset;
- (id)optionTintColor;
- (void)_evaluateAccessControl:(struct __SecAccessControl { } *)a0 operation:(id)a1 options:(id)a2 log:(long long)a3 cid:(unsigned int)a4 synchronous:(BOOL)a5 reply:(id /* block */)a6;
- (id)optionReturnBiometryDatabaseHash;
- (void)setOptionReturnBiometryDatabaseHash:(id)a0;
- (void)resetProcessedEvent:(long long)a0 reply:(id /* block */)a1;
- (id)optionSecurePassphrase;
- (void)setOptionPasswordAuthenticationReason:(id)a0;
- (void)setOptionUseModernUI:(id)a0;
- (void)checkCanEvaluateRight:(id)a0 reply:(id /* block */)a1;
- (id)optionNoFailureUI;
- (void)setOptionFingerMustBeOff:(id)a0;
- (id)optionFallbackVisible;
- (id)optionTimeout;
- (void)credentialOfType:(long long)a0 reply:(id /* block */)a1;
- (void)evaluateRight:(id)a0 localizedReason:(id)a1 reply:(id /* block */)a2;
- (void)_notifyObserversAfterInvalidation;
- (id)optionSharedValidity;
- (void)setOptions:(id)a0 forInternalOperation:(long long)a1 reply:(id /* block */)a2;
- (id)initWithUIDelegate:(id)a0;
- (void)setOptionPresentingEmbeddedUI:(id)a0;
- (id)optionFingerMustBeOff;
- (void)_setServerPropertyForOption:(long long)a0 value:(id)a1 log:(long long)a2;
- (void)setOptionPINMinLength:(id)a0;
- (void)authorizeOperation:(long long)a0 protectedBy:(struct __SecAccessControl { } *)a1 options:(id)a2 reply:(id /* block */)a3;
- (BOOL)_useModernAuthorizationSheet;
- (void)setOptionFaceDetectLength:(id)a0;
- (void)setOptionCallerAuditToken:(id)a0;
- (id)optionPINMaxLength;
- (id)optionPINTitle;
- (id)optionCheckApplePayEnabled;
- (id)optionPINLabel;
- (id)optionPhysicalButtonTitle;
- (id)optionPINLength;
- (void)setOptionSoftwareUpdateManifest:(id)a0;
- (unsigned long long)hash;
- (void)setOptionAuthenticationTitle:(id)a0;
- (id)optionBodyText;
- (id)uuid;
- (BOOL)setCredential:(id)a0 type:(long long)a1;
- (id)optionTransitionStyle;
- (void)pauseProcessedEvent:(long long)a0 pause:(BOOL)a1 reply:(id /* block */)a2;
- (id)optionEventProcessing;
- (void)setOptionBiometryLockoutRecovery:(id)a0;
- (void)setOptionTintColor:(id)a0;
- (void)evaluatePolicy:(long long)a0 localizedReason:(id)a1 reply:(id /* block */)a2;
- (id)_serverPropertyValueForOption:(long long)a0 log:(long long)a1;
- (void)setCredential:(id)a0 type:(long long)a1 reply:(id /* block */)a2;
- (void)authMethodWithReply:(id /* block */)a0;
- (void)setCredential:(id)a0 forProcessedEvent:(long long)a1 credentialType:(long long)a2 reply:(id /* block */)a3;
- (void)failProcessedEvent:(long long)a0 failureError:(id)a1 reply:(id /* block */)a2;
- (id)optionSkipDoublePress;
- (id)optionPINMinLength;
- (void)_setCredential:(id)a0 type:(long long)a1 log:(long long)a2 cid:(unsigned int)a3 reply:(id /* block */)a4;
- (void)setOptionSharedValidity:(id)a0;
- (id)optionPasscodeTitle;
- (void)evaluatePolicy:(long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)setOptionCallerIconBundlePath:(id)a0;
- (void)setOptionCallerName:(id)a0;
- (void)evaluateAccessControl:(struct __SecAccessControl { } *)a0 operation:(long long)a1 localizedReason:(id)a2 reply:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (void)setOptionPresentationStyle:(id)a0;
- (id)optionMaxBiometryFailures;
- (void)optionsForInternalOperation:(long long)a0 reply:(id /* block */)a1;
- (void)setOptionPasscodeScreenStyle:(id)a0;
- (id)optionPasswordAuthenticationReason;
- (void)invalidate;
- (void)setOptionTransitionStyle:(id)a0;
- (void).cxx_destruct;
- (void)setOptionPINCharset:(id)a0;
- (id)optionPresentationContext;
- (void)retryProcessedEvent:(long long)a0 reply:(id /* block */)a1;
- (void)_setServerPropertyForOption:(long long)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)optionFaceDetectLength;
- (id)optionCallerName;
- (id)description;
- (void)setOptionPasscodeTitle:(id)a0;
- (id)_evaluatePolicy:(long long)a0 options:(id)a1 log:(long long)a2 cid:(unsigned int)a3 error:(id *)a4;
- (id)optionSoftwareUpdateStashMode;
- (void)setOptionAuthenticationReason:(id)a0;
- (void)_evaluatePolicy:(long long)a0 options:(id)a1 log:(long long)a2 cid:(unsigned int)a3 synchronous:(BOOL)a4 reply:(id /* block */)a5;
- (id)optionBiometryLockoutRecovery;
- (id)optionCallerIconBundlePath;
- (void)setOptionNotInteractive:(id)a0;
- (id)credentialOfType:(long long)a0 error:(id *)a1;
- (void)setOptionSecurePassphrase:(id)a0;
- (void)setOptionCallerPID:(id)a0;
- (id)_evaluationMechanismsFromReturnedError:(id)a0 error:(id *)a1;
- (void)setOptionMatchForUnlock:(id)a0;
- (void)setOptionPINTitle:(id)a0;
- (void)setShowingCoachingHint:(BOOL)a0 event:(long long)a1 reply:(id /* block */)a2;
- (id)optionCallerPID;
- (void)setOptionPINLength:(id)a0;
- (void)evaluateAccessControl:(struct __SecAccessControl { } *)a0 operation:(long long)a1 options:(id)a2 reply:(id /* block */)a3;
- (id)optionUseModernUI;
- (void)setOptionPINLabel:(id)a0;
- (id)optionCancelVisible;
- (id)optionPresentationStyle;
- (id)initWithExternalizedContext:(id)a0 uiDelegate:(id)a1;
- (void)setOptionCheckApplePayEnabled:(id)a0;
- (void)setOptionPresentationContext:(id)a0;
- (void)addContextObserver:(id)a0;
- (void)setOptionUserFallback:(id)a0;
- (id)optionPINFirst;
- (id)optionNotInteractive;
- (id)evaluatePolicy:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)_serverPropertyValueForOption:(long long)a0;
- (void)setOptionCancelVisible:(id)a0;
- (id)optionUserCancel;
- (id)optionTKAuthOperationError;
- (void)evaluateAccessControl:(struct __SecAccessControl { } *)a0 aksOperation:(void *)a1 options:(id)a2 reply:(id /* block */)a3;
- (void)setOptionEventProcessing:(id)a0;
- (id)optionUserFallback;
- (id)_hashWithBundleIdentifier:(id)a0;
- (void)dealloc;
- (id)evaluateAccessControl:(struct __SecAccessControl { } *)a0 aksOperation:(void *)a1 options:(id)a2 error:(id *)a3;
- (void)setOptionPINFirst:(id)a0;
- (id)optionPasscodeScreenStyle;
- (void)removeContextObserver:(id)a0;
- (id)optionPasscodeScreenBlur;
- (void)setOptionBodyText:(id)a0;
- (BOOL)_setCredential:(id)a0 type:(long long)a1 log:(long long)a2 cid:(unsigned int)a3 error:(id *)a4;
- (id)optionAuthenticationTitle;
- (BOOL)checkContextValidWithError:(id *)a0;
- (void)setOptionUserCancel:(id)a0;
- (id)initWithExternalizedContext:(id)a0;
- (id)_publicErrorFromInternalError:(id)a0 options:(id)a1;
- (void)setOptionPasscodeScreenBlur:(id)a0;
- (BOOL)verifyFileVaultUser:(id)a0 volumeUuid:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)evaluationMechanismsForPolicy:(long long)a0 error:(id *)a1;
- (void)bootstrapServiceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)setOptionTKAuthOperationError:(id)a0;
- (void)resetWithReply:(id /* block */)a0;
- (void)setOptionPINMaxLength:(id)a0;
- (void)setOptionNoFailureUI:(id)a0;
- (id)optionMatchForUnlock;
- (void)setOptionMaxBiometryFailures:(id)a0;
- (id)optionSoftwareUpdateManifest;
- (void)setOptionSkipDoublePress:(id)a0;
- (BOOL)isCredentialSet:(long long)a0;
- (void)setOptionTimeout:(id)a0;
- (id)evaluationMechanismsForAccessControl:(struct __SecAccessControl { } *)a0 operation:(long long)a1 error:(id *)a2;
- (void)setOptionPhysicalButtonTitle:(id)a0;
- (BOOL)setCredential:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)optionAuthenticationReason;

@end