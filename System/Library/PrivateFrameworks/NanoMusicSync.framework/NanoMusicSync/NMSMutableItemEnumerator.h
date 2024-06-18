@class NSMutableArray;

@interface NMSMutableItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_items;
    unsigned long long _itemIndex;
}

- (void)addItem:(id)a0;
- (id)init;
- (id)nextItem;
- (BOOL)hasItems;
- (void).cxx_destruct;

@end
