@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForDownloadOptions:(id)a0;
+ (id)groupForExperimentId:(id)a0;
+ (id)groupForScheduledFetch;
+ (id)groupForUserInitiatedFetch;
+ (id)groupForRolloutId:(id)a0;

@end
