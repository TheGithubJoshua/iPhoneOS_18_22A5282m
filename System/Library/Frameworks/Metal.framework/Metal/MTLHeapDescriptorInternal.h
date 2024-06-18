@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *_private;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (BOOL)validateWithDevice:(id)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (unsigned long long)resourceOptions;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)hazardTrackingMode;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *)descriptorPrivate;
- (unsigned long long)storageMode;
- (id)init;
- (void)setType:(long long)a0;
- (unsigned long long)protectionOptions;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)setSize:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (unsigned long long)pinnedGPUAddress;
- (void)dealloc;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (long long)type;
- (id)formattedDescription:(unsigned long long)a0;

@end
