@class NSDictionary;

@interface IDSKTRegistrationStatusProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *ktApplicationToKTRegStatus;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)statusForKTApplication:(id)a0;

@end
