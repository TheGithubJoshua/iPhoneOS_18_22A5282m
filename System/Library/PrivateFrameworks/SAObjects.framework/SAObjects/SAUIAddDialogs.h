@class NSArray, NSString, NSNumber, SAUIListenAfterSpeakingBehavior;

@interface SAUIAddDialogs : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *dialogs;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (copy, nonatomic) NSString *responseMode;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
