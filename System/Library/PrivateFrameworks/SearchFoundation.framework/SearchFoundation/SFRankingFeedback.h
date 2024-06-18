@class NSArray, NSString;

@interface SFRankingFeedback : SFFeedback <NSCopying>

@property (nonatomic) double blendingDuration;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *l2ModelVersion;
@property (copy, nonatomic) NSString *l3ModelVersion;
@property (copy, nonatomic) NSString *l2ShadowModelVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSections:(id)a0 blendingDuration:(double)a1;

@end