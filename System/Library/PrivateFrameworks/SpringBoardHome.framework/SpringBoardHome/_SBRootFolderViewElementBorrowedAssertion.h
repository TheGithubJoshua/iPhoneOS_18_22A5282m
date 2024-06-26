@class SBRootFolderView, NSString;

@interface _SBRootFolderViewElementBorrowedAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (retain, nonatomic) SBRootFolderView *folderView;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)initWithFolderView:(id)a0 reason:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
