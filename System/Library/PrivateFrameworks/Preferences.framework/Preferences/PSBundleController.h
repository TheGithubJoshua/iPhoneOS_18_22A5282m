@class PSListController;

@interface PSBundleController : NSObject {
    PSListController *_parent;
}

- (void)load;
- (void)unload;
- (id)init;
- (id)specifiersWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (id)initWithParentListController:(id)a0;

@end
