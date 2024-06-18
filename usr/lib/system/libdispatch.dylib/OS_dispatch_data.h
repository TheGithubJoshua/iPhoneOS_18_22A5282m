@class NSString;

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) const void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_suspend;
- (id)init;
- (BOOL)_isCompact;
- (void *)_getContext;
- (void)_setContext:(void *)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 freeWhenDone:(BOOL)a3 bytesAreVM:(BOOL)a4;
- (void)_setFinalizer:(void /* function */ *)a0;
- (void)dealloc;
- (void)_setTargetQueue:(id)a0;
- (void)_resume;
- (void)_activate;
- (BOOL)_bytesAreVM;

@end