@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (id)init;
- (void)clear;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)intern:(id)a0;
- (id)internNoCopy:(id)a0;
- (BOOL)isInterned:(id)a0;

@end
