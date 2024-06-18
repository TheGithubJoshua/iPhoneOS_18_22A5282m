@interface TRSyncAnisetteDataResponse : TRResponseMessage

@property (nonatomic) BOOL didSucceed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
