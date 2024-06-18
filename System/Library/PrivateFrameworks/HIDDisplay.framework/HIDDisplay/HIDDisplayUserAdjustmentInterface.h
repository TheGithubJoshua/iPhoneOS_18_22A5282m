@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) BOOL valid;

- (BOOL)setupInterface;
- (id)initWithService:(unsigned int)a0;
- (BOOL)invalidate:(id *)a0;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (id)get:(id *)a0;
- (BOOL)set:(id)a0 error:(id *)a1;
- (id)getHIDDevices;

@end
