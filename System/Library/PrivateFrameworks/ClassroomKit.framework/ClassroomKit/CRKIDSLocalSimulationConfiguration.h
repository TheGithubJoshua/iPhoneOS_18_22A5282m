@interface CRKIDSLocalSimulationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldForceAccountsInactive;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
