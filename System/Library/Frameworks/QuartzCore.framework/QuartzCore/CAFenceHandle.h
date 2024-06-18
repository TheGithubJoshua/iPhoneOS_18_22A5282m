@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _handle_name;
    unsigned long long _fence_name;
    unsigned int _port;
    struct Mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _m; } _invalidation_mutex;
    struct SpinLock { struct { int x; } _l; } _lock;
    BOOL _invalidated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isUsable) BOOL usable;
@property (readonly, getter=isInvalidated) BOOL invalidated;

+ (id)newFenceFromDefaultServer;
+ (id)handleForPort:(unsigned int)a0 fenceId:(unsigned long long)a1;
+ (id)newFenceFromServer:(unsigned int)a0;
+ (id)handleFromXPCRepresentation:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)createXPCRepresentation;
- (id).cxx_construct;
- (void)invalidate;
- (id)description;
- (unsigned long long)fenceId;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)accessMachPort:(id /* block */)a0;
- (void)dealloc;
- (unsigned int)copyPort;

@end
