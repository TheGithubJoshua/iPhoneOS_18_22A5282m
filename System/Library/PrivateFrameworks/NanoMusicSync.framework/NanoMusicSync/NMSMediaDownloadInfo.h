@class NSMutableOrderedSet;

@interface NMSMediaDownloadInfo : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (nonatomic) unsigned long long totalItemSize;

- (BOOL)containsItem:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItems:(id)a0;
- (unsigned long long)totalItemCount;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (id)externalLibraryItemIdentifiers;
- (id)mediaLibraryItemIdentifiers;

@end
