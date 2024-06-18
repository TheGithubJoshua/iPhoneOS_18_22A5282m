@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment> {
    NSMutableArray *_urls;
    BOOL _needsFlushing;
}

+ (BOOL)deleteAllURLsWithBundleIdentifier:(id)a0 domainSelection:(id)a1 entityStore:(id)a2;
+ (id)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdentifier:(id)a2 entityStore:(id)a3;
+ (BOOL)deleteAllURLsWithBundleIdentifier:(id)a0 entityStore:(id)a1;
+ (BOOL)deleteAllURLsWithBundleIdentifier:(id)a0 documentIdentifiers:(id)a1 entityStore:(id)a2;

- (id)init;
- (id)numberOfExtractions;
- (void).cxx_destruct;
- (void)flushWrites;
- (void)dealloc;
- (void)writeWithEntityStore:(id)a0;

@end
