@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject {
    SBBackgroundFetchTask *_task;
}

@property (readonly, nonatomic) UIFetchContentInBackgroundAction *action;

- (id)initForAppInfo:(id)a0;
- (void)execute;
- (void).cxx_destruct;
- (void)dealloc;

@end
