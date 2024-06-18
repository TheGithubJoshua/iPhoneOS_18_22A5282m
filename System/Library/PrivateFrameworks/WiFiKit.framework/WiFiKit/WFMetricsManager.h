@class NSString, NSMutableDictionary, NSObject, AWDServerConnection;
@protocol OS_dispatch_queue;

@interface WFMetricsManager : NSObject

@property (retain, nonatomic) AWDServerConnection *server;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (copy, nonatomic) NSString *processName;
@property (retain, nonatomic) NSMutableDictionary *ssidHashes;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)processEvent:(id)a0;
- (void)_submitCAEvent:(id)a0;
- (void)_submitAWDEvent:(id)a0;

@end
