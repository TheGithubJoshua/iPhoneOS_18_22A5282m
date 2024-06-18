@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    id<MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)setStorageMode:(unsigned long long)a0;
- (unsigned long long)sampleCount;
- (unsigned long long)storageMode;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)label;
- (void)dealloc;
- (void)setCounterSet:(id)a0;
- (id)counterSet;

@end
