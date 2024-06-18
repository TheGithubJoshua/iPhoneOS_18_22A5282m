@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {
    BOOL _isSupplementary;
    NSString *_elementKind;
    long long _index;
    long long _auxillaryKind;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
