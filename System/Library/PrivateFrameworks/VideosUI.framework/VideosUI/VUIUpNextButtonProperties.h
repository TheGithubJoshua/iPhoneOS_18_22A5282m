@class VUIUpNextStateView, NSString, UIView;
@protocol VUIUpNextButtonProtocol;

@interface VUIUpNextButtonProperties : NSObject

@property (readonly, nonatomic) VUIUpNextStateView *addedStateView;
@property (readonly, nonatomic) VUIUpNextStateView *removedStateView;
@property (weak, nonatomic) UIView<VUIUpNextButtonProtocol> *delegate;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) BOOL isWatchListed;
@property (nonatomic) BOOL dismissOnSelect;
@property (nonatomic) BOOL confirmationShouldWaitCompletion;

- (id)init;
- (void)removeNotificationObserver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_errorInUpdatingState:(id)a0;
- (void)_toggleUpNextState;
- (void)callAPIAndToggleUpNextState;
- (void)setupNotificationObserver;
- (void)updateButtonContentView;

@end
