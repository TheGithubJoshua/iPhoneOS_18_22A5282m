@class UIResponder;
@protocol UITextInput;

@interface UITextLiveConversionInteraction : UITextInteraction {
    UIResponder<UITextInput> *_textInput;
    long long _panOffset;
}

@property (readonly) double pointSize;

- (void)willMoveToView:(id)a0;
- (id)initWithTextInput:(id)a0;
- (void).cxx_destruct;
- (void)_pan:(id)a0;
- (void)_tap:(id)a0;
- (id)_liveConversionPanGestureRecognizer;
- (id)_liveConversionTapGestureRecognizer;

@end
