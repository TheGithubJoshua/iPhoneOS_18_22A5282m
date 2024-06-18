@class NSString, NSArray, NSMutableSet, NSDate, NSMutableOrderedSet, NSSet;
@protocol PLHighlightItem;

@interface PLHighlightItemList : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *internalHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, nonatomic) BOOL isNewList;
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, nonatomic) id<PLHighlightItem> parentHighlightItem;

+ (id)timeSortDescriptors;

- (void)addHighlightItem:(id)a0;
- (id)initWithParentHighlightItem:(id)a0 childHighlightItems:(id)a1;
- (void)removeHighlightItem:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initAsNewList;
- (void)_updateStartEndDates;
- (void)_updateHighlightItemsOrdering;
- (void)mergeWithHighlightItemList:(id)a0;
- (void)reset;

@end
