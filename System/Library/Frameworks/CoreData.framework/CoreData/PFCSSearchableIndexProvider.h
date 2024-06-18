@interface PFCSSearchableIndexProvider : NSObject

- (id)defaultPrivateSearchableIndex;
- (id)createSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)defaultSearchableIndex;
- (id)createPrivateSearchableIndexWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (id)createPrivateSearchableIndexWithPath:(id)a0;

@end
