@class NSString, HKMedicationSchedule, NSNumber;

@interface HKMedication : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, nonatomic) BOOL hasActiveReminder;
@property (readonly, weak, nonatomic) HKMedicationSchedule *schedule;
@property (readonly, copy, nonatomic) NSString *unit;
@property (readonly, copy, nonatomic) NSNumber *strength;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init:(id)a0 nickname:(id)a1 hasActiveReminder:(BOOL)a2 schedule:(id)a3 unit:(id)a4 strength:(id)a5;

@end
