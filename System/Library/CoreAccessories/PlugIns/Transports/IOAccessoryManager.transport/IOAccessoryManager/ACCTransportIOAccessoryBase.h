@class NSObject;
@protocol OS_dispatch_queue;

@interface ACCTransportIOAccessoryBase : NSObject {
    unsigned int _ioConnect;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    NSObject<OS_dispatch_queue> *_notificationPortQueue;
}

@property (nonatomic) unsigned int upstreamManagerService;
@property (nonatomic) int primaryPortNumber;
@property (readonly, nonatomic) unsigned int ioService;
@property (readonly, nonatomic) int ioServiceClassType;

- (BOOL)transmitData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)transportClassTerminated;
- (id)initWithIOAccessoryClass:(int)a0 ioService:(unsigned int)a1;

@end
