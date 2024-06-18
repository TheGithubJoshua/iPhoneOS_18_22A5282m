@interface _MFMailRecipientTextField : UITextField

@property (readonly, nonatomic) BOOL isShowingDictationPlaceholder;

- (void)_handleKeyUIEvent:(id)a0;
- (void)paste:(id)a0;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (id)insertDictationResultPlaceholder;
- (id)_previousKeyResponder;
- (id)customOverlayContainer;

@end
