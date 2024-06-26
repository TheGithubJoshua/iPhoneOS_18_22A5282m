@interface _ATXActionUtils : NSObject

+ (void)prefillActionHistograms;
+ (id)slotSetsForAction:(id)a0;
+ (id)stringForSpecificTimeDOWLocation:(id)a0 timeZone:(id)a1 geohash:(long long)a2;
+ (id)partOfWeekStringForDate:(id)a0;
+ (BOOL)shouldAcceptAudioOrVideoCallIntent:(id)a0;
+ (id)sha256hex:(id)a0;
+ (id)getBundleIdsFromActionKeys:(id)a0;
+ (id)getBundleIdAndActionTypeFromActionKey:(id)a0;
+ (BOOL)shouldPredictRecipient:(id)a0 withDate:(id)a1 andRecipientDate:(id)a2;
+ (id)swapUserActivityString:(id)a0 withActionKey:(id)a1 withNewTitle:(id)a2 withNewDateString:(id)a3;
+ (int)timeBucketFromZeroToTwentyFour:(unsigned long long)a0;
+ (id)slotSetsForAction:(id)a0 intentCache:(id)a1;
+ (id)filterContainersWithNilAction:(id)a0;
+ (BOOL)isActionKey:(id)a0;
+ (id)firstIntent:(id)a0 inAppLaunchSession:(id)a1;
+ (double)calculateWeightWith:(unsigned long long)a0 strength:(double)a1 termFreq:(unsigned long long)a2 docFreq:(unsigned long long)a3 docLength:(unsigned long long)a4;
+ (BOOL)isNSUAType:(id)a0;
+ (id)atxActionsFromProactiveSuggestions:(id)a0;
+ (id)markTodayInTitleAndUserActivityString:(id)a0 withActionKey:(id)a1;
+ (id)stringForCoarseGeohash:(long long)a0;
+ (id)_extractValueInKeyValueBlob:(id)a0 withKey:(id)a1;
+ (id)getActionTypesFromActionKeys:(id)a0;
+ (BOOL)isTitleEquivalenceBetweenAction:(id)a0 other:(id)a1;
+ (BOOL)uniqueRecipientsMatchedBetweenIntent:(id)a0 andIntent:(id)a1;
+ (void)fetchDataAndUpdateContentAttributeSetForAction:(id)a0;
+ (id)stringForZoom7Geohash:(long long)a0;
+ (id)stringForTimeOfDayAndDayOfWeek:(id)a0 timeZone:(id)a1;
+ (BOOL)isCallIntentEquivalenceBetweenAction:(id)a0 other:(id)a1;
+ (BOOL)isContainmentBetweenAction:(id)a0 other:(id)a1;
+ (id)stringForCoarseTimePOWLocation:(id)a0 timeZone:(id)a1 coarseGeohash:(long long)a2;
+ (id)recipientFromMessageIntent:(id)a0;
+ (id)limitParameterCombinations:(id)a0 limit:(int)a1;
+ (BOOL)isINStartCallIntentSupportedForAction:(id)a0;
+ (double)computeNormalizedBetaDistEngagementScoreWithPriorAlpha:(int)a0 priorBeta:(int)a1 confirms:(double)a2 rejects:(double)a3 totalConfirms:(double)a4 totalRejects:(double)a5;
+ (id)getActionTypeFromActionKey:(id)a0;
+ (id /* block */)actionKeyFilterForCandidateBundleIds:(id)a0 candidateActionTypes:(id)a1 blacklist:(id)a2;
+ (int)timeBucketFromZeroToTwentyFour:(id)a0 timeZone:(id)a1;
+ (long long)localHourOfDayFromDate:(id)a0;
+ (void)resetActionPredictions;
+ (id)stringForDayOfWeek:(id)a0 timeZone:(id)a1;
+ (id)timeOfDayAndDayOfWeekForDate:(id)a0 timeZone:(id)a1;
+ (id)stringForTwoHourTimeWindow:(id)a0 timeZone:(id)a1;
+ (id)getActivityTypeFromNSUAType:(id)a0;
+ (BOOL)shouldAcceptMessageContent:(id)a0;
+ (void)prefillActionSlotDatabase;
+ (id)getBundleIdFromActionKey:(id)a0;
+ (id)atxActionFromProactiveSuggestion:(id)a0;
+ (id)stringForSpecificGeohash:(long long)a0;

@end
