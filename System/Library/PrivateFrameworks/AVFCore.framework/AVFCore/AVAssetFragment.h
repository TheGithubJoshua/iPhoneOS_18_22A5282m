@class AVAssetFragmentInternal;

@interface AVAssetFragment : NSObject {
    AVAssetFragmentInternal *_internal;
}

@property (readonly) long long sequenceNumber;

+ (id)fragmentWithSequenceNumber:(long long)a0;

- (id)init;
- (id)initWithSequenceNumber:(long long)a0;
- (void)dealloc;

@end