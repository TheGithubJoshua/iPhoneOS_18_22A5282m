@interface SGAggregateLogging : NSObject

+ (void)assetVersion;
+ (void)recordRejectedForContact:(id)a0;
+ (id)contactsFromEntity:(id)a0;
+ (void)eventsSuggested:(id)a0 withElapsedTime:(unsigned long long)a1 inApp:(unsigned long long)a2;
+ (void)eventConfirmed:(id)a0 inApp:(unsigned long long)a1;
+ (void)messagesFound:(unsigned long long)a0;
+ (void)eventsFoundOnDeviceEnabled:(BOOL)a0;
+ (void)contactRejected:(id)a0 inApp:(unsigned long long)a1;
+ (void)eventSuggestionImpressionsViaBanner:(int)a0;
+ (void)reMatched:(id)a0;
+ (void)contactConfirmed:(id)a0 inApp:(unsigned long long)a1;
+ (id)eventsFromEntity:(id)a0;
+ (id)aggregateKeyForKeySuffix:(id)a0;
+ (void)incrementKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2 action:(id)a3;
+ (void)incrementKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2 action:(id)a3 by:(unsigned long long)a4;
+ (void)setKeyWithDomain:(id)a0 suffix:(id)a1 toValue:(unsigned long long)a2;
+ (unsigned long long)twoSigFigs:(id)a0;
+ (void)incrementValuesInDomain:(id)a0 subdomain:(id)a1 type:(id)a2 action:(id)a3 withKeysAndIncrements:(id)a4 extraSignature:(id)a5;
+ (void)recordConfirmedForContact:(id)a0;
+ (void)suggestionImpressionsViaBannerSuppressed:(int)a0;
+ (void)harvestDrainedNumberOfMails:(int)a0;
+ (void)databaseCorruptionDetectedViaCorruptionMarker;
+ (void)_pushValuesForContact:(id)a0 usingDomain:(id)a1 subdomain:(id)a2 type:(id)a3 action:(id)a4 extraSignature:(id)a5;
+ (void)incrementKeyWithDomain:(id)a0 suffix:(id)a1;
+ (void)harvestedMessageInQueueSince:(double)a0;
+ (void)incrementKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2;
+ (void)contactsSuggested:(id)a0 withElapsedTime:(unsigned long long)a1 inApp:(unsigned long long)a2;
+ (void)eventRejectedByRecord:(id)a0;
+ (void)addValueForScalarKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2 action:(id)a3 value:(long long)a4;
+ (void)eventConfirmedByRecord:(id)a0;
+ (void)detail:(id)a0 rejectedForContact:(id)a1;
+ (void)messagesPruned:(unsigned long long)a0;
+ (void)suggestionImpressionsViaBanner:(int)a0;
+ (void)performedAction:(id)a0 forApp:(id)a1 onContact:(id)a2;
+ (void)harvestedEntity:(id)a0 withElapsedTime:(unsigned long long)a1;
+ (void)messagesDeleted:(unsigned long long)a0;
+ (void)performedAction:(id)a0 onDetail:(id)a1 forContact:(id)a2;
+ (void)messagesFoundAfterUndisplayablyLost:(unsigned long long)a0;
+ (void)contactSuggestionImpressionsViaBanner:(int)a0;
+ (id)_appNameForApp:(unsigned long long)a0;
+ (void)databaseCorruptionDetectedViaIntegrityCheck;
+ (void)pushValue:(double)a0 toDistKeyWithDomain:(id)a1 suffix:(id)a2;
+ (void)identityGroupSize:(unsigned long long)a0;
+ (void)pushValueForDistributionKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2 action:(id)a3 value:(long long)a4;
+ (void)performedAction:(id)a0 onRecordForContact:(id)a1;
+ (void)assetVersion:(long long)a0;
+ (void)performedAction:(id)a0 forApp:(id)a1 onEvent:(id)a2;
+ (void)pushValue:(double)a0 toDistKeyWithSuffix:(id)a1;
+ (void)messagesAdded:(unsigned long long)a0;
+ (void)hypotheticalSuggestionImpressionsIncludingActedOn:(int)a0;
+ (void)contactsFoundOnDeviceEnabled:(BOOL)a0;
+ (void)app:(id)a0 performedAction:(id)a1 onEvents:(id)a2 withResult:(id)a3 elapsedTime:(unsigned long long)a4;
+ (void)setValueForScalarKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2 action:(id)a3 value:(long long)a4;
+ (void)performedAction:(id)a0 onEventInCalendar:(id)a1;
+ (void)eventRejected:(id)a0 inApp:(unsigned long long)a1;
+ (void)incrementKeyWithDomain:(id)a0 subdomain:(id)a1 suffix:(id)a2 by:(unsigned long long)a3;
+ (void)hypotheticalContactSuggestionImpressionsIncludingInsignificant:(int)a0;
+ (void)messagesUndisplayablyLost:(long long)a0;
+ (void)app:(id)a0 performedAction:(id)a1 onContacts:(id)a2 withResult:(id)a3 elapsedTime:(unsigned long long)a4;
+ (void)detail:(id)a0 confirmedForContact:(id)a1;
+ (void)messagesLost:(unsigned long long)a0;

@end