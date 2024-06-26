@class NSUUID, NSDictionary, NSString, NSSet, SBSRemoteAlertPresentationTarget;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *activityContinuationIdentifier;
@property (copy, nonatomic) NSDictionary *legacyAlertOptions;
@property (nonatomic) BOOL shouldInvalidateWhenDeactivated;
@property (nonatomic, getter=isSwitcherEligible) BOOL switcherEligible;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri;
@property (nonatomic) BOOL shouldDismissPresentedBanners;
@property (nonatomic) BOOL shouldStashPictureInPictureIfNeeded;
@property (copy, nonatomic) NSSet *actions;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activationContextWithLegacyAlertOptions:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithActions:(id)a0;
- (id)initWithActions:(id)a0 presentationTarget:(id)a1;
- (id)initWithActions:(id)a0 presentationTarget:(id)a1 userInfo:(id)a2;

@end
