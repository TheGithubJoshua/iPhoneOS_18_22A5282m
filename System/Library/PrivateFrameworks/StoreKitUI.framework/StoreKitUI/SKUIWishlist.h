@class NSArray, SSWishlist;

@interface SKUIWishlist : NSObject {
    SSWishlist *_database;
}

@property (readonly, nonatomic) long long accountIdentifier;
@property (readonly, copy, nonatomic) NSArray *items;

+ (id)activeWishlist;

- (void)addItem:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccountIdentifier:(long long)a0;
- (BOOL)containsItemWithIdentifier:(long long)a0;
- (void)removeItemsWithItemIdentifiers:(id)a0;
- (void)postChangeNotification;

@end
