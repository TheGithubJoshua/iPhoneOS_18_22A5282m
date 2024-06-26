@class NSNumber;

@interface SBIdleTimerRequestConfiguration : ITIdleTimerConfiguration

@property (retain, nonatomic, getter=_boxed_minExpirationTimeout, setter=_setBoxed_minExpirationTimeout:) NSNumber *boxed_minExpirationTimeout;
@property (retain, nonatomic, getter=_boxed_maxExpirationTimeout, setter=_setBoxed_maxExpirationTimeout:) NSNumber *boxed_maxExpirationTimeout;
@property (readonly, nonatomic) unsigned long long idleEventMask;
@property (nonatomic) unsigned long long precedence;
@property (nonatomic) double minExpirationTimeout;
@property (readonly, nonatomic) BOOL hasMinExpirationTimeout;
@property (nonatomic) double maxExpirationTimeout;
@property (readonly, nonatomic) BOOL hasMaxExpirationTimeout;

+ (id)configurationWithIdleEventHandler:(id)a0;
+ (id)configurationWithMaximumExpirationTimeout:(double)a0;
+ (id)configurationWithMinimumExpirationTimeout:(double)a0;
+ (id)configurationWithMinimumExpirationTimeout:(double)a0 maximumExpirationTimeout:(double)a1;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)_setIdleEventHandler:(id)a0;

@end
