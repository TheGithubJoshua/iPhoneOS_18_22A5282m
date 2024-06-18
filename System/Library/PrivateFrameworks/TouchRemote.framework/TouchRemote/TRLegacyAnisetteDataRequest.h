@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage

@property (copy, nonatomic) NSString *dsid;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
