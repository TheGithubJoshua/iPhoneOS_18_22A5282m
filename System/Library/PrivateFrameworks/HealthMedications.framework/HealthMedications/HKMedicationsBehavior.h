@interface HKMedicationsBehavior : NSObject

@property (nonatomic) BOOL medicationsFutureMigrationsEnabled;

+ (void)setSharedBehavior:(id)a0;
+ (BOOL)_medicationFutureMigrationsEnabled;
+ (id)sharedBehavior;
+ (void)resetSharedBehavior;

- (id)init;

@end
