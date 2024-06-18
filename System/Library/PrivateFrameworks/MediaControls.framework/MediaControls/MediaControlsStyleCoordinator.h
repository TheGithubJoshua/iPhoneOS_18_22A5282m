@class NSMutableArray;

@interface MediaControlsStyleCoordinator : NSObject {
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

- (void).cxx_destruct;
- (void)animateAlongsideTransition:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performAnimations;
- (void)performCompletions;

@end
