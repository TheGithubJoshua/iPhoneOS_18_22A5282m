@class NSString, INIntent;

@interface CHSIntentRecommendation : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithIntent:(id)a0 localizedDescription:(id)a1;

@end
