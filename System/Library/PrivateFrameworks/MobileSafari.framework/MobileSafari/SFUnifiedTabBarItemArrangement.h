@class NSArray, NSIndexSet, SFUnifiedBarItem;

@interface SFUnifiedTabBarItemArrangement : NSObject <NSCopying>

@property (readonly, nonatomic) long long activeItemSquishState;
@property (readonly, nonatomic) BOOL revealsSquishedActiveItem;
@property (readonly, copy, nonatomic) NSArray *pinnedItems;
@property (readonly, copy, nonatomic) NSArray *unpinnedItems;
@property (readonly, nonatomic) unsigned long long pinnedItemLimit;
@property (readonly, copy, nonatomic) NSArray *overflowPinnedItems;
@property (readonly, copy, nonatomic) NSIndexSet *allItemIndexes;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) SFUnifiedBarItem *activeItem;
@property (readonly, nonatomic) unsigned long long activeItemIndex;
@property (readonly, nonatomic) BOOL activeItemIsExpanded;
@property (readonly, nonatomic) BOOL allowsScrollingPinnedItems;

- (id)init;
- (id)_initWithItems:(id)a0 activeItem:(id)a1 activeItemIsExpanded:(BOOL)a2 allowPinning:(BOOL)a3 allowsScrollingPinnedItems:(BOOL)a4;
- (id)initWithItems:(id)a0 activeItem:(id)a1 activeItemIsExpanded:(BOOL)a2 allowsScrollingPinnedItems:(BOOL)a3;
- (id)arrangementWithActiveItemSquishState:(long long)a0;
- (id)arrangementWithActiveItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedArrangementWithPinnedItemLimit:(unsigned long long)a0 overflowItem:(id)a1;
- (BOOL)isEqualToArrangement:(id)a0;
- (void)determineActiveItemSquishStateIfNeeded:(BOOL)a0;
- (id)arrangementWithActiveItemIsExpanded:(BOOL)a0;
- (id)initWithItem:(id)a0 activeItemIsExpanded:(BOOL)a1;
- (id)initWithItems:(id)a0 activeItem:(id)a1;

@end
