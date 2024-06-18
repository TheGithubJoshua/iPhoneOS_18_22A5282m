@class NSString, NSDictionary, NSMutableDictionary, NSDate;
@protocol AFClockItemStorageDelegate;

@interface AFClockItemStorage : NSObject <AFInvalidating> {
    id<AFClockItemStorageDelegate> _delegate;
    long long _groupingDepth;
    unsigned long long _workingGeneration;
    NSDate *_workingDate;
    NSMutableDictionary *_workingItemsByID;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *itemsByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteItemsWithIDs:(id)a0;
- (void)deleteAllItems;
- (id)itemWithID:(id)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)insertOrUpdateItems:(id)a0;
- (void)beginGrouping;
- (void)endGroupingWithOptions:(unsigned long long)a0;

@end
