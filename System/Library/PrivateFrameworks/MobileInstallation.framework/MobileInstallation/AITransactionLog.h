@class NSObject;
@protocol OS_os_log;

@interface AITransactionLog : NSObject {
    NSObject<OS_os_log> *_log;
}

+ (void)logStep:(unsigned long long)a0 byParty:(unsigned long long)a1 phase:(unsigned long long)a2 success:(BOOL)a3 forBundleID:(id)a4 description:(id)a5;
+ (id)_defaultLog;
+ (void)initializeWithLog:(id)a0;
+ (void)logScenario:(id)a0 step:(unsigned long long)a1 success:(BOOL)a2 forBundleID:(id)a3 description:(id)a4;
+ (void)logStep:(unsigned long long)a0 byParty:(unsigned long long)a1 phase:(unsigned long long)a2 success:(BOOL)a3 forBundleID:(id)a4 persona:(id)a5 description:(id)a6;

- (void).cxx_destruct;
- (void)_logScenario:(id)a0 step:(unsigned long long)a1 success:(BOOL)a2 forBundleID:(id)a3 description:(id)a4;
- (id)_initWithLog:(id)a0;

@end
