@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage

@property (copy, nonatomic) NSData *simData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
