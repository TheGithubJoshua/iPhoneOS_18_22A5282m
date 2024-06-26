@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {
    UITextInputController *_textInput;
    struct __CFStringTokenizer { } *_tokenizer;
    struct { long long location; long long length; } _tokenizerRange;
    int _tokenizerType;
    BOOL _tokenizerIsInvalid;
    struct __CFStringTokenizer { } *_wordTokenizer;
    struct { long long location; long long length; } _wordTokenizerRange;
    BOOL _wordTokenizerIsInvalid;
}

- (id)_positionFromPosition:(id)a0 offset:(unsigned long long)a1 affinity:(long long)a2;
- (id)initWithTextInputController:(id)a0;
- (long long)_indexForTextPosition:(id)a0;
- (void)invalidateTokenizer;
- (void).cxx_destruct;
- (BOOL)_isDownstreamForDirection:(long long)a0 atPosition:(id)a1;
- (id)_closestTokenSubrangeForPosition:(id)a0 granularity:(long long)a1 downstream:(BOOL)a2;
- (void)dealloc;

@end
