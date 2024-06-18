@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (unsigned long long)maxLines;
- (id)text;
- (void).cxx_destruct;
- (id)description;
- (id)stars;
- (id)icons;
- (id)inlineRoundedText;
- (id)filterItemsByType:(unsigned long long)a0;

@end
