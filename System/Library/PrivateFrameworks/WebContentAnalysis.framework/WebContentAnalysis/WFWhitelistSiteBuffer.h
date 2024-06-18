@class NSMutableDictionary;

@interface WFWhitelistSiteBuffer : NSObject

@property (retain) NSMutableDictionary *siteTree;
@property unsigned long long maxSize;

- (id)init;
- (void)dealloc;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;
- (BOOL)treeContainsURLString:(id)a0;

@end
