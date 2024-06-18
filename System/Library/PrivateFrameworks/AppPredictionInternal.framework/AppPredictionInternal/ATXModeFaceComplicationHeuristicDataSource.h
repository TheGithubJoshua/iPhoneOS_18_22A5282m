@class NSString, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource> {
    NSSet *_allComplicationDescriptors;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_complicationsForPersonalMode;
- (id)_complicationsForReadingMode;
- (id)_complicationsForSleepMode;
- (id)_complicationsForDrivingMode;
- (id)_complicationsForMindfulnessMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (void).cxx_destruct;
- (id)_complicationsForExerciseMode;
- (id)_complicationsForGamingMode;
- (BOOL)_hasSignificantStocksEvents;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (BOOL)_hasSignificantRemindersEvents;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_complicationsForWorkMode;

@end
