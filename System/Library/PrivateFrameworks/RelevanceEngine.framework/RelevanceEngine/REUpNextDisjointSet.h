@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying> {
    NSMapTable *_nodes;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)containsItem:(id)a0;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)allItemsConnectedToItem:(id)a0;
- (void)connectItem:(id)a0 withItem:(id)a1;
- (BOOL)isItem:(id)a0 connectedToItem:(id)a1;

@end
