@class UICollectionReusableView, UICollectionViewLayoutAttributes;

@interface _UICollectionViewPrefetchItem : NSObject {
    struct { unsigned char needsLayoutAttributesUpdate : 1; unsigned char needsPreferredAttributesUpdate : 1; unsigned char needsReconfigure : 1; } _flags;
    UICollectionViewLayoutAttributes *_attributes;
}

@property (retain, nonatomic) UICollectionReusableView *view;

- (void).cxx_destruct;
- (id)description;

@end
