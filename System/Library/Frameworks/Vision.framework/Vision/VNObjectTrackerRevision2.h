@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)rpnInitQueue;
+ (id)serializeRPNTrackingQueue;
+ (id)rpnTrackQueue;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)serializeRPNInitializationQueue;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
