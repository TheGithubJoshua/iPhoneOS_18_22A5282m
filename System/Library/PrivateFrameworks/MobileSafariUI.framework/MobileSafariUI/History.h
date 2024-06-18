@class NSString, NSMutableArray, _WKVisitedLinkStore;

@interface History : WBUHistory <WKHistoryDelegatePrivate> {
    NSMutableArray *_deferredUpdates;
    _WKVisitedLinkStore *_visitedLinkStore;
}

@property (readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dayWithPeriodOfDayStringForDate:(id)a0;
+ (id)lowercaseStringTrimmedForHistorySearch:(id)a0;
+ (BOOL)historyItemURL:(id)a0 matchesFilterStrings:(id)a1;
+ (id)sharedHistory;
+ (void)initialize;
+ (BOOL)historyItemTitle:(id)a0 matchesFilterString:(id)a1;
+ (id)sessionIdentifierFromSessionStartDate:(id)a0;
+ (void)localeChanged:(struct __CFLocale { } *)a0;
+ (BOOL)historyItemURL:(id)a0 matchesFilter:(id)a1;
+ (id)_localizedStringForWeekday:(long long)a0 partOfDay:(long long)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })hourRangeFromPartOfDay:(long long)a0;
+ (long long)partOfDayFromHourOfDay:(long long)a0;
+ (id)titleForHistoryItem:(id)a0;
+ (id)_localizedStringForTodayWithPartOfDay:(long long)a0;
+ (id)sessionStartDateFromDate:(id)a0;
+ (id)sessionIdentifierFromDate:(id)a0;

- (void)removeItem:(id)a0;
- (void)commitDeferredUpdates;
- (Class)_historyItemClass;
- (void)cancelDeferredUpdates;
- (id)titleForDate:(id)a0;
- (id)_weekdayMonthDateStringForDate:(id)a0;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)removeItems:(id)a0 completionHanlder:(id /* block */)a1;
- (void)_updateForWKWebView:(id)a0 browserController:(id)a1 updates:(id /* block */)a2;
- (void)_webView:(id)a0 didPerformServerRedirectFromURL:(id)a1 toURL:(id)a2;
- (void).cxx_destruct;
- (void)_webView:(id)a0 didPerformClientRedirectFromURL:(id)a1 toURL:(id)a2;
- (void)_webView:(id)a0 didUpdateHistoryTitle:(id)a1 forURL:(id)a2;
- (void)dealloc;
- (void)_removeAllVisitedLinks;
- (void)_addVisitedLinkForItemIfNeeded:(id)a0 withVisitOrigin:(long long)a1;
- (void)_webView:(id)a0 didNavigateWithNavigationData:(id)a1;

@end
