@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsArray : NSArray {
    _GCDevicePhysicalInputBase *_implementation;
}

- (oneway void)release;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (id)retain;
- (unsigned long long)count;

@end
