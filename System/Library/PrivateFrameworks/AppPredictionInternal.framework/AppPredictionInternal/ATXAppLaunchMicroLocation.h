@class _PASLock, NSString, _ATXDuetHelper;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}

- (void)train;
- (id)initWithDuetHelper:(id)a0 directory:(id)a1 forTesting:(BOOL)a2;
- (id)init;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (BOOL)_loadCorrelationMatrices;
- (id)_getHistoricalData;
- (id)_getActionKeyCorrelationMatrix;
- (void)tryLoadCorrelationMatricesImmediately;
- (void).cxx_destruct;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)_getAppLaunchCorrelationMatrix;
- (void)_receivedNotificationOfNewMicroLocation;
- (void)_subscribeToDKInsertionEvents;

@end
