@class NSString, PDFKitTextViewPrivate;

@interface PDFKitTextView : NSObject <UITextViewDelegate> {
    PDFKitTextViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setup;
- (void)removeFromSuperview;
- (id)layer;
- (BOOL)becomeFirstResponder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textView;
- (id)annotation;
- (void)_keyboardWillShow:(id)a0;
- (void)_updateScaleFactor;
- (void).cxx_destruct;
- (void)_setFont:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidEndEditing:(id)a0;
- (void)_setAlignment:(long long)a0;
- (void)rotateByAngle:(double)a0;
- (void)_adjustScrollViewForKeyboardNotification:(id)a0;
- (void)_applyScale:(double)a0 toView:(id)a1;
- (void)_textWidgetDone;
- (void)_didChangeZoomFactor:(id)a0;
- (void)_setAttributedString:(id)a0;
- (void)_setFontColor:(id)a0;
- (void)_setString:(id)a0;
- (void)_setupTopLevelView;
- (void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 annotationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withAnimationDuration:(double)a3 curve:(long long)a4;
- (BOOL)handleBackTab;
- (BOOL)handleTab;
- (id)initWithAnnotation:(id)a0 pdfPageView:(id)a1 pdfView:(id)a2;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;

@end
