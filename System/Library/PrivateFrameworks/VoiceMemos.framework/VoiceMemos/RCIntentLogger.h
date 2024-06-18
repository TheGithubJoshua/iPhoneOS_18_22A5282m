@interface RCIntentLogger : NSObject

+ (void)deleteInteractionsWithUUIDs:(id)a0;
+ (void)_donateInteraction:(id)a0;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)a0;
+ (void)deleteInteractionsWithUUID:(id)a0;
+ (id)interactionForPlaybackVoiceMemo;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)a0;
+ (id)interactionForRecordVoiceMemo;

@end
