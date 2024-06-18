@interface SSADEventReporter : NSObject

+ (void)reportBadL3Models;
+ (void)reportBadL2Models;
+ (void)reportModelLoadingError;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportKey:(id)a0;

@end
