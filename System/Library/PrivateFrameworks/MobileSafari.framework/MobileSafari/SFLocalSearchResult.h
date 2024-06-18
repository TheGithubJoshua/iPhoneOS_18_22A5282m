@class NSURL, SFText;

@interface SFLocalSearchResult : SFSearchResult {
    NSURL *_url;
    SFText *_title;
}

- (id)url;
- (void).cxx_destruct;
- (void)setUrl:(id)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (id)initWithCompletionMatch:(id)a0;

@end
