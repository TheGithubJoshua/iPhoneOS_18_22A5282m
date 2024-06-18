@class NSString, NSNumberFormatter, NCNotificationSummaryBuilder, NSMutableArray;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
}

@property (retain, nonatomic) NSMutableArray *coalescedNotificationRequests;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder;
@property (copy, nonatomic) NSString *collapsedSectionSummaryString;
@property (nonatomic) BOOL showSummaryFooterText;
@property (nonatomic) BOOL showSummaryTextAsContent;

- (void)_updateSummaryText;
- (id)init;
- (id)primarySubtitleText;
- (void)removeCoalescedNotificationRequest:(id)a0;
- (id)communicationAvatar;
- (id)inlineAction;
- (id)_placeholderSecondaryText;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)a0;
- (BOOL)containsMatchingCoalescedNotificationRequest:(id)a0;
- (id)initWithNotificationRequest:(id)a0;
- (id)importantText;
- (id)_localizedStringWithPlaceholderFormat:(id)a0 count:(unsigned long long)a1;
- (id)date;
- (id)_activeSummaryBuilder;
- (void).cxx_destruct;
- (id)footerText;
- (id)primaryText;
- (id)notificationRequest;
- (void)updateCoalescedNotificationRequest:(id)a0;
- (id)thumbnail;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)icons;
- (id)summaryText;
- (id)secondaryText;
- (void)coalesceNotificationRequest:(id)a0;
- (BOOL)_shouldShowNotificationBody;
- (BOOL)isHidingContent;
- (unsigned long long)_notificationCount;
- (unsigned long long)coalesceCount;

@end
