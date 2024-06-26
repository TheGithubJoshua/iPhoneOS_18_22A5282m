@class NSArray, AVAssetTrackGroupInternal;

@interface AVAssetTrackGroup : NSObject <NSCopying> {
    AVAssetTrackGroupInternal *_assetTrackGroup;
}

@property (readonly, nonatomic) NSArray *trackIDs;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_assetComparisonToken;
- (id)initWithAsset:(id)a0 trackIDs:(id)a1;

@end
