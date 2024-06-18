@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer {
    BOOL _suspended;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    NSArray *_queryDescriptors;
}

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)objectTypes;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (BOOL)validateConfiguration:(id *)a0;

@end
