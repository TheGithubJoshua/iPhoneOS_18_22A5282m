@class SBIconView, NSString;

@interface _SBIconListViewDataDraggingContext : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) NSString *bestAvailableUTI;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, nonatomic) long long fileOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithIconView:(id)a0 bestUTI:(id)a1 allowsMoveOperation:(BOOL)a2 fileOptions:(long long)a3;

@end
