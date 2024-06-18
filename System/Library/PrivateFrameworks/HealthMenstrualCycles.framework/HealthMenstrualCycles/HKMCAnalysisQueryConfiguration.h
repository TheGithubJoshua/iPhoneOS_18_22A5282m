@interface HKMCAnalysisQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL forceAnalysis;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
