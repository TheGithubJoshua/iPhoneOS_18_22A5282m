@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (id)init;
- (id)text;
- (BOOL)isEmpty;
- (unsigned long long)characterCount;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
