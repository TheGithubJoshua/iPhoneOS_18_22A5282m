@class SBRootFolderView, NSString;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>

@property (retain, nonatomic) SBRootFolderView *folderView;
@property (nonatomic) double desiredOffscreenFraction;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)layoutIfNeededForDockOffscreenFractionChanged;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)setDockOffscreenFraction:(double)a0;
- (id)initWithFolderView:(id)a0 reason:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
