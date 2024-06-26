@class NSDictionary, NSTextRange, NSAttributedString, NSMutableArray;

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    long long _resolvedBaseDirection;
    long long _fallbackBaseDirection;
    NSMutableArray *_textLayoutFragments;
    unsigned char _containsTextAttachments;
}

@property (copy) NSDictionary *attributes;
@property BOOL isBeginningOfParagraph;
@property BOOL isEndOfParagraph;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)init;
- (BOOL)_containsTextAttachments;
- (void)setAttributedString:(id)a0;
- (id)initWithAttributedString:(id)a0;
- (id)attributedString;
- (void)_setContainsTextAttachments:(BOOL)a0;
- (id)initWithTextAttachment:(id)a0 attributes:(id)a1;
- (void)setParagraphContentRange:(id)a0;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)paragraphContentRange;
- (id)locationForCharacterIndex:(long long)a0 actualRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(id)a0 allowsTrailingEdge:(BOOL)a1;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (id)description;
- (void)setParagraphSeparatorRange:(id)a0;
- (long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)a0;
- (void)synchronizeDocumentRange;
- (id)paragraphSeparatorRange;
- (void)dealloc;
- (id)initWithTextContentManager:(id)a0;
- (id)paragraphRange;
- (void)enumerateSubstringsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
