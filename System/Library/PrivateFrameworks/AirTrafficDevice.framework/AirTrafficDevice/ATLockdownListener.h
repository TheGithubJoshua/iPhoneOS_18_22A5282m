@class NSString, NSObject;
@protocol OS_xpc_object;

@interface ATLockdownListener : ATMessageLinkListener {
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly, copy, nonatomic) NSString *serviceName;

- (id)initWithServiceName:(id)a0;
- (void)stop;
- (BOOL)start;
- (void)_handleNewConnection:(id)a0;
- (void).cxx_destruct;

@end
