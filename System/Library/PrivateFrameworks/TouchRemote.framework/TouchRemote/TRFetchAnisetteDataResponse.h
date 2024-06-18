@class AKAnisetteData;

@interface TRFetchAnisetteDataResponse : TRResponseMessage

@property (copy, nonatomic) AKAnisetteData *anisetteData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
