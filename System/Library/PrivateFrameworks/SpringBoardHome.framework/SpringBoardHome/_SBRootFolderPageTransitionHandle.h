@class NSString, SBRootFolderController;

@interface _SBRootFolderPageTransitionHandle : NSObject <SBRootFolderPageTransition, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) SBRootFolderController *folderController;
@property (nonatomic) long long sourcePageState;
@property (nonatomic) long long destinationPageState;
@property (nonatomic) double pageTransitionProgress;
@property (nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFolderController:(id)a0 destinationPageState:(long long)a1 reason:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setTransitionProgress:(double)a0;
- (id)succinctDescription;
- (void)endTransitionSuccessfully:(BOOL)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
