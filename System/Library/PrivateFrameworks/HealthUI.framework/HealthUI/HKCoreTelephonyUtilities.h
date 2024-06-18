@class NSObject;
@protocol OS_dispatch_queue;

@interface HKCoreTelephonyUtilities : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue;

- (id)init;
- (struct __CTServerConnection { } *)ctServerConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEmergencyServicePhoneNumber:(id)a0;

@end
