@class NSObject;
@protocol OS_dispatch_queue;

@interface ANAnnouncementStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (id)init;
- (void)_unregister;
- (BOOL)_setState:(unsigned long long)a0 withToken:(int)a1;
- (void)publishState:(unsigned long long)a0 name:(id)a1;
- (BOOL)_setName:(id)a0;
- (void)_publishState:(unsigned long long)a0 name:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_register;

@end
