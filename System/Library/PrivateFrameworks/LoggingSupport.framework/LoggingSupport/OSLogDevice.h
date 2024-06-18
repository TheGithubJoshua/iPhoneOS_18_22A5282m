@class NSString, SimDevice;

@interface OSLogDevice : NSObject

@property (nonatomic) long long devType;
@property (nonatomic) const void *mobileDeviceRef;
@property (retain, nonatomic) SimDevice *simDev;
@property (retain, nonatomic) NSString *uid;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithMobileDevice:(void *)a0 andUDID:(id)a1;
- (id)initWithSimualatedDevice:(id)a0;

@end
