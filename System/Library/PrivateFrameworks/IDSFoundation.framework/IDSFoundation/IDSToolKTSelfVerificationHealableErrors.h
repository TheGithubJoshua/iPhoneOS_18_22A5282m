@class NSArray, NSDictionary;

@interface IDSToolKTSelfVerificationHealableErrors : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *accountHealableErrors;
@property (retain) NSDictionary *deviceIdToHealableErrors;
@property unsigned long long healableState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
