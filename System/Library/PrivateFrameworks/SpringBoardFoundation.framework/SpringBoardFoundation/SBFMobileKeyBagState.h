@class NSString, NSDictionary;

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSDictionary *_state;
}

@property (readonly, nonatomic) long long lockState;
@property (readonly, nonatomic) double backOffTime;
@property (readonly, nonatomic) unsigned long long failedAttemptCount;
@property (readonly, nonatomic) BOOL permanentlyBlocked;
@property (readonly, nonatomic) BOOL shouldWipe;
@property (readonly, nonatomic) BOOL recoveryEnabled;
@property (readonly, nonatomic) BOOL recoveryRequired;
@property (readonly, nonatomic) BOOL recoveryPossible;
@property (readonly, nonatomic) long long escrowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEffectivelyLocked;
- (id)publicDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMKBLockStateInfo:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
