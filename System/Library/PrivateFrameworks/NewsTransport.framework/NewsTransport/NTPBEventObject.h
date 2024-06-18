@class NTPBArticleSessionResign, NTPBSearchViewExposure, NTPBArticleHostViewExposure, NTPBIssueExposure, NTPBArticleViewWatch, NTPBShareResult, NTPBBundleSubscriberInfo, NTPBAppSessionResume, NTPBTodayWidgetExposure, NTPBTocCardDrag, NTPBAppSessionStartWatch, NTPBTodayWidgetSession, NTPBSearchResultSelect, NTPBTocToggleTap, NTPBMediaEngageComplete, NTPBLinkTapArticle, NTPBPaidSubscriptionSheetIapFail, NTPBTocHandleTap, NTPBAdCtaEngagement, NTPBShareSheetExposure, NTPBAdImpression, NTPBAppSessionResign, NTPBGroupViewExposure, NTPBAdEngagement, NTPBNotificationSubscribeUnsubscribe, NTPBWidgetEngagement, NTPBUserOnboardingChannelPickerComplete, NTPBPurchaseOffersItem, NTPBTodayWidgetHeadlineExposure, NTPBUserOnboardingScreenView, NTPBArticleScroll, NTPBAppSessionEndWatch, NTPBSearchBegin, NTPBPDFPageView, NTPBTocExposure, NTPBLinkTap, NTPBUrlMappingMiss, NTPBIssueTocView, NTPBUserOnboardingResult, NTPBAppSessionStart, NTPBReadingListAddRemove, NTPBMediaExposure, NTPBFeedCellExposure, NTPBArticleFeedback, NTPBUserOnboardingBegin, NTPBAppleIdSignInResult, NTPBNotificationSettingsScreenView, NTPBShareInformationScreenView, NTPBRestorePaidSubscription, NTPBUserIgnoreFavoritesSuggestion, NTPBPaidSubscriptionResult, NTPBLocalNotificationReturn, NTPBAdExposureIneligible, NTPBReadingListShow, NTPBPaywallButtonTap, NTPBAnfComponentExposure, NTPBMediaEngage, NTPBArticleSessionResume, NTPBAdExposureOpportunity, NTPBAudioEngagementCompleted, NTPBEndOfArticleExposure, NTPBFeedViewExposure, NTPBCoverArticleWidgetView, NTPBPaidSubscriptionConversionPointExposure, NTPBComscoreEventSend, NTPBPullToRefresh, NTPBSearchExecute, NTPBDiscoverMoreInterstitialExposure, NTPBAppSessionEnd, NTPBAudioEngage, NTPBFeedEngagementMenuExposure, NTPBInAppWebEmbedExposure, NTPBExternalAnalyticsEventSend, NTPBCoverArticleWidgetExposure, NTPBFeedLoad, NTPBArticleEngagement, NTPBShareSheetIapFail, NTPBArticleLikeDislike, NTPBReportConcernSubmission, NTPBTocCellExposure, NTPBTocReorder, NTPBAlreadySubscriberSignIn, NTPBFeedCellHostViewExposure, NTPBEmailOptInInvite, NTPBChannelMuteUnmute, NTPBFeedSubscribeUnsubscribe, NTPBLocalNotificationReceived, NTPBBundleIdMappingMiss, NTPBUserOnboardingResume, NTPBMediaView, NTPBSubscriptionDetectionScreenView, NTPBWebAccessScreenView, NTPBPaidSubscriptionSheetView, NTPBArticleViewNotw, NTPBNoUserAction, NTPBIssueDownload, NTPBRecommendationBrickExposure, NTPBBackgroundSubscriptionValidation, NTPBArticleScrollNotw, NTPBTopOfFeedModuleExposure, NTPBOptInButtonExposure, NTPBSuggestionsFeedback;

