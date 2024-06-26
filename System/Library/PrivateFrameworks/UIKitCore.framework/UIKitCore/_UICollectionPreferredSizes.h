@class NSMutableDictionary, NSMutableIndexSet;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionPreferredSizes : NSObject <NSCopying> {
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    long long _frameOffset;
    id<_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
