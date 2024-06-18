@class _PASLock;

@interface _CDContactFavoritesUtilities : NSObject

@property (retain, nonatomic) _PASLock *contactFavorites;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)entriesForContact:(id)a0;
- (id)favoriteContactEntries;

@end
