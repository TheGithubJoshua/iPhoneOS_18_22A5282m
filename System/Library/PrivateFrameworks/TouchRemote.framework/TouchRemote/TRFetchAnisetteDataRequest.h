@interface TRFetchAnisetteDataRequest : TRRequestMessage

@property (nonatomic) BOOL shouldProvision;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
