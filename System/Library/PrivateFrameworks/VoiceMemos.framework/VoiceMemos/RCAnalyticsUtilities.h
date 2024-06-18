@interface RCAnalyticsUtilities : NSObject

+ (void)sendNewRecordingDuration:(double)a0;
+ (void)sendDidCaptureModifyExistingRecording;
+ (void)sendRecordingsCount:(long long)a0;
+ (void)sendReceivedSharedRecording;
+ (void)sendDidPlaybackVoiceMemo;
+ (void)sendDidCaptureNewRecording;
+ (void)sendDidTrimVoiceMemo;
+ (void)sendDidShareRecording;
+ (void)sendDidOpenShareMemoController;

@end
