@class NSUserDefaults;

@interface NFCALogger : NSObject {
    NSUserDefaults *_userDefault;
}

+ (id)sharedCALogger;
+ (unsigned int)getBatteryPercent;

- (void)resetCALoadStackExceptionCount;
- (id)generateDailyUUIDForCA;
- (id)init;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (void)setRestrictedMode:(BOOL)a0;
- (id)generateUUID;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (unsigned int)getDurationFrom:(unsigned long long)a0;
- (id)getCALoggerUserDefaults;
- (void).cxx_destruct;
- (unsigned long long)getTimestamp;
- (BOOL)restrictedMode;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (void)removeRestrictedMode;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (unsigned long long)getMiddlewareExceptionCount;

@end
