@class NSCollectionLayoutSize;

@interface _UICollectionPreferredSize : NSObject {
    struct CGSize { double width; double height; } _originalSize;
    struct CGSize { double width; double height; } _fittingSize;
    NSCollectionLayoutSize *_layoutSize;
    BOOL _preferredSizeDirty;
    id _additionalData;
}

- (void).cxx_destruct;
- (id)description;

@end
