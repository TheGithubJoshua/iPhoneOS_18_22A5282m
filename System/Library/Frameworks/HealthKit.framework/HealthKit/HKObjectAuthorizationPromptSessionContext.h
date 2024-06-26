@class NSDictionary, HKObjectAuthorizationPromptSessionMetadata;

@interface HKObjectAuthorizationPromptSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *samplesRequiringAuthorization;
@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSamplesRequiringAuthorization:(id)a0 metadata:(id)a1;

@end
