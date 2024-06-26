@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>

@property (readonly) long long UNKNOWN;
@property (readonly) long long PLAYED_TO_END;
@property (readonly) long long FORWARDED_TO_END;
@property (readonly) long long ERRORED;
@property (readonly) long long PLAYLIST_CHANGED;
@property (readonly) long long USER_INITIATED;

- (id)init;

@end
