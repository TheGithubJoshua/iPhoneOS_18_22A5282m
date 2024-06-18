@interface HIDUserDevice : NSObject {
    struct __IOHIDUserDevice { } *_device;
    id /* block */ _getReportHandler;
    id /* block */ _setReportHandler;
    unsigned int _service;
    id /* block */ _cancelHandler;
}

@property (readonly) unsigned int service;

- (void)cancel;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDispatchQueue:(id)a0;
- (void)activate;
- (void)setCancelHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (id)initWithProperties:(id)a0;
- (BOOL)handleReport:(id)a0 error:(out id *)a1;
- (BOOL)handleReport:(id)a0 withTimestamp:(unsigned long long)a1 error:(out id *)a2;
- (void)setGetReportHandler:(id /* block */)a0;
- (void)setSetReportHandler:(id /* block */)a0;

@end
