@class NSObject;
@protocol OS_dispatch_group;

@interface CCUIAnimationRunner : NSObject {
    NSObject<OS_dispatch_group> *_previousAnimationGroup;
}

+ (id)runner;
+ (void)_runCAAnimationsInBatch:(id)a0 animationGroup:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_runC2AnimationsInBatch:(id)a0 animationGroup:(id)a1 completionHandler:(id /* block */)a2;

- (void)additivelyRunAnimationBatch:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)runAnimationBatch:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
