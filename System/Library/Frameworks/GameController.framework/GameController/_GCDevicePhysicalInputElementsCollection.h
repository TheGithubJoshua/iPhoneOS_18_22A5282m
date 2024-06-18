@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)elementAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (id)retain;
- (unsigned long long)count;
- (id)elementForAlias:(id)a0;

@end
