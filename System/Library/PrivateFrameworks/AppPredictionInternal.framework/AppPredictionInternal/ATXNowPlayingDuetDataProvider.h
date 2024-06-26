@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)convertNowPlayingEventsToAppLaunchEvents:(id)a0;
- (id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(double)a0;
- (id)playbackEventsAfterSecondsOfInactivity:(double)a0 betweenStartDate:(id)a1 endDate:(id)a2;

@end
