@class HKConceptSelection;

@interface HKConceptQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKConceptSelection *selection;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
