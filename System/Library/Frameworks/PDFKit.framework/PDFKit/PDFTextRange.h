@class PDFTextPosition;

@interface PDFTextRange : UITextRange {
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

+ (id)textRangeFromSelection:(id)a0;

- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (void).cxx_destruct;
- (id)description;
- (id)initFromPos:(id)a0 toPos:(id)a1;

@end
