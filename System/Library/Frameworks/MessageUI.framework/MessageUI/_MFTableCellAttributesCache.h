@class NSCache;

@interface _MFTableCellAttributesCache : NSObject {
    NSCache *_attributesCache;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_didReceiveFontSizeChangeNotification:(id)a0;
- (id)cachedAttributesForIdentifier:(id)a0 constructionBlock:(id /* block */)a1;

@end
