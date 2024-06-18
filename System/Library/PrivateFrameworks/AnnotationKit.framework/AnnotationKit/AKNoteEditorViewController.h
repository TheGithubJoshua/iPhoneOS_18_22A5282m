@class UITextView, AKPopupAnnotation;
@protocol AKNoteEditorViewControllerDelegate;

@interface AKNoteEditorViewController : UIViewController

@property (retain, nonatomic) UITextView *textView;
@property (retain) AKPopupAnnotation *annotation;
@property (weak, nonatomic) id<AKNoteEditorViewControllerDelegate> delegate;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
