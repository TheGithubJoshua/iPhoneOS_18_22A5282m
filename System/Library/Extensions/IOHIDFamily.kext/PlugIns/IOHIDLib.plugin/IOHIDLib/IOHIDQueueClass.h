@class IOHIDDeviceClass;

@interface IOHIDQueueClass : IOHIDIUnknown2 {
    struct IOHIDDeviceQueueInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; } *_queue;
    IOHIDDeviceClass *_device;
    struct os_unfair_lock_s { unsigned int x0; } *_queueLock;
    unsigned int _port;
    struct __CFMachPort { } *_machPort;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct _IOHIDQueueHeader { _Atomic unsigned long long x0; } *_queueHeader;
    struct _IODataQueueMemory { unsigned int x0; unsigned int x1; unsigned int x2; struct _IODataQueueEntry { unsigned int x0; unsigned char x1[4]; } x3[1]; } *_queueMemory;
    unsigned long long _queueMemorySize;
    BOOL _queueSizeChanged;
    unsigned int _lastTail;
    unsigned int _depth;
    unsigned long long _queueToken;
    void /* function */ *_valueAvailableCallback;
    void *_valueAvailableContext;
    void *_usageAnalytics;
}

- (id)initWithDevice:(id)a0;
- (void)signalQueueEmpty;
- (int)stop;
- (int)copyNextValue:(struct __IOHIDValue **)a0;
- (int)start;
- (int)getAsyncEventSource:(const void **)a0;
- (void).cxx_destruct;
- (int)queryInterface:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0 outInterface:(void **)a1;
- (int)setDepth:(unsigned int)a0;
- (id)initWithDevice:(id)a0 port:(unsigned int)a1 source:(struct __CFRunLoopSource { } *)a2;
- (int)getDepth:(unsigned int *)a0;
- (void)updateUsageAnalytics;
- (void)dealloc;
- (int)setValueAvailableCallback:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)setupAnalytics;
- (void)queueCallback:(struct __CFMachPort { } *)a0 msg:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } *)a1 size:(long long)a2 info:(void *)a3;
- (int)containsElement:(struct __IOHIDElement { } *)a0 pValue:(char *)a1;
- (void)unmapMemory;
- (int)addElement:(struct __IOHIDElement { } *)a0;
- (int)removeElement:(struct __IOHIDElement { } *)a0;
- (void)mapMemory;

@end
