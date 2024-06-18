@class WAKView, WebHighlightLayer, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {
    WAKView *_targetView;
    WebHighlightLayer *_highlightLayer;
    WebNodeHighlightView *_highlightView;
    struct NakedPtr<WebCore::InspectorController> { struct InspectorController *m_ptr; } _inspectorController;
    id _delegate;
}

- (void)attach;
- (id)highlightView;
- (id)targetView;
- (void)setNeedsDisplay;
- (void)detach;
- (void)setDelegate:(id)a0;
- (id).cxx_construct;
- (id)delegate;
- (void)dealloc;
- (id)initWithTargetView:(id)a0 inspectorController:(struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })a1;
- (struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })inspectorController;

@end
