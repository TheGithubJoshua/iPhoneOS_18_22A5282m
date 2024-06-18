@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSSet *profileIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;

- (void)_profilesChanged:(id)a0;
- (id)init;
- (void)_beginMonitoring;
- (void)_fetchInstalledProfilesAndListen;
- (id)fetchInstalledProfileIdentifiers;
- (void).cxx_destruct;
- (BOOL)_hasRelevantProfileChanged:(id)a0;

@end
