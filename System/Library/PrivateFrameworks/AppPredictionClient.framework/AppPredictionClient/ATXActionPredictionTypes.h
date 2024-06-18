@interface ATXActionPredictionTypes : NSObject

+ (id)engagementTypeToString:(unsigned long long)a0;
+ (id)actionTypeToString:(unsigned long long)a0;
+ (id)actionFeedbackTypeToString:(unsigned long long)a0;
+ (id)inverseActionFeedbackTypeMapping;
+ (id)actionFeedbackStageToString:(unsigned long long)a0;
+ (unsigned long long)stringToActionExperience:(id)a0 found:(BOOL *)a1;
+ (unsigned long long)stringToActionFeedbackStage:(id)a0 found:(BOOL *)a1;
+ (id)actionTypeToPETString:(unsigned long long)a0;
+ (id)actionExperienceToString:(unsigned long long)a0;

@end
