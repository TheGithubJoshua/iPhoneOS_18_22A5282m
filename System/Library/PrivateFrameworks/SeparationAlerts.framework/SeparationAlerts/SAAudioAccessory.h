@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SAAudioAccessory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct BTSessionImpl { } *fBTSession;
@property (nonatomic) struct BTAccessoryManagerImpl { } *fBTAccessoryManager;
@property (nonatomic) struct BTDeviceImpl { } *fBTDevice;
@property (retain, nonatomic) NSString *fBTAddress;
@property (nonatomic) unsigned int fProductID;
@property (nonatomic) int fBTSessionAttachRetryCount;

- (void)refreshBTDevice;
- (void)attachBTSession;
- (long long)getPrimaryBudSide;
- (void)getInEarStatus:(long long *)a0 secondary:(long long *)a1;
- (void).cxx_destruct;
- (void)setBTAddress:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)btSessionEventHandler:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void)reset;
- (long long)convertToSAInEarStatus:(int)a0;

@end
