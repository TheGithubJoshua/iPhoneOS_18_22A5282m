@protocol SBFolderControllerDelegate;

@interface _SBHomeScreenFolderDelegate : NSObject

@property (retain, nonatomic) id<SBFolderControllerDelegate> forwardingTarget;
@property (nonatomic) long long dockStyle;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)backgroundViewForDockForRootFolderController:(id)a0;
- (id)initWithForwardingTarget:(id)a0;

@end
