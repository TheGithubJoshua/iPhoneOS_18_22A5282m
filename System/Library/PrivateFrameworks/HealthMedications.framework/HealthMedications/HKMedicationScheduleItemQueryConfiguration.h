@class NSString, NSArray, NSDate;

@interface HKMedicationScheduleItemQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *sortDescriptors;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
