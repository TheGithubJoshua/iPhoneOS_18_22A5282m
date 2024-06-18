@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_implementation;
    double _lastEventTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}

- (BOOL)isSnapshot;
- (BOOL)allowsWeakReference;
- (id)description;
- (void)dealloc;
- (double)lastEventTimestamp;

@end
