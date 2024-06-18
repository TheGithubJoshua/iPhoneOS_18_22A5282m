@protocol RTManagedConfigurationObserver;

@interface RTManagedConfiguration : NSObject

@property (weak, nonatomic) id<RTManagedConfigurationObserver> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (BOOL)isFindMyCarAllowed;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (BOOL)isHealthDataSubmissionAllowed;
- (void).cxx_destruct;

@end
