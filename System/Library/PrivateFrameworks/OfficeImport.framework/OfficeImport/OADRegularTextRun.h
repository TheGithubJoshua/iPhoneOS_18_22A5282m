@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (id)init;
- (id)text;
- (BOOL)isEmpty;
- (unsigned long long)characterCount;
- (void).cxx_destruct;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
