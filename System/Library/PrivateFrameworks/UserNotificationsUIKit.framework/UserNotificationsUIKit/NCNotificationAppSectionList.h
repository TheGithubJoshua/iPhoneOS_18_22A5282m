@class MTVisualStylingProvider, NSString, NSMutableDictionary, NSArray, NCNotificationAppSectionListHeaderView, NSMutableArray, NCNotificationAppSectionListSummarizedContentView;

@interface NCNotificationAppSectionList : NCNotificationStructuredSectionList <NCNotificationAppSectionListHeaderViewDelegate, NCNotificationAppSectionListSummarizedContentViewDelegate, MTVisualStylingRequiring> {
    NCNotificationAppSectionListHeaderView *_headerView;
    NCNotificationAppSectionListSummarizedContentView *_footerView;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSString *_preferredContentSizeCategory;
}

@property (retain, nonatomic) NSMutableArray *featuredGroupLists;
@property (retain, nonatomic) NSMutableDictionary *richContentProviders;
@property (nonatomic, getter=isMerged) BOOL merged;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) NSArray *groupListsForSmartOrdering;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isCombinedAppSectionList) BOOL combinedAppSectionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (BOOL)_shouldHideNotificationGroupList:(id)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (id)_summarizedAttachmentImageViews;
- (void)_clearContentProviderForRequest:(id)a0;
- (void)_configureSectionListView:(id)a0;
- (id)_newGroupListForNotificationRequest:(id)a0;
- (unsigned long long)_insertionIndexForGroup:(id)a0;
- (BOOL)isAttachmentImageFeaturedForNotificationGroupList:(id)a0;
- (BOOL)_shouldHideNotificationRequest:(id)a0;
- (id)_notificationGroupsForInsertion;
- (id)footerViewForNotificationList:(id)a0;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (void)appSectionListHeaderView:(id)a0 didRequestPresentingOptionsMenuFromView:(id)a1;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (id)headerViewForNotificationList:(id)a0;
- (double)headerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void)_configureFooterViewIfNecessary;
- (BOOL)_showSummarizedFooterView;
- (BOOL)_isViewFeaturedAtIndex:(unsigned long long)a0;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void)_mergeFeaturedGroupLists;
- (void)insertNotificationRequest:(id)a0;
- (id)_summarizedContentStrings;
- (void)clearAll;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (void)unmergeNotificationGroupListsIfNecessary;
- (id)_nonFeaturedGroupLists;
- (BOOL)shouldAllowRestackingForNotificationListPresentableGroup:(id)a0;
- (id)notificationGroupList:(id)a0 requestsContentProviderForNotificationRequest:(id)a1;
- (BOOL)_shouldFeatureLeadingViews;
- (void)modifyNotificationRequest:(id)a0;
- (id)_newAttachmentImageViewForImage:(id)a0;
- (unsigned long long)_summarizedCount;
- (id)_summarizedStringsForNotificationRequest:(id)a0;
- (void)_configureHeaderViewIfNecessary;
- (id)backgroundGroupNameBaseForAppSectionListSummarizedContentView:(id)a0;
- (BOOL)isRichNotificationContentViewForNotificationGroupList:(id)a0;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (void)removeNotificationRequest:(id)a0;
- (void)appSectionListSummarizedContentViewDidRecognizeTapGesture:(id)a0;
- (void).cxx_destruct;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setPreferredContentSizeCategory:(id)a0;
- (id)preferredContentSizeCategory;
- (id)_attachmentImageViewForSummaryForNotificationRequest:(id)a0;
- (id)_extractFeaturedNotificationRequestsFromGroupLists:(id)a0;
- (void)_removeFeaturedGroupListIfNecessary:(id)a0;
- (void)_updateFeaturedGroupListsForFeaturedNotificationRequests:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_updateSummarizedFooterViewContent;
- (BOOL)isShowingFeaturedLeadingViewsForNotificationListView:(id)a0;
- (void)notificationListPresentableGroup:(id)a0 didReceivedHorizontalTranslation:(double)a1;

@end
