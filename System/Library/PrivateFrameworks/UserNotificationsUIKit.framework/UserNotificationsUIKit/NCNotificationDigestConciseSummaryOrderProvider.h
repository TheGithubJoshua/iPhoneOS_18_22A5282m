@class NCNotificationSummaryContentProvider, NCNotificationSummaryPlatterView;

@interface NCNotificationDigestConciseSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider;

- (void).cxx_destruct;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)updateLeadingSummaryPlatterView;
- (void)_updateSummaryContentProvider;
- (void)_updateSummaryPlatterView;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;

@end
