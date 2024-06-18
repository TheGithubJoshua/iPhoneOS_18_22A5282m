@interface DDFaceTimeAction : DDFaceTimeAudioAction

+ (BOOL)isAvailable;

- (id)iconName;
- (id)localizedName;
- (id)notificationTitle;
- (id)dialRequest;

@end
