@class NSString, MPRemoteCommandHandlerDialogAction, MPCMediaRemoteController;

@interface MPCPlayerCommandDialogAction : NSObject {
    MPRemoteCommandHandlerDialogAction *_action;
    MPCMediaRemoteController *_controller;
}

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)commandRequest;
- (id)initWithMPAction:(id)a0 request:(id)a1;

@end
