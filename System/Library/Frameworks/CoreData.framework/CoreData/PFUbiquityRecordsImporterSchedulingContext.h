@class NSMutableSet, NSMutableDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet *_scheduledLogLocations;
    NSMutableSet *_pendingLogLocations;
    NSMutableSet *_failedLogLocations;
    NSMutableSet *_ignoredLogLocations;
    NSMutableDictionary *_logLocationsToEncounteredErrors;
    int _lock;
}

- (id)init;
- (id)description;
- (void)dealloc;
- (id)initWithPendingLogLocations:(id)a0;

@end
