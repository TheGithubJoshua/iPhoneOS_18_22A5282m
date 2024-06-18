@class NSArray;

@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) unsigned long long axis;

- (BOOL)isHorizontalGroup;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isVerticalGroup;
- (id)initWithParent:(id)a0 children:(id)a1 axis:(unsigned long long)a2;

@end
