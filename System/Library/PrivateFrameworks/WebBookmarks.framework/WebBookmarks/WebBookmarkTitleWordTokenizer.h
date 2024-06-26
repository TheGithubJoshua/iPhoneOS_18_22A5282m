@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {
    NSString *_string;
    unsigned long long _stringLength;
    TIWordTokenizer *_wordTokenizer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOfNextToken;
    unsigned long long _startOfUnclassifiedRangeBeforeNextToken;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)setString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })advanceToNextToken;

@end
