@class AWDServerConnection, NSObject;
@protocol OS_dispatch_queue;

@interface IDSHashPersistenceAWDLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)dealloc;
- (void)_submitAWDMetric:(id)a0 withContainer:(id)a1;
- (id)_metricContainerForMetricType:(unsigned int)a0;
- (void)duplicateMessageEncounted;

@end
