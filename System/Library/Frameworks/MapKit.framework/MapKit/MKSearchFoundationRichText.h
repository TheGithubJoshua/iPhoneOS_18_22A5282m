@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id /* block */ completionHandlers;

- (id)initRichTextTitleWithMapItem:(id)a0 resultsType:(unsigned long long)a1;
- (id)initWithString:(id)a0;
- (void)setFormattedTextPieces:(id)a0;
- (void).cxx_destruct;
- (void)_invokeCompletionHandlers;
- (void)setText:(id)a0;
- (void)loadRichTextWithCompletionHandler:(id /* block */)a0;
- (BOOL)isRichTextResolved;

@end
