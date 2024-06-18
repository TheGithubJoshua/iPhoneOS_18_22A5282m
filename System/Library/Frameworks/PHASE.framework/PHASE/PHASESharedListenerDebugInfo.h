@interface PHASESharedListenerDebugInfo : PHASESharedEntityDebugInfo

@property (readonly, nonatomic) float gain;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setGain:(float)a0;

@end
