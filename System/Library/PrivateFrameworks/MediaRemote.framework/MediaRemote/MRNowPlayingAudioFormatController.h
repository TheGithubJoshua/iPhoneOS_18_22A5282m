@class NSString, MRNowPlayingAudioFormatContentInfo;
@protocol MRNowPlayingAudioFormatControllerDelegate;

@interface MRNowPlayingAudioFormatController : NSObject

@property (nonatomic) BOOL isUpdating;
@property (nonatomic) BOOL pendingUpdate;
@property (weak, nonatomic) id<MRNowPlayingAudioFormatControllerDelegate> delegate;
@property (readonly, nonatomic) MRNowPlayingAudioFormatContentInfo *audioFormatContentInfo;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasNowPlayingApp;
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (readonly, nonatomic) long long bestAvailableAudioFormat;
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization;

- (id)init;
- (void)updateAudioFormatContentInfo:(id)a0 client:(id)a1 reason:(id)a2;
- (void)updateAudioFormatWithReason:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateNotifications;
- (void)sourceFormatDidChange:(id)a0;

@end
