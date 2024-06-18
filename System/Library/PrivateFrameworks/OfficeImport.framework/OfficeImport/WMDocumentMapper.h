@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (id)fileName;
- (double)bottomMargin;
- (void)setFileName:(id)a0;
- (id)archiver;
- (void).cxx_destruct;
- (double)leftMargin;
- (double)topMargin;
- (double)rightMargin;
- (id)documentTitle;
- (double)headerMargin;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;
- (void)mapDefaultCssStylesAt:(id)a0;
- (void)mapWithState:(id)a0;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (id)styleMatrix;

@end
