@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _callstack;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _asyncCallstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;

- (id)initWithCoder:(id)a0;
- (unsigned long long)dispatchQueueSerialNumber;
- (unsigned int)asyncBacktraceLength;
- (int)threadState;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1 recordFramePointers:(BOOL)a2;
- (void)setThreadState:(int)a0;
- (unsigned long long *)backtrace;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned long long *)asyncBacktrace;
- (unsigned int)thread;
- (unsigned long long *)stackFramePointers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned int)backtraceLength;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;

@end
