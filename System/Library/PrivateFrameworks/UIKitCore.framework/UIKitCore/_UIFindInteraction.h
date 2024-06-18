@class UIFindInteraction, NSString, UIView;
@protocol _UITextSearching;

@interface _UIFindInteraction : NSObject <UIFindInteractionDelegate, UIInteraction>

@property (retain, nonatomic) UIFindInteraction *wrappedFindInteraction;
@property (weak, nonatomic) id<_UITextSearching> searchableObject;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *replacementText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (void)willMoveToView:(id)a0;
- (id)init;
- (void)findNext;
- (void)didMoveToView:(id)a0;
- (void)presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)findPrevious;
- (void).cxx_destruct;
- (void)dismissFindNavigator;
- (id)findInteraction:(id)a0 sessionForView:(id)a1;
- (void)findInteraction:(id)a0 didBeginFindSession:(id)a1;
- (void)findInteraction:(id)a0 didEndFindSession:(id)a1;

@end
