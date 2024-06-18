@class _UIFieldEditorSystemInputHostView, UISystemInputViewController, UIVisualEffectView;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {
    _UIFieldEditorSystemInputHostView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
}

@property (readonly, nonatomic) UISystemInputViewController *_systemInputViewController;

- (void)layoutIfNeeded;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)addFieldEditor:(id)a0;
- (BOOL)_isTV;
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)a0;
- (id)_viewForHostingFieldEditor;
- (void)addPlaceholderLabel:(id)a0;
- (void)removeFieldEditor;

@end
