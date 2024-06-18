@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject

@property (readonly, nonatomic) unsigned long long status;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStatus:(unsigned long long)a0;

@end