@interface NTPBEventObject : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserOnboardingBegin;
@property (retain, nonatomic) NTPBUserOnboardingBegin *userOnboardingBegin;
@property (readonly, nonatomic) BOOL hasUserOnboardingResume;
@property (retain, nonatomic) NTPBUserOnboardingResume *userOnboardingResume;
@property (readonly, nonatomic) BOOL hasUserOnboardingResult;
@property (retain, nonatomic) NTPBUserOnboardingResult *userOnboardingResult;
@property (readonly, nonatomic) BOOL hasAppSessionStart;
@property (retain, nonatomic) NTPBAppSessionStart *appSessionStart;
@property (readonly, nonatomic) BOOL hasAppSessionEnd;
@property (retain, nonatomic) NTPBAppSessionEnd *appSessionEnd;
@property (readonly, nonatomic) BOOL hasArticleScroll;
@property (retain, nonatomic) NTPBArticleScroll *articleScroll;
@property (readonly, nonatomic) BOOL hasArticleHostViewExposure;
@property (retain, nonatomic) NTPBArticleHostViewExposure *articleHostViewExposure;
@property (readonly, nonatomic) BOOL hasArticleLikeDislike;
@property (retain, nonatomic) NTPBArticleLikeDislike *articleLikeDislike;
@property (readonly, nonatomic) BOOL hasFeedCellExposure;
@property (retain, nonatomic) NTPBFeedCellExposure *feedCellExposure;
@property (readonly, nonatomic) BOOL hasFeedViewExposure;
@property (retain, nonatomic) NTPBFeedViewExposure *feedViewExposure;
@property (readonly, nonatomic) BOOL hasFeedCellHostViewExposure;
@property (retain, nonatomic) NTPBFeedCellHostViewExposure *feedCellHostViewExposure;
@property (readonly, nonatomic) BOOL hasFeedSubscribeUnsubscribe;
@property (retain, nonatomic) NTPBFeedSubscribeUnsubscribe *feedSubscribeUnsubscribe;
@property (readonly, nonatomic) BOOL hasMediaExposure;
@property (retain, nonatomic) NTPBMediaExposure *mediaExposure;
@property (readonly, nonatomic) BOOL hasMediaView;
@property (retain, nonatomic) NTPBMediaView *mediaView;
@property (readonly, nonatomic) BOOL hasMediaEngage;
@property (retain, nonatomic) NTPBMediaEngage *mediaEngage;
@property (readonly, nonatomic) BOOL hasMediaEngageComplete;
@property (retain, nonatomic) NTPBMediaEngageComplete *mediaEngageComplete;
@property (readonly, nonatomic) BOOL hasSearchBegin;
@property (retain, nonatomic) NTPBSearchBegin *searchBegin;
@property (readonly, nonatomic) BOOL hasSearchExecute;
@property (retain, nonatomic) NTPBSearchExecute *searchExecute;
@property (readonly, nonatomic) BOOL hasSearchResultSelect;
@property (retain, nonatomic) NTPBSearchResultSelect *searchResultSelect;
@property (readonly, nonatomic) BOOL hasShareResult;
@property (retain, nonatomic) NTPBShareResult *shareResult;
@property (readonly, nonatomic) BOOL hasNoUserAction;
@property (retain, nonatomic) NTPBNoUserAction *noUserAction;
@property (readonly, nonatomic) BOOL hasReadingListAddRemove;
@property (retain, nonatomic) NTPBReadingListAddRemove *readingListAddRemove;
@property (readonly, nonatomic) BOOL hasReadingListShow;
@property (retain, nonatomic) NTPBReadingListShow *readingListShow;
@property (readonly, nonatomic) BOOL hasRecommendationBrickExposure;
@property (retain, nonatomic) NTPBRecommendationBrickExposure *recommendationBrickExposure;
@property (readonly, nonatomic) BOOL hasEndOfArticleExposure;
@property (retain, nonatomic) NTPBEndOfArticleExposure *endOfArticleExposure;
@property (readonly, nonatomic) BOOL hasReportConcernSubmission;
@property (retain, nonatomic) NTPBReportConcernSubmission *reportConcernSubmission;
@property (readonly, nonatomic) BOOL hasLocalNotificationReturn;
@property (retain, nonatomic) NTPBLocalNotificationReturn *localNotificationReturn;
@property (readonly, nonatomic) BOOL hasPullToRefresh;
@property (retain, nonatomic) NTPBPullToRefresh *pullToRefresh;
@property (readonly, nonatomic) BOOL hasLinkTapArticle;
@property (retain, nonatomic) NTPBLinkTapArticle *linkTapArticle;
@property (readonly, nonatomic) BOOL hasLocalNotificationReceived;
@property (retain, nonatomic) NTPBLocalNotificationReceived *localNotificationReceived;
@property (readonly, nonatomic) BOOL hasUserOnboardingScreenView;
@property (retain, nonatomic) NTPBUserOnboardingScreenView *userOnboardingScreenView;
@property (readonly, nonatomic) BOOL hasUserOnboardingChannelPickerComplete;
@property (retain, nonatomic) NTPBUserOnboardingChannelPickerComplete *userOnboardingChannelPickerComplete;
@property (readonly, nonatomic) BOOL hasAdExposureOpportunity;
@property (retain, nonatomic) NTPBAdExposureOpportunity *adExposureOpportunity;
@property (readonly, nonatomic) BOOL hasChannelMuteUnmute;
@property (retain, nonatomic) NTPBChannelMuteUnmute *channelMuteUnmute;
@property (readonly, nonatomic) BOOL hasShareSheetExposure;
@property (retain, nonatomic) NTPBShareSheetExposure *shareSheetExposure;
@property (readonly, nonatomic) BOOL hasFeedEngagementMenuExposure;
@property (retain, nonatomic) NTPBFeedEngagementMenuExposure *feedEngagementMenuExposure;
@property (readonly, nonatomic) BOOL hasSearchViewExposure;
@property (retain, nonatomic) NTPBSearchViewExposure *searchViewExposure;
@property (readonly, nonatomic) BOOL hasGroupViewExposure;
@property (retain, nonatomic) NTPBGroupViewExposure *groupViewExposure;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionConversionPointExposure;
@property (retain, nonatomic) NTPBPaidSubscriptionConversionPointExposure *paidSubscriptionConversionPointExposure;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionSheetView;
@property (retain, nonatomic) NTPBPaidSubscriptionSheetView *paidSubscriptionSheetView;
@property (readonly, nonatomic) BOOL hasShareSheetIapFail;
@property (retain, nonatomic) NTPBShareSheetIapFail *shareSheetIapFail;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionResult;
@property (retain, nonatomic) NTPBPaidSubscriptionResult *paidSubscriptionResult;
@property (readonly, nonatomic) BOOL hasShareInformationScreenView;
@property (retain, nonatomic) NTPBShareInformationScreenView *shareInformationScreenView;
@property (readonly, nonatomic) BOOL hasWebAccessScreenView;
@property (retain, nonatomic) NTPBWebAccessScreenView *webAccessScreenView;
@property (readonly, nonatomic) BOOL hasAlreadySubscriberSignIn;
@property (retain, nonatomic) NTPBAlreadySubscriberSignIn *alreadySubscriberSignIn;
@property (readonly, nonatomic) BOOL hasBackgroundSubscriptionValidation;
@property (retain, nonatomic) NTPBBackgroundSubscriptionValidation *backgroundSubscriptionValidation;
@property (readonly, nonatomic) BOOL hasSubscriptionDetectionScreenView;
@property (retain, nonatomic) NTPBSubscriptionDetectionScreenView *subscriptionDetectionScreenView;
@property (readonly, nonatomic) BOOL hasCoverArticleWidgetView;
@property (retain, nonatomic) NTPBCoverArticleWidgetView *coverArticleWidgetView;
@property (readonly, nonatomic) BOOL hasNotificationSubscribeUnsubscribe;
@property (retain, nonatomic) NTPBNotificationSubscribeUnsubscribe *notificationSubscribeUnsubscribe;
@property (readonly, nonatomic) BOOL hasNotificationSettingsScreenView;
@property (retain, nonatomic) NTPBNotificationSettingsScreenView *notificationSettingsScreenView;
@property (readonly, nonatomic) BOOL hasEmailOptInInvite;
@property (retain, nonatomic) NTPBEmailOptInInvite *emailOptInInvite;
@property (readonly, nonatomic) BOOL hasCoverArticleWidgetExposure;
@property (retain, nonatomic) NTPBCoverArticleWidgetExposure *coverArticleWidgetExposure;
@property (readonly, nonatomic) BOOL hasRestorePaidSubscription;
@property (retain, nonatomic) NTPBRestorePaidSubscription *restorePaidSubscription;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionSheetIapFail;
@property (retain, nonatomic) NTPBPaidSubscriptionSheetIapFail *paidSubscriptionSheetIapFail;
@property (readonly, nonatomic) BOOL hasComscoreEventSend;
@property (retain, nonatomic) NTPBComscoreEventSend *comscoreEventSend;
@property (readonly, nonatomic) BOOL hasDiscoverMoreInterstitialExposure;
@property (retain, nonatomic) NTPBDiscoverMoreInterstitialExposure *discoverMoreInterstitialExposure;
@property (readonly, nonatomic) BOOL hasArticleViewNotw;
@property (retain, nonatomic) NTPBArticleViewNotw *articleViewNotw;
@property (readonly, nonatomic) BOOL hasArticleScrollNotw;
@property (retain, nonatomic) NTPBArticleScrollNotw *articleScrollNotw;
@property (readonly, nonatomic) BOOL hasUrlMappingMiss;
@property (retain, nonatomic) NTPBUrlMappingMiss *urlMappingMiss;
@property (readonly, nonatomic) BOOL hasBundleIdMappingMiss;
@property (retain, nonatomic) NTPBBundleIdMappingMiss *bundleIdMappingMiss;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsEventSend;
@property (retain, nonatomic) NTPBExternalAnalyticsEventSend *externalAnalyticsEventSend;
@property (readonly, nonatomic) BOOL hasAppSessionStartWatch;
@property (retain, nonatomic) NTPBAppSessionStartWatch *appSessionStartWatch;
@property (readonly, nonatomic) BOOL hasArticleViewWatch;
@property (retain, nonatomic) NTPBArticleViewWatch *articleViewWatch;
@property (readonly, nonatomic) BOOL hasAppSessionEndWatch;
@property (retain, nonatomic) NTPBAppSessionEndWatch *appSessionEndWatch;
@property (readonly, nonatomic) BOOL hasAnfComponentExposure;
@property (retain, nonatomic) NTPBAnfComponentExposure *anfComponentExposure;
@property (readonly, nonatomic) BOOL hasTodayWidgetSession;
@property (retain, nonatomic) NTPBTodayWidgetSession *todayWidgetSession;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement;
@property (readonly, nonatomic) BOOL hasTodayWidgetHeadlineExposure;
@property (retain, nonatomic) NTPBTodayWidgetHeadlineExposure *todayWidgetHeadlineExposure;
@property (readonly, nonatomic) BOOL hasTodayWidgetExposure;
@property (retain, nonatomic) NTPBTodayWidgetExposure *todayWidgetExposure;
@property (readonly, nonatomic) BOOL hasAdExposureIneligible;
@property (retain, nonatomic) NTPBAdExposureIneligible *adExposureIneligible;
@property (readonly, nonatomic) BOOL hasOptInButtonExposure;
@property (retain, nonatomic) NTPBOptInButtonExposure *optInButtonExposure;
@property (readonly, nonatomic) BOOL hasSuggestionsFeedback;
@property (retain, nonatomic) NTPBSuggestionsFeedback *suggestionsFeedback;
@property (readonly, nonatomic) BOOL hasUserIgnoreFavoritesSuggestion;
@property (retain, nonatomic) NTPBUserIgnoreFavoritesSuggestion *userIgnoreFavoritesSuggestion;
@property (readonly, nonatomic) BOOL hasArticleEngagement;
@property (retain, nonatomic) NTPBArticleEngagement *articleEngagement;
@property (readonly, nonatomic) BOOL hasAdImpression;
@property (retain, nonatomic) NTPBAdImpression *adImpression;
@property (readonly, nonatomic) BOOL hasAdEngagement;
@property (retain, nonatomic) NTPBAdEngagement *adEngagement;
@property (readonly, nonatomic) BOOL hasAdCtaEngagement;
@property (retain, nonatomic) NTPBAdCtaEngagement *adCtaEngagement;
@property (readonly, nonatomic) BOOL hasLinkTap;
@property (retain, nonatomic) NTPBLinkTap *linkTap;
@property (readonly, nonatomic) BOOL hasTopOfFeedModuleExposure;
@property (retain, nonatomic) NTPBTopOfFeedModuleExposure *topOfFeedModuleExposure;
@property (readonly, nonatomic) BOOL hasInAppWebEmbedExposure;
@property (retain, nonatomic) NTPBInAppWebEmbedExposure *inAppWebEmbedExposure;
@property (readonly, nonatomic) BOOL hasTocExposure;
@property (retain, nonatomic) NTPBTocExposure *tocExposure;
@property (readonly, nonatomic) BOOL hasTocReorder;
@property (retain, nonatomic) NTPBTocReorder *tocReorder;
@property (readonly, nonatomic) BOOL hasTocHandleTap;
@property (retain, nonatomic) NTPBTocHandleTap *tocHandleTap;
@property (readonly, nonatomic) BOOL hasTocCardDrag;
@property (retain, nonatomic) NTPBTocCardDrag *tocCardDrag;
@property (readonly, nonatomic) BOOL hasTocToggleTap;
@property (retain, nonatomic) NTPBTocToggleTap *tocToggleTap;
@property (readonly, nonatomic) BOOL hasTocCellExposure;
@property (retain, nonatomic) NTPBTocCellExposure *tocCellExposure;
@property (readonly, nonatomic) BOOL hasAppSessionResign;
@property (retain, nonatomic) NTPBAppSessionResign *appSessionResign;
@property (readonly, nonatomic) BOOL hasAppSessionResume;
@property (retain, nonatomic) NTPBAppSessionResume *appSessionResume;
@property (readonly, nonatomic) BOOL hasArticleSessionResign;
@property (retain, nonatomic) NTPBArticleSessionResign *articleSessionResign;
@property (readonly, nonatomic) BOOL hasArticleSessionResume;
@property (retain, nonatomic) NTPBArticleSessionResume *articleSessionResume;
@property (readonly, nonatomic) BOOL hasBundleSubscriberInfo;
@property (retain, nonatomic) NTPBBundleSubscriberInfo *bundleSubscriberInfo;
@property (readonly, nonatomic) BOOL hasIssueDownload;
@property (retain, nonatomic) NTPBIssueDownload *issueDownload;
@property (readonly, nonatomic) BOOL hasPaywallButtonTap;
@property (retain, nonatomic) NTPBPaywallButtonTap *paywallButtonTap;
@property (readonly, nonatomic) BOOL hasPdfPageView;
@property (retain, nonatomic) NTPBPDFPageView *pdfPageView;
@property (readonly, nonatomic) BOOL hasIssueTocView;
@property (retain, nonatomic) NTPBIssueTocView *issueTocView;
@property (readonly, nonatomic) BOOL hasIssueExposure;
@property (retain, nonatomic) NTPBIssueExposure *issueExposure;
@property (readonly, nonatomic) BOOL hasAppleidSignInResult;
@property (retain, nonatomic) NTPBAppleIdSignInResult *appleidSignInResult;
@property (readonly, nonatomic) BOOL hasArticleFeedback;
@property (retain, nonatomic) NTPBArticleFeedback *articleFeedback;
@property (readonly, nonatomic) BOOL hasAudioEngage;
@property (retain, nonatomic) NTPBAudioEngage *audioEngage;
@property (readonly, nonatomic) BOOL hasAudioEngagementCompleted;
@property (retain, nonatomic) NTPBAudioEngagementCompleted *audioEngagementCompleted;
@property (readonly, nonatomic) BOOL hasPurchaseOffersItem;
@property (retain, nonatomic) NTPBPurchaseOffersItem *purchaseOffersItem;
@property (readonly, nonatomic) BOOL hasFeedLoad;
@property (retain, nonatomic) NTPBFeedLoad *feedLoad;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end