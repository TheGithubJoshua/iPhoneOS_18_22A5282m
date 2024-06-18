@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage

@property (nonatomic) BOOL needsNetwork;
@property (copy, nonatomic) NSSet *unauthenticatedAccountServices;
@property (nonatomic) BOOL useAIDA;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_stringFromAccountServices:(id)a0;

@end
