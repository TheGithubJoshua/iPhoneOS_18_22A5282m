@class NSArray, NSMutableDictionary;

@interface NCNotificationInlineFeaturedSectionList : NCNotificationStructuredSectionList {
    NSArray *_featuredNotificationContentProviders;
    NSMutableDictionary *_richContentProviders;
}

@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;

- (BOOL)_shouldHideNotificationGroupList:(id)a0;
- (void)_configureSectionListView:(id)a0;
- (BOOL)_shouldHideNotificationRequest:(id)a0;
- (void)updateContent;
- (void)notificationListComponent:(id)a0 requestsExecuteAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(BOOL)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (id)footerViewForNotificationList:(id)a0;
- (BOOL)shouldNotificationGroupListPanHorizontally:(id)a0;
- (id)headerViewForNotificationList:(id)a0;
- (double)headerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (id)notificationGroupList:(id)a0 requestsContentProviderForNotificationRequest:(id)a1;
- (BOOL)isRichNotificationContentViewForNotificationGroupList:(id)a0;
- (void).cxx_destruct;

@end
