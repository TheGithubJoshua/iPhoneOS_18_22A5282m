@class NSMutableDictionary;

@interface SBHIconStateUnarchivingSlugIconSource : NSObject <SBHIconStateUnarchiverIconSource> {
    NSMutableDictionary *_leafAppIcons;
}

- (void).cxx_destruct;
- (id)applicationIconForBundleIdentifier:(id)a0;
- (id)leafIconForIdentifier:(id)a0;

@end
