@interface TRSetupNetworkResponse : TRResponseMessage

@property (nonatomic) BOOL hasNetwork;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
