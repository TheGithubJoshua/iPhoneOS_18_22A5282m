@class CalLimitingQueue, NSObject;
@protocol EKEventStoreProvider, OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    id<EKEventStoreProvider> _eventStoreProvider;
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}

+ (id)sharedListener;
+ (BOOL)areBirthdaysEnabled;

- (id)eventStoreProvider;
- (id)eventStore;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (id)allContactsWithBirthdays;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (void)stop;
- (id)eventStoreProviderWithReset:(BOOL)a0;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)_localeChanged;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (void)start;
- (id)initSingleton;
- (id)birthdayCalendarsInStore:(id)a0;
- (void).cxx_destruct;
- (id)eventStoreWithReset:(BOOL)a0;
- (void)checkForFailures;
- (void)addBirthdayCalendars;
- (void)reset;
- (void)disableBirthdayCalendars;
- (void)contactsReset;

@end
