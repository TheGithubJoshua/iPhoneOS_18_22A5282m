@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController *_rootListController;
}

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)loadView;
- (id)initWithTitle:(id)a0 identifier:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupControllerForToolbar:(id)a0;
- (void)dealloc;
- (id)rootListController;

@end
