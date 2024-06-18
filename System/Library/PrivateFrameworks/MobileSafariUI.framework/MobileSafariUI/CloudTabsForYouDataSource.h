@class WBSCloudTabStore;

@interface CloudTabsForYouDataSource : WBSForYouCloudTabsDataSource {
    WBSCloudTabStore *_cloudTabStore;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_cloudTabsDidUpdate:(id)a0;
- (id)initWithTabStore:(id)a0;

@end
