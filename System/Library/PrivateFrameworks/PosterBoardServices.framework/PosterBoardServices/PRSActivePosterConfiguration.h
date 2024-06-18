@class NSString, PRSPosterConfiguration;

@interface PRSActivePosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRSPosterConfiguration *lockScreenPosterConfiguration;
@property (readonly, nonatomic) PRSPosterConfiguration *homeScreenPosterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithLockScreenPosterConfiguration:(id)a0 homeScreenPosterConfiguration:(id)a1;

@end
